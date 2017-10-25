#ifndef SC_SEG_XYZ_ADVANCED_H
#define SC_SEG_XYZ_ADVANCED_H

#include <QWidget>
#include "sclayoutsegment.h"

namespace Ui {
class sc_seg_xyz_advanced;
}

class sc_seg_xyz_advanced : public ScLayoutSegment
{
	Q_OBJECT

public:
	explicit sc_seg_xyz_advanced(QWidget *parent = 0);
	~sc_seg_xyz_advanced();

private:
	Ui::sc_seg_xyz_advanced *ui;
};

#endif // SC_SEG_XYZ_ADVANCED_H
