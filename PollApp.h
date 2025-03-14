#ifndef POLLAPP_H
#define POLLAPP_H

#include "QtWidgets/qmainwindow.h"
#include "ui_PollApp.h"

class PollApp : public QMainWindow
{
    Q_OBJECT

public:
    PollApp(QWidget *parent = nullptr);
    ~PollApp() = default;

private:
    Ui::PollAppClass ui;
};

#endif