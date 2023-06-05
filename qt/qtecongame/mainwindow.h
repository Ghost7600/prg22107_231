#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDialog>
#include <QtWidgets>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QWidget
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    QLabel          *_label;
    QLineEdit       *_lineEdit;
    QCheckBox       *_caseCheckBox;
    QVBoxLayout     *_vlayout;
    QHBoxLayout     *_hlayout;
    QPushButton     *_findButton;
    QPushButton     *_closeButton;
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
