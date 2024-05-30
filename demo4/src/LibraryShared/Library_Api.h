#ifndef __LIBRARY_API_H__
#define __LIBRARY_API_H__

#include <QtCore/QtGlobal>

#ifdef LIBRARY_SHARED
#define LIBRARY_EXPORTS Q_DECL_EXPORT
#else
#define LIBRARY_EXPORTS Q_DECL_IMPORT
#endif

#endif // __LIBRARY_API_H__