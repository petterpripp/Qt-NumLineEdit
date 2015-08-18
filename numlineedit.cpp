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

#include "numlineedit.h"
#include <stdexcept>


NumLineEdit::NumLineEdit(QWidget * parent )
    :QLineEdit(parent)
{

}


QString NumLineEdit::text()
{
    bool ok;
    double nr;
    QString tmp = this->QLineEdit::text();


    nr = locale.toDouble(tmp,&ok);
    if (ok == false && tmp.length() > 0 ) throw std::logic_error("NumLineEdit::text is not double");
    return QString::number(nr);
}


void NumLineEdit::setText( QString tekst)
{
    bool ok;
    double nr;
    QString tmp;

    nr =  tekst.toDouble(&ok);
    if (ok == false && tekst.length() > 0) throw std::logic_error("NumLineEdit::setText is not double");

    tmp = locale.toString(nr);

    this->QLineEdit::setText(tmp);

}
