/*
  objectcontainerinterface_p.h

  This file is part of DeclarativeWidgets, library and tools for creating QtWidget UIs with QML.

  Copyright (C) 2013-2019 Klarälvdalens Datakonsult AB, a KDAB Group company, info@kdab.com
  Author: Kevin Krammer <kevin.krammer@kdab.com>

  Licensees holding valid commercial KDAB DeclarativeWidgets licenses may use this file in
  accordance with DeclarativeWidgets Commercial License Agreement provided with the Software.

  Contact info@kdab.com if any conditions of this licensing are not clear to you.

  This program is free software; you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation, either version 2 of the License, or
  (at your option) any later version.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef OBJECTCONTAINERINTERFACE_H
#define OBJECTCONTAINERINTERFACE_H

#include <QtGlobal>

QT_BEGIN_NAMESPACE
class QObject;
QT_END_NAMESPACE

class ObjectContainerInterface
{
  public:
    virtual ~ObjectContainerInterface() {}

    virtual void dataAppend(QObject *object) = 0;
    virtual int dataCount() const = 0;
    virtual QObject *dataAt(int index) const = 0;
    virtual void dataClear() = 0;
};

#endif // OBJECTCONTAINERINTERFACE_H
