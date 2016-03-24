
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

#pragma once

#include <memory>
#include <QDialog>

#include "ui_AboutChewingEditor.h"

namespace Ui{
	class AboutDialog;
}

class AboutDialog final: public QDialog
{
	Q_OBJECT

    public slots:
        void showupAboutDialog();

	public: 
		explicit AboutDialog(QWidget *parent = 0);
		~AboutDialog();
		std::unique_ptr<Ui::AboutDialog> ui;

    private:
        void setupConnect();
        QString aboutContent = " chewing-editor: Chewing userphrase editor\n"
                " Copyright (C) 2014 Chewing Development Team\n"
                " This program is free software; you can redistribute it and/or modify\n"
                " it under the terms of the GNU General Public License as published by\n"
                " the Free Software Foundation; either version 2 of the License, or\n"
                " (at your option) any later version.\n\n"
                " This program is distributed in the hope that it will be useful,\n"
                " but WITHOUT ANY WARRANTY; without even the implied warranty of\n"
                " MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the\n"
                " GNU General Public License for more details.\n\n"
                " You should have received a copy of the GNU General Public License along\n"
                " with this program; if not, write to the Free Software Foundation, Inc.,\n"
                " 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.\n";
	
};
