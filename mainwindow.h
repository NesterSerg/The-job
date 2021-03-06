#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>
#include <QMenu>
#include <QFileDialog>
#include <QMessageBox>
#include "QDPoint.h"
#include "operators.h"
#include "mfe.h"
namespace Ui
{
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void about();
    void exit();
    void selectDirectory();
    void on_pushButton_clicked();
    void on_WcheckBox_clicked();

private:
    Ui::MainWindow *ui;
    QMenu *menu;
    MFE mfe;
    void create_menu();
    QString directory;
    void loadPath();
    void savePath();

};
#endif // MAINWINDOW_H
