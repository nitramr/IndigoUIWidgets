#ifndef SC_SEG_FILLS_H
#define SC_SEG_FILLS_H

#include <QWidget>
#include "sclayoutsegment.h"

namespace Ui {
class sc_seg_fills;
}

class sc_seg_fills : public ScLayoutSegment
{
	Q_OBJECT

public:
	explicit sc_seg_fills(QWidget *parent = 0);
	~sc_seg_fills();

private:
	Ui::sc_seg_fills *ui;
};

#endif // SC_SEG_SHAPE_H
