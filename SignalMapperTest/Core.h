#pragma once

#include <QObject>
#include <QString>
#include <QMap>
#include <QVector>
#include <QPointer>
#include <QSignalMapper>

class Core : public QObject
{
    Q_OBJECT
    QPointer<QSignalMapper> mapper;
    QMap<QString, QVector<QPointer<QObject>>> fooMap;
public:
    Core();
    ~Core();

    void refreshQObjects(const QString& qsKey, const QString& qsArg);
    void map(const QString& signal, QPointer<QObject> object);
    void unMap(const QString& signal, QPointer<QObject> object);
    void objectDestroyed();

};