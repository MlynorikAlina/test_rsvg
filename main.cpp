#include <SVGToPNGConverter.h>

#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    /*MainWindow w;
    w.show();*/
    int sz = 450;
    SVGToPNGConverter png(sz, sz);
    png.convert("../test_rsvg/static_style/test.svg", "./", "of.png");
    return 0;
}
