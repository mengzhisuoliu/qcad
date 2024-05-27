/**
 * Copyright (c) 2011-2024 by Andrew Mustun. All rights reserved.
 * 
 * This file is part of the QCAD project.
 *
 * QCAD is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * QCAD is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with QCAD.
 */
#include <QCoreApplication>
#include <QWheelEvent>

#include "RToolOptionEventFilter.h"
#include "RMainWindowQt.h"

/**
 * Event filter to catch enter and tab pressed in widgets.
 * This is necessary because some widgets (QLineEdit, QComboBox) handle these key strokes.
 */
RToolOptionEventFilter::RToolOptionEventFilter(QObject* parent) {
}

bool RToolOptionEventFilter::eventFilter(QObject* obj, QEvent* event) {
    if (event->type() == QEvent::KeyPress || event->type() == QEvent::KeyRelease) {
        qDebug() << "RToolOptionEventFilter::eventFilter";
        QKeyEvent* keyEvent = static_cast<QKeyEvent*>(event);
        if (keyEvent->key() == Qt::Key_Tab || keyEvent->key() == Qt::Key_Backtab) {

            // ignore the Tab and Shift+Tab keys
            //event->accept();
            if (event->type() == QEvent::KeyPress) {
                RMainWindowQt* appWin = RMainWindowQt::getMainWindow();
                if (appWin!=NULL) {
                    qDebug() << "fwd to main win";
                    appWin->handleTabKey(obj, keyEvent->key()==Qt::Key_Backtab);
                }
            }
            return true;
            //return QObject::eventFilter(obj, event);
        }

        if (keyEvent->key() == Qt::Key_Enter || keyEvent->key() == Qt::Key_Return) {
            if (event->type() == QEvent::KeyPress) {
                RMainWindowQt* appWin = RMainWindowQt::getMainWindow();
                if (appWin!=NULL) {
                    appWin->handleEnterKey(obj);
                }
            }
            return true;
        }
    }

    // pass the event on to the parent class
    return QObject::eventFilter(obj, event);
}
