#include "PollApp.h"
#include "QtWidgets/qapplication.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    PollApp w;
    w.show();
    return a.exec();
}
