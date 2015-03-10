#ifndef ACTIVEBUSCLIENT_GLOBAL_H
#define ACTIVEBUSCLIENT_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(ACTIVEBUSCLIENT_LIBRARY)
#  define ACTIVEBUSCLIENTSHARED_EXPORT Q_DECL_EXPORT
#else
#  define ACTIVEBUSCLIENTSHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // ACTIVEBUSCLIENT_GLOBAL_H