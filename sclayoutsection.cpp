
#include <QLayout>
#include <QPainter>
#include <QWidgetAction>
#include <QMenu>
#include <QDebug>
#include "sclayoutsection.h"
#include "scpopupmenu.h"


ScLayoutSectionHeader::ScLayoutSectionHeader(QString text, QWidget *menu, bool toggle, QWidget *parent) : QWidget(parent)
{
	QFont m_font(this->font());
	m_font.setBold(true);

	m_caption = new QLabel();
	m_caption->setText(text);
	m_caption->setFont(m_font);

	m_btnExtended = new QPushButton();
	m_btnExtended->setFixedSize(24,24);
	m_btnExtended->setIcon(QIcon(":icons/assets/ic_settings.png"));
	m_btnExtended->setFlat(true);

	if(menu == 0){
		m_btnExtended->hide();
	}else{

		ScPopupMenu * menuExtended = new ScPopupMenu(menu);

		m_btnExtended->setMenu(menuExtended);
		m_btnExtended->setStyleSheet("QPushButton::menu-indicator { image: none; }");
	}


	m_btnOnOff = new QPushButton();
	m_btnOnOff->setFixedSize(24,24);
	m_btnOnOff->setCheckable(true);
	m_btnOnOff->setIcon(QIcon(":icons/assets/ic_power_settings.png"));
	m_btnOnOff->setFlat(true);

	if(!toggle){
		m_btnOnOff->hide();
	}


	QHBoxLayout *m_headerLayout = new QHBoxLayout();
	m_headerLayout->addWidget(m_caption);
	m_headerLayout->addStretch(0);
	m_headerLayout->addWidget(m_btnExtended);
	m_headerLayout->addWidget(m_btnOnOff);
	m_headerLayout->setContentsMargins(8,0,8,0);

	this->setLayout(m_headerLayout);
	this->setFixedHeight(30);

	this->connect(m_btnOnOff, SIGNAL(toggled(bool)),this, SLOT(setToggleState()));

}

void ScLayoutSectionHeader::paintEvent(QPaintEvent *)
{

	QColor lineColor(128,128,128,128);
	int lineWidth = 1;

	QPainter painter(this);
	painter.setPen(lineColor);
	painter.drawLine(0,0,this->width(), 0);
	painter.drawLine(0,this->height()-lineWidth,this->width(), this->height()-lineWidth);

}

void ScLayoutSectionHeader::setToggleOff(bool isOff){
	m_btnOnOff->setChecked(isOff);
}


void ScLayoutSectionHeader::setToggleState(){
	if(m_btnOnOff->isChecked()){
		emit toggleState(true);
	}else emit toggleState(false);

}




ScLayoutSection::ScLayoutSection(QString text, QWidget *menu, bool toggle, QWidget *parent) : QWidget(parent)
{

	this->setMinimumWidth(300);
	m_flowLayout = new FlowLayout();

	m_header = new ScLayoutSectionHeader(text, menu, toggle);


	QVBoxLayout * m_mainLayout = new QVBoxLayout();
	m_mainLayout->setContentsMargins(0,0,0,0);
	m_mainLayout->setMargin(0);
	m_mainLayout->addWidget(m_header);
	m_mainLayout->addLayout(m_flowLayout);
	this->setLayout(m_mainLayout);

	this->connect(m_header, SIGNAL(toggleState(bool)),this, SLOT(setToggleIsOff(bool)));

}


void ScLayoutSection::addWidget(QWidget * item){

	m_flowLayout->addWidget(item);

}


void ScLayoutSection::setToggleOff(bool isOff){
	m_header->setToggleOff(isOff);
}


void ScLayoutSection::setToggleIsOff(bool state){
	emit toggleState(state);
	qDebug() << "emit: toggle is off " << state;
}
