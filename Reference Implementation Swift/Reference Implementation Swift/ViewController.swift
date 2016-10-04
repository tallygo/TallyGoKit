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
    let origin = CLLocationCoordinate2DMake( 34.050259, -118.249611)
    let destination = CLLocationCoordinate2DMake(33.987760, -118.470784)
    
    @IBOutlet weak var originLat: UITextField!
    @IBOutlet weak var originLon: UITextField!
    @IBOutlet weak var destinationLat: UITextField!
    @IBOutlet weak var destinationLon: UITextField!
    
    // Retain this instance
    var mapViewDelegate = MapViewDelegate()
    
    override func viewDidLoad() {
        TallyGoKit.initialize(withAccessToken: "YOUR ACCESS TOKEN")
        TallyGoKit.allowsDebug = true
        
        originLat.text = String(origin.latitude)
        originLon.text = String(origin.longitude)
        destinationLat.text = String(destination.latitude)
        destinationLon.text = String(destination.longitude)
    }
    
    @IBAction func enableSimulator(_ sender: UISwitch) {
        if sender.isOn {
            TallyGoKit.simulatedCoordinate = origin
        } else {
            TallyGoKit.simulatedCoordinate = nil
        }
    }
    
    @IBAction func enableTraffic(_ sender: UISwitch) {
        TallyGoKit.showsTraffic = sender.isOn
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

