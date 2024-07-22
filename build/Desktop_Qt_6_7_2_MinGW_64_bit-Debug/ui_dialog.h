/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *visuals_container;
    QHBoxLayout *horizontalLayout;
    QGraphicsView *charts_1;
    QGraphicsView *charts_2;
    QTableView *data_table;
    QLabel *label;
    QLabel *time_label;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName("Dialog");
        Dialog->resize(984, 600);
        Dialog->setStyleSheet(QString::fromUtf8("background-color: black;"));
        verticalLayoutWidget = new QWidget(Dialog);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(70, 130, 901, 391));
        visuals_container = new QVBoxLayout(verticalLayoutWidget);
        visuals_container->setObjectName("visuals_container");
        visuals_container->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        charts_1 = new QGraphicsView(verticalLayoutWidget);
        charts_1->setObjectName("charts_1");
        charts_1->setStyleSheet(QString::fromUtf8("background-color: white;"));
        charts_1->setFrameShadow(QFrame::Raised);
        charts_1->setLineWidth(23);

        horizontalLayout->addWidget(charts_1);

        charts_2 = new QGraphicsView(verticalLayoutWidget);
        charts_2->setObjectName("charts_2");
        charts_2->setStyleSheet(QString::fromUtf8("background-color: white;"));
        charts_2->setFrameShadow(QFrame::Raised);
        charts_2->setLineWidth(23);

        horizontalLayout->addWidget(charts_2);


        visuals_container->addLayout(horizontalLayout);

        data_table = new QTableView(verticalLayoutWidget);
        data_table->setObjectName("data_table");
        data_table->setStyleSheet(QString::fromUtf8("background-color: white;"));
        data_table->setShowGrid(true);
        data_table->setGridStyle(Qt::DashDotDotLine);

        visuals_container->addWidget(data_table);

        label = new QLabel(Dialog);
        label->setObjectName("label");
        label->setGeometry(QRect(70, 80, 251, 41));
        label->setStyleSheet(QString::fromUtf8("color: white;\n"
"background: purple;"));
        label->setFrameShape(QFrame::Panel);
        label->setFrameShadow(QFrame::Sunken);
        time_label = new QLabel(Dialog);
        time_label->setObjectName("time_label");
        time_label->setGeometry(QRect(920, 80, 51, 41));
        time_label->setStyleSheet(QString::fromUtf8("color: white;\n"
"background: blue;"));
        time_label->setFrameShape(QFrame::Panel);
        time_label->setFrameShadow(QFrame::Sunken);

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Dialog", "Network Monitoring Tool (JUNGO)", nullptr));
        time_label->setText(QCoreApplication::translate("Dialog", "0:00", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
