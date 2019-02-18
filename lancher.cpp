#include "lancher.h"
#include "ui_lancher.h"
#include <QStyleOption>
#include <QPainter>


Lancher::Lancher(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Lancher)
{
    ui->setupUi(this);
    setWindowTitle("MineCraft");
	// ��������
	gameSetting = new QSettings("config.ini", QSettings::IniFormat);
	loadSetting();
	if (config.backgroundMusicOn)
	{
		// ���ű�������
		backgroundMusicPlayer = new QMediaPlayer(this);
		backgroundMusicPlayer->setMedia(QUrl::fromLocalFile("sound/forest.mp3"));
		backgroundMusicPlayer->play();
	}
}

void Lancher::loadSetting()
{
	config.backgroundMusicOn = gameSetting->value("backgroundMusicOn").toBool();
	config.difficulty = gameSetting->value("difficulty").toInt();
}

Lancher::~Lancher()
{
    delete ui;
}

void Lancher::on_aboutBtn_clicked()
{
	About *aboutDialog = new About();
    aboutDialog->show();
}

void Lancher::on_settingBtn_clicked()
{
	Setting *settingDialog = new Setting();
	settingDialog->show();
}


void Lancher::paintEvent(QPaintEvent *event)
{
    QStyleOption opt;
    opt.init(this);
    QPainter p(this);
    style()->drawPrimitive(QStyle::PE_Widget, &opt, &p, this);
}


