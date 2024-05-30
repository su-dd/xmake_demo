#ifndef __LIBRARYSHAREDLINK_H__
#define __LIBRARYSHAREDLINK_H__
#include <QWidget>
#include "Library_Api.h"
class LIBRARY_EXPORTS LibrarySharedLinkWidget : public QWidget
{
    Q_OBJECT
public:
    LibrarySharedLinkWidget(QWidget *parent = nullptr);
    ~LibrarySharedLinkWidget();
};
#endif // __LIBRARYSHAREDLINK_H__