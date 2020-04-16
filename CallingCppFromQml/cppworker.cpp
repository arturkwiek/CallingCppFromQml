#include "cppworker.h"
#include <QtDebug>

CppWorker::CppWorker(QObject *parent) : QObject(parent)
{

}

void CppWorker::regularMethod()
{
    qDebug() << "regularMethod called.";
}

QString CppWorker::regularMethodWithReturn(QString text, int value)
{
    qDebug() << "regularMethodWithReturn called.";
    return text + QString::number(value);

}

QString CppWorker::regularDebugMethod(QString text)
{
    qDebug() << "regularDebugMethod called.";
    return text;
}

void CppWorker::regularSlot()
{
    qDebug() << "regularSlot called.";

}
