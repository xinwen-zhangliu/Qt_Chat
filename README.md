# Proyecto 1 - Chat
###### Lenguaje usado: C++
###### Objetivo: Aplicar conocimientos del curso, buenas prácticas de porgramación, lenguajes de programación, y programación concurrente.
Esta aplicación proporcionará comunicación entre diversos clientes a través de un servidor, usando programación concurrente. 

###### Descripción detrás del diseño
Esta aplicación aplica el modelo MVC, creando una separación entre la vista y el controlador, la vista fue implementada con Qt, y en la aplicación se usa la convención de signals y slots. 
Decidí solo crear de modelo la clase ChatClient y Parser, ya que para cada request solo es necesario crear un json el cual el servidor recibe y procesa lo que necesitamos, y el json de respuesta es simplemente información del resultado que directo va a imprimirse en la vista, por lo que el Parser está directamente conectado a la clase ChatWindow, el cual es el controlador de la ventada principal, y el que reparte las diferentes señales de respuesta si es necesario al controlador de GroupChat o PrivateChat, así podemos fácilmente organizar las señales del Parser cuando nos responde el servidor. Dentro de ChatWindow creamos las instancias de Parser y ChatClient para mantener modularidad sin necesidad de que las conexiones estén repartidas entre diferentes clases, e igual se crean las instancias de las vistas y se conectan con las señales que recibe del parser. El controlador ChatClient recibe las señales que el cliente genera al interactuar con la interfaz y le dice al modelo las acciones a tomar y también controla lo que recibe de repuesta el modelo del servidor y reparte esas señales a las vistas necesarias.

En el caso del servidor, he creado una clase ServerWorker que es el encargado de representar a cada cliente en el servidor, cada vez que algún cliente se conecta, se crea una instancia de ServerWorker con atributo el socket del cliente conectado y se agrega a un hilo, este se encarga de recibir y escribir jsons , y manejar al socket. Cuando ServerWorker recibe un Json le dice a la clase ChatServer y este se encarga de llamar al Parser para parsear el request, después este manda una señal específica de regreso a ChatServer el cual se encarga de procesar todos los requests de los usuarios, cada request tiene una señal diferente la cual está conectada a los slots específicos que se encargarán de procesarla. Cada request que el Parser mande a ChatServer, se agreaga a una fila de ejecucuón para hacerlo seguro para los hilos y no causar errores. Después de que el request es procesado, responde con un json llamando al hilo específico con el ServerWorker que representa al cliente que va a recibir el json, y el ServerWorker se encarga de escribir el json en el socket. Dentro de las la clase ChatServer igual está la información de los grupos creado y los clientes conectador para que maneje cada request que el usuario pueda generar.

###### Cómo correr la aplicación
Esta aplicación utiliza Qt como framework y Cmake como sistema de contrucción.
Después de haber clonado el repositorio
```console
cd proyecto1_Chat
```
para cargar las configuraciones de cmake y construir 
```console
cmake .
cmake --build .
```
para correr cliente
```console
cd Client/
./Client
```
para correr servidor
```console
cd Server/
./Server
```
###### Especificaciones
Para evita confusiones, en el diseño de la aplicación decidí considerar a los nombres de usuarios y grupos de forma Case Insensitive, por lo que el usuario "User1" y "user1" es considerado como el mismo nombre y note dejará conectarte , por lo que solo habrá un usuario o grupo con alguna conbinación específica de caracteres. 

Para correr el servidor es necesaario pulsar el boton de start server y al pulsar stop server este desconecta a los cliente, lso cuales muestran un pop-up message.

Si el servidor tiene algún error al parsear el json de algún usuario, automáticamente lo desconectará.

Para cambiar el estado de algún usuario enecesitará escribir <STATUS>** en la parte para enviar mensaje publicos, ejemplo si quiero cambiar mi estado a away necesito escribir "AWAY**" y enviarlo como si fuera un mensaje público. Es necesario escribirlo en mayúsculas, si el status no es algunos de los tres descritos en el protocolo se va a ignorar.
  
Los estados están representados por colores , ACTIVE= verde, AWAY = amarillo, BUSY= rojo, todo usuario sale como verde hasta que cambie su estado.
  
Para hablar con usuarios en chat privado necesitas dar doble click al usuario en la lista de usuarios, y si recibes algún mensaje privado de alguien con el cual no tienes abirto ningún chat privado automáticamente se te mostrará la ventana con el mensaje. 
  
Si es que cierras la ventana de algún chat privado o grupal, y lo vuelves a abrir no se mostrarán los mensajes anteriores, solo podrás ver los nuevos que recibas. 
  
Para crear un grupo necesitas seleccionar a los usuarios de la lista, escribir el nombre del grupo en la parte de edición y dar al botón de crear grupo. La ventana se abrira  cuando responda el servidor.
