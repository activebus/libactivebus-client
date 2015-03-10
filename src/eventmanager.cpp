#include "eventmanager.h"
#include "eventmanager_p.h"

using namespace AB;

EventManager::EventManager(QObject *parent)
    : QObject(parent)
    , d_ptr(new EventManagerPrivate(this))
{ }

EventManager::~EventManager()
{ }
