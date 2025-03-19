#include<QtWidgets>

using namespace Qt;
int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    QLabel* lbl;
    QWidget windows;
    windows.resize(600,300);

    QVBoxLayout* layout = new QVBoxLayout;

    QPushButton* butt = new QPushButton("Click me");
    layout->addWidget(butt,0,Qt::AlignCenter);

    lbl = new QLabel("Hello World");
    lbl->setAlignment(Qt::AlignCenter);

    layout->addWidget(lbl,0,Qt::AlignCenter);


QObject::connect(butt, &QPushButton::clicked, [&]() {
        lbl->setText("Pobeda");
// Меняем текст QLabel при нажатии на кнопку
    });
    windows.setLayout(layout);
    windows.show();

    return app.exec();
}
