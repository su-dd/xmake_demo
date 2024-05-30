#ifndef __CURRENTWIDGET_H__
#define __CURRENTWIDGET_H__

#include <QWidget>

class CurrentWidget : public QWidget
{
    Q_OBJECT
public:
    CurrentWidget(QWidget *parent = nullptr);
    ~CurrentWidget();
};

#endif // __CURRENTWIDGET_H__