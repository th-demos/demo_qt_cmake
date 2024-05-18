#include <iostream>

#include <QtWidgets>
#include <QApplication>
#include <QMainWindow>

class MainWindow: public QMainWindow {
    public:
        explicit MainWindow(QWidget *parent): QMainWindow(parent, Qt::WindowFlags()) {}
};

int main(int argc, char** argv)
{
    QApplication app(argc, argv);
    std::cout << "Hello, World!" << std::endl;
    MainWindow window(nullptr);
    window.show();
    QApplication::exec();
    return 0;
}
