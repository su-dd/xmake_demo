#ifndef __LIBRARY_API_H__
#define __LIBRARY_API_H__

#ifdef _WIN32
#ifdef LIBRARY_EXPORTS
#define LIBRARY_API __declspec(dllexport)
#else
#define LIBRARY_API __declspec(dllimport)
#endif
#elif defined(__GNUC__) && ((__GNUC__ >= 4) || (__GNUC__ == 3 && __GNUC_MINOR__ >= 3))
#define LIBRARY_API __attribute__((visibility("default")))
#else
#define LIBRARY_API
#endif

#endif // __LIBRARY_API_H__