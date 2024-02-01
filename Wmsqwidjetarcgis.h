
// Copyright 2019 ESRI
//
// All rights reserved under the copyright laws of the United States
// and applicable international laws, treaties, and conventions.
//
// You may freely redistribute and use this sample code, with or
// without modification, provided you include the original copyright
// notice and use restrictions.
//
// See the Sample code usage restrictions document for further information.
//

#ifndef WMSQWIDJETARCGIS_H
#define WMSQWIDJETARCGIS_H

namespace Esri {
namespace ArcGISRuntime {
class Map;
class MapGraphicsView;
} // namespace ArcGISRuntime
} // namespace Esri

#include <QMainWindow>

class Wmsqwidjetarcgis : public QMainWindow
{
    Q_OBJECT
public:
    explicit Wmsqwidjetarcgis(QWidget *parent = nullptr);
    ~Wmsqwidjetarcgis() override;

public slots:

private:
    Esri::ArcGISRuntime::Map *m_map = nullptr;
    Esri::ArcGISRuntime::MapGraphicsView *m_mapView = nullptr;
};

#endif // WMSQWIDJETARCGIS_H
