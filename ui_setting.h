/********************************************************************************
** Form generated from reading UI file 'setting.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTING_H
#define UI_SETTING_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Setting
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QGroupBox *checkBoxGroupBox;
    QCheckBox *musicCheckBox;
    QGroupBox *difficultyGroupBox;
    QVBoxLayout *verticalLayout;
    QRadioButton *peace;
    QRadioButton *easy;
    QRadioButton *normal;
    QRadioButton *difficult;
    QGroupBox *inputGroupBox;
    QPushButton *resetBtn;
    QPushButton *okBtn;
    QPushButton *cancelBtn;

    void setupUi(QDialog *Setting)
    {
        if (Setting->objectName().isEmpty())
            Setting->setObjectName(QStringLiteral("Setting"));
        Setting->resize(607, 574);
        Setting->setCursor(QCursor(Qt::PointingHandCursor));
        QIcon icon;
        icon.addFile(QStringLiteral(":/lancher/image/icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        Setting->setWindowIcon(icon);
        Setting->setStyleSheet(QLatin1String("QDialog#Setting{\n"
"border-image: url(:/lancher/image/dialog.png);\n"
"}\n"
""));
        gridLayout = new QGridLayout(Setting);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(Setting);
        label->setObjectName(QStringLiteral("label"));
        label->setMinimumSize(QSize(585, 26));
        label->setMaximumSize(QSize(585, 26));
        label->setStyleSheet(QLatin1String("\n"
"font: 75 14pt \"Georgia\";\n"
""));
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 0, 0, 1, 3);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        checkBoxGroupBox = new QGroupBox(Setting);
        checkBoxGroupBox->setObjectName(QStringLiteral("checkBoxGroupBox"));
        checkBoxGroupBox->setMinimumSize(QSize(286, 229));
        checkBoxGroupBox->setStyleSheet(QLatin1String("QGroupBox#checkBoxGroupBox{\n"
"	border-image: url(:/lancher/image/dialog.png);\n"
"}"));
        musicCheckBox = new QCheckBox(checkBoxGroupBox);
        musicCheckBox->setObjectName(QStringLiteral("musicCheckBox"));
        musicCheckBox->setGeometry(QRect(30, 30, 251, 19));

        horizontalLayout_2->addWidget(checkBoxGroupBox);

        difficultyGroupBox = new QGroupBox(Setting);
        difficultyGroupBox->setObjectName(QStringLiteral("difficultyGroupBox"));
        difficultyGroupBox->setMinimumSize(QSize(286, 229));
        difficultyGroupBox->setStyleSheet(QLatin1String("QGroupBox#difficultyGroupBox{\n"
"	border-image: url(:/lancher/image/dialog.png);\n"
"}"));
        verticalLayout = new QVBoxLayout(difficultyGroupBox);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        peace = new QRadioButton(difficultyGroupBox);
        peace->setObjectName(QStringLiteral("peace"));

        verticalLayout->addWidget(peace);

        easy = new QRadioButton(difficultyGroupBox);
        easy->setObjectName(QStringLiteral("easy"));

        verticalLayout->addWidget(easy);

        normal = new QRadioButton(difficultyGroupBox);
        normal->setObjectName(QStringLiteral("normal"));

        verticalLayout->addWidget(normal);

        difficult = new QRadioButton(difficultyGroupBox);
        difficult->setObjectName(QStringLiteral("difficult"));

        verticalLayout->addWidget(difficult);


        horizontalLayout_2->addWidget(difficultyGroupBox);


        verticalLayout_2->addLayout(horizontalLayout_2);

        inputGroupBox = new QGroupBox(Setting);
        inputGroupBox->setObjectName(QStringLiteral("inputGroupBox"));
        inputGroupBox->setMinimumSize(QSize(581, 231));
        inputGroupBox->setStyleSheet(QLatin1String("QGroupBox#inputGroupBox{\n"
"	border-image: url(:/lancher/image/dialog.png);\n"
"}"));

        verticalLayout_2->addWidget(inputGroupBox);


        gridLayout->addLayout(verticalLayout_2, 1, 0, 1, 3);

        resetBtn = new QPushButton(Setting);
        resetBtn->setObjectName(QStringLiteral("resetBtn"));
        resetBtn->setMinimumSize(QSize(131, 41));
        resetBtn->setCursor(QCursor(Qt::PointingHandCursor));
        resetBtn->setStyleSheet(QLatin1String("border-image: url(:/lancher/image/button2.png);\n"
"font: 15pt \"Georgia\";"));

        gridLayout->addWidget(resetBtn, 2, 0, 1, 1);

        okBtn = new QPushButton(Setting);
        okBtn->setObjectName(QStringLiteral("okBtn"));
        okBtn->setMinimumSize(QSize(131, 41));
        okBtn->setCursor(QCursor(Qt::PointingHandCursor));
        okBtn->setStyleSheet(QLatin1String("border-image: url(:/lancher/image/button2.png);\n"
"font: 15pt \"Georgia\";"));

        gridLayout->addWidget(okBtn, 2, 1, 1, 1);

        cancelBtn = new QPushButton(Setting);
        cancelBtn->setObjectName(QStringLiteral("cancelBtn"));
        cancelBtn->setMinimumSize(QSize(131, 41));
        cancelBtn->setCursor(QCursor(Qt::PointingHandCursor));
        cancelBtn->setStyleSheet(QLatin1String("border-image: url(:/lancher/image/button2.png);\n"
"font: 15pt \"Georgia\";"));

        gridLayout->addWidget(cancelBtn, 2, 2, 1, 1);


        retranslateUi(Setting);
        QObject::connect(cancelBtn, SIGNAL(released()), Setting, SLOT(close()));

        QMetaObject::connectSlotsByName(Setting);
    } // setupUi

    void retranslateUi(QDialog *Setting)
    {
        Setting->setWindowTitle(QApplication::translate("Setting", "Dialog", nullptr));
        label->setText(QApplication::translate("Setting", "Restart game to apply changes.", nullptr));
        checkBoxGroupBox->setTitle(QApplication::translate("Setting", "Select", nullptr));
        musicCheckBox->setText(QApplication::translate("Setting", "Background Music", nullptr));
        difficultyGroupBox->setTitle(QApplication::translate("Setting", "Difficulty", nullptr));
        peace->setText(QApplication::translate("Setting", "Peace", nullptr));
        easy->setText(QApplication::translate("Setting", "Easy", nullptr));
        normal->setText(QApplication::translate("Setting", "Normal", nullptr));
        difficult->setText(QApplication::translate("Setting", "Difficult", nullptr));
        inputGroupBox->setTitle(QApplication::translate("Setting", "Input", nullptr));
        resetBtn->setText(QApplication::translate("Setting", "Reset", nullptr));
        okBtn->setText(QApplication::translate("Setting", "OK", nullptr));
        cancelBtn->setText(QApplication::translate("Setting", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Setting: public Ui_Setting {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTING_H
