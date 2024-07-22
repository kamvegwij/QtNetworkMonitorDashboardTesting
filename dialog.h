#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include "QMainWindow"
#include <C:\Lib\pcap.h>

QT_BEGIN_NAMESPACE
namespace Ui {
class Dialog;
}
QT_END_NAMESPACE

class Dialog : public QDialog
{
    Q_OBJECT

public:
    Dialog(QWidget *parent = nullptr);
    ~Dialog();

    void startCapture();

private:
    Ui::Dialog *ui;
    static void packetHandler(u_char *userData, const pcap_pkthdr* pkthdr, const u_char* packet);
};
#endif // DIALOG_H
