#include <QApplication>
#include "Headers/chatwindow.h"


int main(int argc, char *argv[]){
    QApplication a(argc, argv);
    ChatWindow chatWin;
    chatWin.show();
    return a.exec();
}
