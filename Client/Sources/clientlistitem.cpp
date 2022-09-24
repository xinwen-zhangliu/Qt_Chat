#include "Headers/clientlistitem.h"




ClientListItem::ClientListItem(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::ClientListItem)
{

}

void ClientListItem::setUsername(const QString &username){
    m_username = username;
}
