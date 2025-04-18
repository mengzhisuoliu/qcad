/**
 * Copyright (c) 2011-2018 by Andrew Mustun. All rights reserved.
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
#include <QHelpEvent>

#include "REventFilter.h"
#include "RListView.h"

RListView::RListView(QWidget* parent) :
    QListView(parent) {

    installEventFilter(new REventFilter(QEvent::KeyPress, true));
    installEventFilter(new REventFilter(QEvent::KeyRelease, true));
}

bool RListView::event(QEvent* e) {
    QHelpEvent* helpEvent = dynamic_cast<QHelpEvent*>(e);
    if (e->type()==QEvent::ToolTip && helpEvent!=NULL) {
        emit signalToolTipRequested(helpEvent);
        e->accept();
        return true;
    }

    return QListView::event(e);
}
