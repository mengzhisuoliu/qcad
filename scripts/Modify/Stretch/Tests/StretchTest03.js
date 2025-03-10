// Auto generated by Testing Dashboard
// File        : scripts/Modify/Stretch/Tests/StretchTest03.js
// Timestamp   : 2019-02-19 10:39:49
// Description : 

include('scripts/Developer/TestingDashboard/TdbTest.js');

function StretchTest03() {
    TdbTest.call(this, 'scripts/Modify/Stretch/Tests/StretchTest03.js');
}

StretchTest03.prototype = new TdbTest();

StretchTest03.prototype.test00 = function() {
    qDebug('running StretchTest03.test00()...');
    this.setUp();
    TdbTest.clickOnWidget('MainWindow::CadToolBar::MainToolsPanel::ShapeToolsPanelButton');
    TdbTest.clickOnWidget('MainWindow::CadToolBar::ShapeToolsPanel::ShapeRectanglePPButton');
    this.setToolOption('Shape/CreatePolyline', 'false');
    this.setToolOption('Shape/Fill', 'false');
    this.setToolOption('Shape/RoundCorners', 'false');
    this.setToolOption('Shape/Radius', '1');
    this.setToolOption('ShapeRectanglePP/Rotate', 'false');
    this.setToolOption('ShapeRectanglePP/Rotation', '0');
    this.updateToolOptions();
    this.setZoom(10, new RVector(5, 5, 0, true));
    var p = new RVector(9.9, 20);
    this.sendMouseEventModelPos(QEvent.MouseButtonPress, p, Qt.LeftButton, 1, 0);
    this.sendMouseEventModelPos(QEvent.MouseButtonRelease, p, Qt.LeftButton, 0, 0);
    this.setZoom(10, new RVector(5, 5, 0, true));
    var p = new RVector(30, 9.9);
    this.sendMouseEventModelPos(QEvent.MouseButtonPress, p, Qt.LeftButton, 1, 0);
    this.sendMouseEventModelPos(QEvent.MouseButtonRelease, p, Qt.LeftButton, 0, 0);
    var p = new RVector(36.6, 17.9);
    this.sendMouseEventModelPos(QEvent.MouseButtonPress, p, Qt.RightButton, 2, 0);
    this.sendMouseEventModelPos(QEvent.MouseButtonRelease, p, Qt.RightButton, 0, 0);
    var p = new RVector(36.9, 19);
    this.sendMouseEventModelPos(QEvent.MouseButtonPress, p, Qt.RightButton, 2, 0);
    this.sendMouseEventModelPos(QEvent.MouseButtonRelease, p, Qt.RightButton, 0, 0);
    TdbTest.clickOnWidget('MainWindow::CadToolBar::MainToolsPanel::EllipseToolsPanelButton');
    TdbTest.clickOnWidget('MainWindow::CadToolBar::EllipseToolsPanel::EllipseCPPButton');
    this.setZoom(10, new RVector(5, 5, 0, true));
    var p = new RVector(25, 14.9);
    this.sendMouseEventModelPos(QEvent.MouseButtonPress, p, Qt.LeftButton, 1, 0);
    this.sendMouseEventModelPos(QEvent.MouseButtonRelease, p, Qt.LeftButton, 0, 0);
    this.setZoom(10, new RVector(5, 5, 0, true));
    var p = new RVector(28, 18);
    this.sendMouseEventModelPos(QEvent.MouseButtonPress, p, Qt.LeftButton, 1, 0);
    this.sendMouseEventModelPos(QEvent.MouseButtonRelease, p, Qt.LeftButton, 0, 0);
    this.setZoom(10, new RVector(5, 5, 0, true));
    var p = new RVector(23.2, 16.7);
    this.sendMouseEventModelPos(QEvent.MouseButtonPress, p, Qt.LeftButton, 1, 0);
    this.sendMouseEventModelPos(QEvent.MouseButtonRelease, p, Qt.LeftButton, 0, 0);
    var p = new RVector(37.2, 23);
    this.sendMouseEventModelPos(QEvent.MouseButtonPress, p, Qt.RightButton, 2, 0);
    this.sendMouseEventModelPos(QEvent.MouseButtonRelease, p, Qt.RightButton, 0, 0);
    var p = new RVector(36.6, 25.3);
    this.sendMouseEventModelPos(QEvent.MouseButtonPress, p, Qt.RightButton, 2, 0);
    this.sendMouseEventModelPos(QEvent.MouseButtonRelease, p, Qt.RightButton, 0, 0);
    TdbTest.clickOnWidget('MainWindow::CadToolBar::MainToolsPanel::ModifyToolsPanelButton');
    TdbTest.clickOnWidget('MainWindow::CadToolBar::ModifyToolsPanel::StretchProButton');
    this.setToolOption('StretchPro/Mode', 'RectangleArea');
    this.updateToolOptions();
    this.setZoom(10, new RVector(5, 5, 0, true));
    var p = new RVector(18, 21.7);
    this.sendMouseEventModelPos(QEvent.MouseButtonPress, p, Qt.LeftButton, 1, 0);
    this.sendMouseEventModelPos(QEvent.MouseButtonRelease, p, Qt.LeftButton, 0, 0);
    this.setZoom(10, new RVector(5, 5, 0, true));
    var p = new RVector(32, 7.9);
    this.sendMouseEventModelPos(QEvent.MouseButtonPress, p, Qt.LeftButton, 1, 0);
    this.sendMouseEventModelPos(QEvent.MouseButtonRelease, p, Qt.LeftButton, 0, 0);
    this.setZoom(10, new RVector(5, 5, 0, true));
    var p = new RVector(29.9, 9.9);
    this.sendMouseEventModelPos(QEvent.MouseButtonPress, p, Qt.LeftButton, 1, 0);
    this.sendMouseEventModelPos(QEvent.MouseButtonRelease, p, Qt.LeftButton, 0, 0);
    this.setZoom(10, new RVector(5, 5, 0, true));
    var p = new RVector(39.9, 10.1);
    this.sendMouseEventModelPos(QEvent.MouseButtonPress, p, Qt.LeftButton, 1, 0);
    this.sendMouseEventModelPos(QEvent.MouseButtonRelease, p, Qt.LeftButton, 0, 0);
    var p = new RVector(38.8, 31);
    this.sendMouseEventModelPos(QEvent.MouseButtonPress, p, Qt.RightButton, 2, 0);
    this.sendMouseEventModelPos(QEvent.MouseButtonRelease, p, Qt.RightButton, 0, 0);
    var p = new RVector(34.4, 31.9);
    this.sendMouseEventModelPos(QEvent.MouseButtonPress, p, Qt.RightButton, 2, 0);
    this.sendMouseEventModelPos(QEvent.MouseButtonRelease, p, Qt.RightButton, 0, 0);
    var p = new RVector(21.8, 26);
    this.sendMouseEventModelPos(QEvent.MouseButtonPress, p, Qt.RightButton, 2, 0);
    this.sendMouseEventModelPos(QEvent.MouseButtonRelease, p, Qt.RightButton, 0, 0);
    this.verifyDrawing('StretchTest03_000.dxf');
    this.tearDown();
    qDebug('finished StretchTest03.test00()');
};

