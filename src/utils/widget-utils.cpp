#include <QtGui>

#include "widget-utils.h"

// Create a new widget, which has a spinning gif in the center
QWidget* newLoadingView()
{
    QWidget *view = new QWidget;
    view->setObjectName("LoadingView");

    QVBoxLayout *layout = new QVBoxLayout;
    view->setLayout(layout);

    QMovie *gif = new QMovie(":/images/loading.gif");
    QLabel *label = new QLabel;
    label->setMovie(gif);
    label->setAlignment(Qt::AlignCenter);
    gif->start();

    layout->addWidget(label);

    return view;
}

