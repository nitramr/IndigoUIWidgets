#ifndef SC_SEG_LINES_H
#define SC_SEG_LINES_H

#include <QWidget>
#include "sclayoutsegment.h"

namespace Ui {
class sc_seg_lines;
}

class sc_seg_lines : public ScLayoutSegment
{
	Q_OBJECT

public:
	explicit sc_seg_lines(QWidget *parent = 0);
	~sc_seg_lines();

private:
	Ui::sc_seg_lines *ui;
};

#endif // SC_SEG_LINES_H
