#include <QApplication>
#include <QtWidgets>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QLabel *label = new QLabel("<h2> <i> Hello <font color = red> Qt</font> </i></h2>"); //objeto dinamicamente alocado

    //label -> show();

    QWidget *janela = new QWidget ();

    QPushButton *button = new QPushButton("quit");
    QObject::connect(button,SIGNAL(clicked()), &a, SLOT(quit()));

    QVBoxLayout *layout = new QVBoxLayout();
    layout ->addWidget(label);
    layout ->addWidget(button);
    janela ->setLayout(layout);
    janela ->show();


    //button ->show();
    return a.exec();
}
