#ifndef EVENTMANAGER_H
#define EVENTMANAGER_H

#include "activebus-client_global.h"

#include <QObject>
#include <QSharedPointer>

namespace AB {

class EventManagerPrivate;
class ACTIVEBUSCLIENTSHARED_EXPORT EventManager : public QObject
{
    Q_OBJECT
    Q_DISABLE_COPY(EventManager)
    Q_DECLARE_PRIVATE(EventManager)

public:
    explicit EventManager(QObject *parent = Q_NULLPTR);
    ~EventManager();

private:
    QSharedPointer<EventManagerPrivate> d_ptr;
};

}

#endif // EVENTMANAGER_H
