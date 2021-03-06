/*!
 * This file is part of SmartServoFramework.
 * Copyright (c) 2014, INRIA, All rights reserved.
 *
 * SmartServoFramework is free software; you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation; either version 3 of the License, or
 * (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this software. If not, see <http://www.gnu.org/licenses/lgpl-3.0.txt>.
 *
 * \file tabSerial.h
 * \date 17/04/2017
 * \author Emeric Grange <emeric.grange@gmail.com>
 */

#ifndef TABSERIAL_H
#define TABSERIAL_H

#include <QWidget>

namespace Ui {
class tabSerial;
}

class tabSerial : public QWidget
{
    Q_OBJECT

    Ui::tabSerial *ui;

public:
    explicit tabSerial(QWidget *parent = 0);
    ~tabSerial();

    void setInfos(int serial_state, std::string serial_path, int serial_baudrate,
                  int device_protocol, int device_connected);
};

#endif // TABSERIAL_H
