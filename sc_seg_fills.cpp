#include "sc_seg_fills.h"
#include "ui_sc_seg_fills.h"
#include "scpopupmenu.h"

sc_seg_fills::sc_seg_fills(QWidget *parent) :
	ScLayoutSegment(parent),
	ui(new Ui::sc_seg_fills)
{
	ui->setupUi(this);



}

sc_seg_fills::~sc_seg_fills()
{
	delete ui;
}
