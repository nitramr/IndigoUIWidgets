#include "sc_seg_lines.h"
#include "ui_sc_seg_lines.h"
#include "sccolorfillsbox.h"
#include "scpopupmenu.h"
#include "sccolorpicker.h"

sc_seg_lines::sc_seg_lines(QWidget *parent) :
	ScLayoutSegment(parent),
	ui(new Ui::sc_seg_lines)
{
	ui->setupUi(this);


	// Setup ScColorPicker in ScPopupMenu and add it to ScColorFillsBox
	ScColorPicker * colorPicker = new ScColorPicker();
	colorPicker->setFixedSize(100,100);
	ScPopupMenu * colorPickerMenu = new ScPopupMenu(colorPicker);
	ScColorFillsBox * cfbBorder = new ScColorFillsBox();
	cfbBorder->setMenu(colorPickerMenu);
	ui->verticalLayout_8->insertWidget(0,cfbBorder);

	// connect ScFillsBox with ScColorPicker
	this->connect(colorPicker, SIGNAL(setPreview(QPixmap)), cfbBorder, SLOT(setPixmap(QPixmap)));

}

sc_seg_lines::~sc_seg_lines()
{
	delete ui;
}
