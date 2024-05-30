#include "LibrarySharedWidget.h"
#include <QBoxLayout>
#include <QLabel>
#include <QString>

LibrarySharedWidget::LibrarySharedWidget(QWidget *parent)
    : QWidget(parent)
{
    QHBoxLayout *layout = new QHBoxLayout(this);
    layout->setContentsMargins(0, 0, 0, 0);

    QLabel *label = new QLabel(this);
    label->setText(QString::fromUtf8("LibraryShared模块中的窗口"));
    layout->addWidget(label);

    this->setLayout(layout);

    // 设置窗口标题和大小
    this->setWindowTitle("LibrarySharedWidget");
    this->resize(400, 300);
}

LibrarySharedWidget::~LibrarySharedWidget()
{
}

QWidget *createLibrarySharedWidget(QWidget *parent)
{
    return new LibrarySharedWidget(parent);
}
