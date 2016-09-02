//
//  ViewController.swift
//  Reference Implementation Swift
//
//  Created by Anthony Picciano on 8/24/16.
//  Copyright © 2016 TallyGo. All rights reserved.
//

import UIKit
import TallyGoKit
import CoreLocation

class ViewController: UIViewController {
    
    // Get these from somewhere
    let origin = CLLocationCoordinate2DMake(34.050000, -118.250000)
    let destination = CLLocationCoordinate2DMake(33.987760, -118.470784)
    
    // Retain this instance
    var mapViewDelegate = MapViewDelegate()
    
    override func viewDidLoad() {
        TallyGoKit.initialize(withAccessToken: "YOUR ACCESS TOKEN", simulatedCoordinate: origin)
        TallyGoKit.allowsDebug = true
    }

    override func prepare(for segue: UIStoryboardSegue, sender: Any?) {
        if let viewController = segue.destination as? TGViewController {
            viewController.showsOriginIcon = false
            viewController.origin = origin
            viewController.destination = destination
            viewController.mapview.delegate = mapViewDelegate
        }
    }

}

