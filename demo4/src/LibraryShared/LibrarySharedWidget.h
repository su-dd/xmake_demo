#ifndef __LIBRARYSHARED_H__
#define __LIBRARYSHARED_H__
#include <QWidget>
#include "Library_Api.h"
#include <memory>

class LibrarySharedWidget : public QWidget
{
    Q_OBJECT
public:
    LibrarySharedWidget(QWidget *parent = nullptr);
    ~LibrarySharedWidget();
};

extern "C" LIBRARY_EXPORTS QWidget *createLibrarySharedWidget(QWidget *parent);

#endif // __LIBRARYSHARED_H__