#ifndef CPPWORKER_H
#define CPPWORKER_H

#include <QObject>

class CppWorker : public QObject
{
    Q_OBJECT
public:
    explicit CppWorker(QObject *parent = nullptr);

    Q_INVOKABLE void regularMethod();

    Q_INVOKABLE QString regularMethodWithReturn(QString text, int value);
    Q_INVOKABLE QString regularDebugMethod(QString text);

signals:

public slots:
    void regularSlot();
};

#endif // CPPWORKER_H
