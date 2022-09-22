#ifndef CHATWINDOW_H
#define CHATWINDOW_H



class ChatWindow::ChatWindow(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::ChatWindow)
    , m_chatClient(new ChatClient(this))
{
public:
    explicit ChatWindow();
};

#endif // CHATWONDOW_H
