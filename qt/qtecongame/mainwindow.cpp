#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QWidget(parent)
{
    setWindowTitle("Economy Game Project");
    //ui->setupUi(this);
    // Initialize member variables
    _label = new QLabel("Label teste");
    _label = new QLabel("<h2><i>Hello</i> <font color=red>QT!</font></h2>");
    _lineEdit = new QLineEdit(this);
    _caseCheckBox = new QCheckBox("I like This", this);
    _playButton = new QPushButton("Jogar", this);
    _closeButton = new QPushButton("Teste close button", this);


    //Creating Layout
    _vlayout = new QVBoxLayout(this);
    _hlayout = new QHBoxLayout(this);
    QHBoxLayout * sublayout = new QHBoxLayout();
    // Adding widgets to the layouts
    sublayout->addWidget(_label);
    sublayout->addWidget(_closeButton);
    _vlayout->addLayout(sublayout);
    _hlayout->addWidget(_lineEdit);
    _hlayout->addWidget(_caseCheckBox);
    _hlayout->addWidget(_playButton);
    _vlayout->addLayout(_hlayout);

    connect(_closeButton, SIGNAL(clicked()),this,SLOT(close()));
    connect(_playButton, SIGNAL(clicked()),this,SLOT(playSlot()));
    this->setLayout(_vlayout);
    this->show();

}

void MainWindow::playSlot(){

}

MainWindow::~MainWindow()
{
    //delete sublayout;
}

