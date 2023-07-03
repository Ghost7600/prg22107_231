#ifndef MANAGERBUTTONS_H
#define MANAGERBUTTONS_H

#include <QtWidgets>


class Managerbuttons : public QWidget
{
    Q_OBJECT

public:
    Managerbuttons(QWidget *parent = nullptr);
    ~Managerbuttons();

//public slots:
//    void playSlot();

//signals:
//    void startSignal();

//private:
//    //bool ready =0;  //flag to start the game
//    //QLabel          *_label;
//    //QLineEdit       *_lineEdit;
//    //QCheckBox       *_caseCheckBox;
//    QVBoxLayout     *_vlayout;
//    QHBoxLayout     *_hlayout;
//    QPushButton     *_buildingbutton;
};

#endif // MANAGERBUTTONS_H
