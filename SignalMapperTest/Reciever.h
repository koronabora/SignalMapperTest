#pragma once

#include <QObject>
#include <QString>

class Reciever : public QObject
{
    Q_OBJECT

public:
    Reciever();
    ~Reciever();

public slots:
    void refresh(const QString& v);
};