#include "sccolorfillsbox.h"

#include <QPainter>

ScColorFillsBox::ScColorFillsBox(QWidget *parent) : QPushButton(parent)
{

	this->setFixedWidth(30);
	this->adjustSize();

	m_fills = new QPixmap(this->size());
	m_fills->fill(Qt::white);
	QPainter painter(m_fills);
	painter.setRenderHint(QPainter::Antialiasing);
	painter.setPen(QColor(255,0,0));
	painter.drawLine(QPoint(0,0),QPoint(this->width(),this->height()));
	painter.drawLine(QPoint(0,this->height()),QPoint(this->width(),0));

}

void ScColorFillsBox::setPixmap(QPixmap fills){
	m_fills = new QPixmap(fills);
	update();

}

void ScColorFillsBox::paintEvent(QPaintEvent *){

	QRect rect(0,0, this->width()-1, this->height()-1);
	QBrush brushBackground, brushPattern, brushPixmap;
	brushBackground = QBrush(Qt::white);
	brushPattern = QBrush(Qt::lightGray);
	brushPixmap = QBrush(*m_fills);

	QPainter painter(this);
	painter.setPen(QColor(128,128,128));
	painter.fillRect(rect, brushBackground);

	int cellSize = 6;
	int cellSizeX = this->width() / (this->width() / cellSize);
	int cellSizeY = this->height() / (this->height() / cellSize);

	for(int y = 0; y < cellSize; y++)
		for(int x = y % 2; x < cellSize; x+=2)
			painter.fillRect(QRect(x * cellSizeX, y * cellSizeY, cellSizeX, cellSizeY),brushPattern);

	painter.fillRect(rect, brushPixmap);
	painter.drawRect(rect);


}
