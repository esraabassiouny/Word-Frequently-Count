#include "word_frequently_count.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    word_frequently_count w;
    w.show();
    return a.exec();
}
