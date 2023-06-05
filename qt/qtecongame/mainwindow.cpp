#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QWidget(parent)
{
    setWindowTitle("Economy Game Project");
    //ui->setupUi(this);
    // Initialize member variables
    _label = new QLabel("Label teste");
    _label = new QLabel("<h2><i>Hello</i> <font color=red>QT!</font></h2>");
    _lineEdit = new QLineEdit(this);
    _caseCheckBox = new QCheckBox("Checkbox", this);
    _findButton = new QPushButton("Find", this);
    _closeButton = new QPushButton("Teste close button", this);
    ui = new Ui::MainWindow;  // Assuming Ui::MainWindow is a separate class or generated code

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
    _hlayout->addWidget(_findButton);
    _vlayout->addLayout(_hlayout);


    this->setLayout(_vlayout);
    this->show();
}

MainWindow::~MainWindow()
{
    //delete sublayout;
}

