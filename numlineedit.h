/*  -*- C++ -*-
    Copyright (C) 2015 Petter Olav Pripp (petter.pripp@yahoo.com)

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef NUMLINEEDIT_H
#define NUMLINEEDIT_H

#include <QLineEdit>
#include <QLocale>


class NumLineEdit : public QLineEdit
{
    Q_OBJECT
public:
    NumLineEdit(QWidget * parent = 0);
    QString	text();
    void setText(  QString tekst );

private:
    QLocale locale;

};

#endif // NUMLINEEDIT_H
