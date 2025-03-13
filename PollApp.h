#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_PollApp.h"

class PollApp : public QMainWindow
{
    Q_OBJECT

public:
    PollApp(QWidget *parent = nullptr);
    ~PollApp();

private:
    Ui::PollAppClass ui;
};