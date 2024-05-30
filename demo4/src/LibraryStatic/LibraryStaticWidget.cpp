#include "LibraryStaticWidget.h"
#include <QBoxLayout>
#include <QLabel>
#include <QString>

LibraryStaticWidget::LibraryStaticWidget(QWidget *parent)
    : QWidget(parent)
{
    QHBoxLayout *layout = new QHBoxLayout(this);
    layout->setContentsMargins(0, 0, 0, 0);

    QLabel *label = new QLabel(this);
    label->setText(QStringLiteral("LibraryStatic模块中的窗口"));
    layout->addWidget(label);

    this->setLayout(layout);

    // 设置窗口标题和大小
    this->setWindowTitle("LibraryStaticWidget");
    this->resize(400, 300);
}

LibraryStaticWidget::~LibraryStaticWidget()
{
}
