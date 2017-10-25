#include "sc_seg_xyz_advanced.h"
#include "ui_sc_seg_xyz_advanced.h"

sc_seg_xyz_advanced::sc_seg_xyz_advanced(QWidget *parent) :
	ScLayoutSegment(parent),
	ui(new Ui::sc_seg_xyz_advanced)
{
	ui->setupUi(this);

}

sc_seg_xyz_advanced::~sc_seg_xyz_advanced()
{
	delete ui;
}
