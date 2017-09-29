/****************************************************************************
**
** Copyright (C) 2016 The Qt Company Ltd.
** Contact: https://www.qt.io/licensing/
**
** This file is part of the examples of the Qt Toolkit.
**
** $QT_BEGIN_LICENSE:BSD$
** Commercial License Usage
** Licensees holding valid commercial Qt licenses may use this file in
** accordance with the commercial license agreement provided with the
** Software or, alternatively, in accordance with the terms contained in
** a written agreement between you and The Qt Company. For licensing terms
** and conditions see https://www.qt.io/terms-conditions. For further
** information use the contact form at https://www.qt.io/contact-us.
**
** BSD License Usage
** Alternatively, you may use this file under the terms of the BSD license
** as follows:
**
** "Redistribution and use in source and binary forms, with or without
** modification, are permitted provided that the following conditions are
** met:
**   * Redistributions of source code must retain the above copyright
**     notice, this list of conditions and the following disclaimer.
**   * Redistributions in binary form must reproduce the above copyright
**     notice, this list of conditions and the following disclaimer in
**     the documentation and/or other materials provided with the
**     distribution.
**   * Neither the name of The Qt Company Ltd nor the names of its
**     contributors may be used to endorse or promote products derived
**     from this software without specific prior written permission.
**
**
** THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
** "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
** LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
** A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
** OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
** SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
** LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
** DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
** THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
** (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
** OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE."
**
** $QT_END_LICENSE$
**
****************************************************************************/

#include <QPushButton>

#include "flowlayout.h"
#include "window.h"
#include "layoutblock.h"
#include "widgetgroup.h"
#include <QLabel>
#include <QLineEdit>
#include <QSpinBox>
//! [1]
Window::Window()
{

	/*
	 * Setup all needed controls
	 */

	QPushButton *button1 = new QPushButton("&&");
	button1->setFixedSize(22,22);
	QPushButton *button2 = new QPushButton(" ");
	button2->setFixedSize(22,22);
	QPushButton *button3 = new QPushButton(" ");
	button3->setFixedSize(22,22);


	QLabel *label3 = new QLabel("Width");
	label3->setAlignment(Qt::AlignCenter);
	QLabel *label4 = new QLabel("Height");
	label4->setAlignment(Qt::AlignCenter);
	QLabel *label5 = new QLabel("");
	label5->setFixedSize(64,64);
	label5->setStyleSheet("background:#f0f0f0;");
	QLabel *label6 = new QLabel("Origin");
	label6->setAlignment(Qt::AlignCenter);

	/*
	 * Setup first layout block
	 */

	layoutblock * block1 = new layoutblock;
	QGridLayout * block1layout = block1->getLayout();
	block1layout->setRowStretch(0,1);

	/*
	 * Setup all widget groups for layout block 1
	 */

	WidgetGroup * wdgGroup1 = new WidgetGroup(new QSpinBox, "X");
	WidgetGroup * wdgGroup2 = new WidgetGroup(new QSpinBox, "Y");
	WidgetGroup * wdgGroup3 = new WidgetGroup(label5, "Origin");
	WidgetGroup * wdgGroup4 = new WidgetGroup(button2);
	WidgetGroup * wdgGroup5 = new WidgetGroup(button3);
	WidgetGroup * wdgGroup6 = new WidgetGroup(new QSpinBox, "Width");
	WidgetGroup * wdgGroup7 = new WidgetGroup(new QSpinBox, "Height");
	WidgetGroup * wdgGroup8 = new WidgetGroup(button1);

	/*
	 * add all widget groups to layout block 1
	 */

	block1->addWidget(wdgGroup3, 0, 0);

	block1->addWidget(wdgGroup4, 0, 1);
	block1->addWidget(wdgGroup5, 1, 1);

	block1->addWidget(wdgGroup1, 0, 2);
	block1->addWidget(wdgGroup2, 0, 4);

	block1->addWidget(wdgGroup6, 1, 2);
	block1->addWidget(wdgGroup8, 1, 3);
	block1->addWidget(wdgGroup7, 1, 4);


	/*
	 * Setup second layout block
	 */


	layoutblock * block2 = new layoutblock;


	/*
	 * Setup all widget groups for layout block 2
	 */

	WidgetGroup * wdgGroup9 = new WidgetGroup(new QSpinBox, "Others");
	WidgetGroup * wdgGroup10 = new WidgetGroup(new QSpinBox, "Label with some more text:", QBoxLayout::RightToLeft);

	/*
	 * Add all widget groups to layout block 2
	 */

	block2->addWidget(wdgGroup9, 0, 0);
	block2->addWidget(wdgGroup10, 1, 0);

	/*
	 * Setup floating layout and add all blocks to that
	 */

	FlowLayout *flowLayout = new FlowLayout(0,4,0);
	flowLayout->setMargin(0);
	flowLayout->setSpacing(0);

	flowLayout->addWidget(block1);
	flowLayout->addWidget(block2);



    setLayout(flowLayout);

    setWindowTitle(tr("Flow Layout"));
}
//! [1]
