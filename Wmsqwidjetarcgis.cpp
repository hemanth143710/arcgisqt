
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

// C++ API headers

// #include "Basemap.h"

// // Other headers
// #include "Wmsqwidjetarcgis.h"

// #include "Map.h"
// #include "MapGraphicsView.h"

// using namespace Esri::ArcGISRuntime;

// Wmsqwidjetarcgis::Wmsqwidjetarcgis(QWidget *parent /*=nullptr*/)
//     : QMainWindow(parent)
// {
//     // Create the Widget view
//     m_mapView = new MapGraphicsView(this);

//     // Create a map using the topographic Basemap
//     m_map = new Map(Basemap::topographic(this), this);

//     // Set map to map view
//     m_mapView->setMap(m_map);

//     // set the mapView as the central widget
//     setCentralWidget(m_mapView);
// }

// // destructor
// Wmsqwidjetarcgis::~Wmsqwidjetarcgis() {}



#include "Basemap.h"
#include "Map.h"
#include "MapGraphicsView.h"
#include "WmsLayer.h"

#include "Wmsqwidjetarcgis.h"

using namespace Esri::ArcGISRuntime;

Wmsqwidjetarcgis::Wmsqwidjetarcgis(QWidget *parent /*=nullptr*/)
    : QMainWindow(parent)
{
    // Create the Widget view
    m_mapView = new MapGraphicsView(this);

    // Create a map using the topographic Basemap
    m_map = new Map(Basemap::topographic(this), this);

    // Set map to map view
    m_mapView->setMap(m_map);

    // Add a WMS layer by specifying the URL and layer name
    WmsLayer* wmsLayer = new WmsLayer(QUrl("http://10.10.5.178:8080/geoserver/WORLD/wms"), QStringList{"WORLD:WORLD"}, this);

    // Add the WMS layer to the map
    m_map->operationalLayers()->append(wmsLayer);

    // set the mapView as the central widget
    setCentralWidget(m_mapView);
}

// destructor
Wmsqwidjetarcgis::~Wmsqwidjetarcgis() {}


