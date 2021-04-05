#include "Reciever.h"
#include <QDebug>

Reciever::Reciever()
{}

Reciever::~Reciever()
{}

void Reciever::refresh(const QString& v)
{
    qDebug() << "[" << this << "] receved <refresh> signal with data: " << v;
}