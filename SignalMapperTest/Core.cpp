#include "Core.h"

Core::Core()
    :mapper(new QSignalMapper(this))
{
    //connect(button, &QPushButton::clicked, signalMapper, &QSignalMapper::map);
}

Core::~Core()
{}

void Core::refreshQObjects(const QString& qsKey, const QString& qsArg)
{
       
}

void Core::map(const QString& signal, QPointer<QObject> object)
{
    QPointer<QObject> tempObject = new QObject(this);
    fooMap[signal].append(tempObject);
    mapper->setMapping(tempObject, object);
}

void Core::unMap(const QString& signal, QPointer<QObject> object)
{}

void Core::objectDestroyed()
{}