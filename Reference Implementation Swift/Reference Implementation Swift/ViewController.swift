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
    
    @IBAction func testAudioAction(_ sender: AnyObject) {
        TGVoiceSynthesis.shared.say(text: "Welcome to TallyGo.")
    }
    
    @IBAction func goAction(_ sender: Any) {
        let viewController = TGTurnByTurnViewController.makeFromStoryboard()
        viewController.showsOriginIcon = false
        viewController.origin = origin
        viewController.destination = destination
        viewController.mapview.delegate = mapViewDelegate
        viewController.mapview.tintColor = UIColor.red
        viewController.mapview.attributionButton.isHidden = true
        viewController.commencementSpeech = "Let's go."
        viewController.proceedToRouteSpeech = "Please proceed to the route."
        viewController.arrivalSpeech = "You have arrived."
        
        present(viewController, animated: true, completion: nil)
    }

}

