#include "dialog.h"
#include "ui_dialog.h"
#include "QTime"
QString GetTime();

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);
    ui->time_label->setText(GetTime());
}

Dialog::~Dialog()
{
    delete ui;
}

void startCapture() {
    pcap_if_t *allDevices, *device;
    char errorBuffer[PCAP_ERRBUF_SIZE];

    if (pcap_findalldevs(&allDevices, errorBuffer) == -1) {
        qCritical() << "Error finding devices: " << errorBuffer;
        return;
    }

    device = allDevices;  // For simplicity, use the first device
    pcap_t *handle = pcap_open_live(device->name, BUFSIZ, 1, 1000, errorBuffer);

    if (handle == nullptr) {
        qCritical() << "Couldn't open device: " << errorBuffer;
        return;
    }

    pcap_loop(handle, 0, packetHandler, nullptr);
    pcap_freealldevs(allDevices);
}

static void packetHandler(u_char *userData, const pcap_pkthdr* pkthdr, const u_char* packet) {
    qDebug() << "Packet captured: " << pkthdr->len << " bytes";
    // Process packet data...
}

QString GetTime()
{
    QTime currentTime = QTime::currentTime();
    QString sCurrentTime = currentTime.toString("hh:mm:ss");

    return sCurrentTime;
}
