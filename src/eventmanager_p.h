#ifndef EVENTMANAGER_P_H
#define EVENTMANAGER_P_H

#include "eventmanager.h"

namespace AB {

class EventManagerPrivate
{
    Q_DISABLE_COPY(EventManagerPrivate)
    Q_DECLARE_PUBLIC(EventManager)

public:
    EventManagerPrivate(EventManager *_q)
        : q_ptr(_q)
    { }

private:
    EventManager *q_ptr;
};

}

#endif // EVENTMANAGER_P_H

