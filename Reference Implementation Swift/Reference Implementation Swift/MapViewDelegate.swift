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
    
    func mapView(_ mapView: MGLMapView, imageFor annotation: MGLAnnotation) -> MGLAnnotationImage? {
        return nil
    }
    
    // Configure route line below
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
