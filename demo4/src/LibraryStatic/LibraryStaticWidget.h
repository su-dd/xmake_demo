#ifndef __LIBRARYSTATICWIDGET_H__
#define __LIBRARYSTATICWIDGET_H__

#include <QWidget>

class LibraryStaticWidget : public QWidget
{
    Q_OBJECT
public:
    LibraryStaticWidget(QWidget *parent = nullptr);
    ~LibraryStaticWidget();
};

#endif // __LIBRARYSTATICWIDGET_H__