#ifndef WIDGETGROUP_H
#define WIDGETGROUP_H

#include <QWidget>
#include <QBoxLayout>
#include <QLabel>

class WidgetGroup : public QWidget
{

private:
	QBoxLayout * m_layout;
	QWidget * m_child;
	QLabel * m_label;
	QBoxLayout::Direction m_direction;
	QString m_text;

public:

	explicit WidgetGroup(QWidget *child = NULL, QString text = "", QBoxLayout::Direction direction = QBoxLayout::TopToBottom);
	void setWidget(QWidget * child);
	void setLabel(QString text);
	void setDirection(QBoxLayout::Direction direction);
	QWidget *widget();
};

#endif // WIDGETGROUP_H
