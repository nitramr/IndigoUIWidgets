/*
 *
 * WidgetGroup is a small layout container which holds the widget and the label
 *
 */


#include "widgetgroup.h"
#include <QFont>

WidgetGroup::WidgetGroup(QWidget *child, QString text, QBoxLayout::Direction direction) : QWidget()
{


	QFont font(this->font());
	font.setPointSize(8);

	if(child)
		m_child = child;
	else
		m_child = new QWidget();

	m_direction = direction;
	m_text = text;


	m_layout = new QBoxLayout(m_direction);
	m_layout->setAlignment(Qt::AlignTop);
	m_layout->setMargin(0);
	m_layout->setSpacing(0);
	this->setLayout(m_layout);

	m_label = new QLabel();
	m_label->setFont(font);
	m_label->setAlignment(Qt::AlignCenter);
//	m_label->setBackgroundRole(QPalette::Window);
//	m_label->setAutoFillBackground(true);
	setLabel(m_text);

	addWidget(m_child);

//	this->setBackgroundRole(QPalette::Highlight);
//	this->setAutoFillBackground(true);

}

void WidgetGroup::addWidget(QWidget * child){
	m_child = child;
	m_layout->insertWidget(0, m_child);
	this->adjustSize();
}

void WidgetGroup::setLabel(QString text){

	m_label->setText(text);

	switch(m_direction){
	case QBoxLayout::RightToLeft:
		m_label->setContentsMargins(0,0,4,0);
		m_label->setAlignment(Qt::AlignVCenter | Qt::AlignRight);
		break;
	case QBoxLayout::LeftToRight:
		m_label->setContentsMargins(4,0,0,0);
		m_label->setAlignment(Qt::AlignVCenter | Qt::AlignLeft);
		break;
	default:
		m_label->setContentsMargins(0,0,0,0);
		m_label->setAlignment(Qt::AlignCenter);
	}

	m_layout->insertWidget(1, m_label);

}

void WidgetGroup::setDirection(QBoxLayout::Direction direction){

	m_layout->setDirection(direction);
	setLabel(m_text);

}
