/*
 *
 * Layoutblock are used as breaking blocks in a floating layout
 *
 */

#include "layoutblock.h"

layoutblock::layoutblock() : QWidget()
{
	m_layout = new QGridLayout;;
	m_layout->setMargin(4);
	m_layout->setSpacing(4);

	this->setLayout(m_layout);
//	this->setFixedSize(300,90);
	this->setFixedHeight(90);
	this->setBackgroundRole(QPalette::Base);
	this->setAutoFillBackground(true);

}


void layoutblock::addWidget(QWidget * item, int row, int column){

	m_layout->addWidget(item, row, column);

}

QGridLayout * layoutblock::getLayout(){
	return m_layout;
}
