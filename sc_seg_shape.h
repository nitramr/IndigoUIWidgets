#ifndef SC_SEG_SHAPE_H
#define SC_SEG_SHAPE_H

#include <QWidget>
#include "sclayoutsegment.h"

namespace Ui {
class sc_seg_shape;
}

class sc_seg_shape : public ScLayoutSegment
{
	Q_OBJECT

public:
	explicit sc_seg_shape(QWidget *parent = 0);
	~sc_seg_shape();

private:
	Ui::sc_seg_shape *ui;

};

#endif // SC_SEG_SHAPE_H
