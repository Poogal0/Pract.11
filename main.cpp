#include <QApplication>
#include <QWidget>
#include <QLineEdit>
#include <QLabel>
#include <QPushButton>
#include <QFileDialog>

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);

    QWidget window;
    window.setWindowTitle("Image Viewer");
    window.setFixedSize(640, 480);

    QLineEdit *lineEdit = new QLineEdit(&window);
    lineEdit->setGeometry(10, 10, 500, 30);
    window.show();

    return app.exec();
}
