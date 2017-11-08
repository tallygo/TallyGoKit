//
//  MapViewDelegate.swift
//  Reference Implementation Swift
//
//  Created by Anthony Picciano on 8/29/16.
//  Copyright © 2016 TallyGo. All rights reserved.
//

import Foundation
import Mapbox

class MapViewDelegate: NSObject, MGLMapViewDelegate {
    
    // Optionally provide a custom map marker.
    let markerImage = UIImage(named: "Map Marker")!
    
    // Return customized image for map marker here. This is optional.
    func mapView(_ mapView: MGLMapView, imageFor annotation: MGLAnnotation) -> MGLAnnotationImage? {
        return MGLAnnotationImage(image: markerImage, reuseIdentifier: "destination")
    }
    
    // Configure route line below. These are optional.
    func mapView(_ mapView: MGLMapView, lineWidthForPolylineAnnotation annotation: MGLPolyline) -> CGFloat {
        return 4.0
    }
    
    func mapView(_ mapView: MGLMapView, strokeColorForShapeAnnotation annotation: MGLShape) -> UIColor {
        return mapView.tintColor
    }
    
    func mapView(_ mapView: MGLMapView, alphaForShapeAnnotation annotation: MGLShape) -> CGFloat {
        return 1.0
    }
    
}
