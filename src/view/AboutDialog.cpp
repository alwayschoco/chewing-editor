/*
 * chewing-editor: Chewing userphrase editor
 * Copyright (C) 2014 Chewing Development Team

 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.

 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.

 * You should have received a copy of the GNU General Public License along
 * with this program; if not, write to the Free Software Foundation, Inc.,
 * 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
 */

#include "AboutDialog.h"
#include "ui_AboutChewingEditor.h"
#include <QDialogButtonBox>

AboutDialog::AboutDialog(QWidget *parent):
QDialog(parent),
ui(new Ui::AboutDialog)
{

    ui->setupUi(this);
    (ui.get()->about)->setText(aboutContent);
    setupConnect();
    //connect the OK button
}

AboutDialog::~AboutDialog()
{

}

void AboutDialog::showupAboutDialog()
{
    emit this->exec();
}

void AboutDialog::setupConnect()
{
    connect(
                ui.get()->buttonBox, SIGNAL(accepted()), this, SLOT(accept())
    );
}
