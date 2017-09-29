#ifndef WIDGETGROUP_H
#define WIDGETGROUP_H

#include <QWidget>
#include <QBoxLayout>
#include <QLabel>
#include <QtUiPlugin/QDesignerExportWidget>

class QDESIGNER_WIDGET_EXPORT WidgetGroup : public QWidget
{

	Q_OBJECT

private:
	QBoxLayout * m_layout;
	QWidget * m_child;
	QLabel * m_label;
	QBoxLayout::Direction m_direction;
	QString m_text;

public:

	explicit WidgetGroup(QWidget *child, QString text, QBoxLayout::Direction direction = QBoxLayout::TopToBottom, QWidget *parent = 0);
	explicit WidgetGroup(QWidget* parent = 0);
	void setWidget(QWidget * child);
	void setLabel(QString text);
	void setDirection(QBoxLayout::Direction direction);
	QWidget *widget();
};

#endif // WIDGETGROUP_H
