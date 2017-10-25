#include "sc_seg_lines.h"
#include "ui_sc_seg_lines.h"
#include "scpopupmenu.h"

sc_seg_lines::sc_seg_lines(QWidget *parent) :
	ScLayoutSegment(parent),
	ui(new Ui::sc_seg_lines)
{
	ui->setupUi(this);



}

sc_seg_lines::~sc_seg_lines()
{
	delete ui;
}
