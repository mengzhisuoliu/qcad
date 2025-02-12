// Auto generated by Testing Dashboard
// File        : scripts/Draw/Arc/ArcTPR/Tests/ArcTPRTest01.js
// Timestamp   : Fri Dec 13 09:06:38 2024
// Description : 

include('scripts/Developer/TestingDashboard/TdbTest.js');

function ArcTPRTest01() {
    TdbTest.call(this, 'scripts/Draw/Arc/ArcTPR/Tests/ArcTPRTest01.js');
}

ArcTPRTest01.prototype = new TdbTest();

ArcTPRTest01.prototype.test00 = function() {
    qDebug('running ArcTPRTest01.test00()...');
    this.setUp();
    this.importFile('scripts/Draw/Arc/ArcTPR/Tests/data/four_solutions.dxf');
    TdbTest.clickOnWidget('MainWindow::CadToolBar::MainToolsPanel::ArcToolsPanelButton');
    TdbTest.clickOnWidget('MainWindow::CadToolBar::ArcToolsPanel::ArcTPRButton');
    this.setToolOption('ArcTPR/Radius', '80');
    this.updateToolOptions();
    this.setToolOption('ArcTPR/Radius', '80');
    this.updateToolOptions();
    this.setZoom(7.708939708939709, new RVector(3.3679881337648325,3.3853829557712913));
    var p = new RVector(100.148193, 49.929342);
    this.sendMouseEventModelPos(QEvent.MouseButtonPress, p, Qt.LeftButton, 1, 0);
    this.sendMouseEventModelPos(QEvent.MouseButtonRelease, p, Qt.LeftButton, 0, 0);
    var p = new RVector(100.148193, 0.246764);
    this.sendMouseEventModelPos(QEvent.MouseButtonPress, p, Qt.LeftButton, 1, 0);
    this.sendMouseEventModelPos(QEvent.MouseButtonRelease, p, Qt.LeftButton, 0, 0);
    var p = new RVector(85.489887, 18.148058);
    this.sendMouseEventModelPos(QEvent.MouseButtonPress, p, Qt.LeftButton, 1, 0);
    this.sendMouseEventModelPos(QEvent.MouseButtonRelease, p, Qt.LeftButton, 0, 0);
    var p = new RVector(67.848031, 19.185814);
    this.sendMouseEventModelPos(QEvent.MouseButtonPress, p, Qt.RightButton, 2, 0);
    this.sendMouseEventModelPos(QEvent.MouseButtonRelease, p, Qt.RightButton, 0, 0);
    var p = new RVector(67.069714, 19.704693);
    this.sendMouseEventModelPos(QEvent.MouseButtonPress, p, Qt.RightButton, 2, 0);
    this.sendMouseEventModelPos(QEvent.MouseButtonRelease, p, Qt.RightButton, 0, 0);
    this.verifyDrawing('ArcTPRTest01_000.dxf');
    this.tearDown();
    qDebug('finished ArcTPRTest01.test00()');
};

