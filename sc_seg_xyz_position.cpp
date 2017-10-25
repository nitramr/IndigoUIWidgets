#include "sc_seg_xyz_position.h"
#include "ui_sc_seg_xyz_position.h"

sc_seg_xyz_position::sc_seg_xyz_position(QWidget *parent) :
	ScLayoutSegment(parent),
	ui(new Ui::sc_seg_xyz_position)
{
	ui->setupUi(this);

}

sc_seg_xyz_position::~sc_seg_xyz_position()
{
	delete ui;
}
