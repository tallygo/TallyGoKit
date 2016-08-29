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

    override func prepare(for segue: UIStoryboardSegue, sender: Any?) {
        if let viewController = segue.destination as? TGViewController {
            viewController.origin = CLLocationCoordinate2DMake(34.050000, -118.250000)
            viewController.destination = CLLocationCoordinate2DMake(33.987760, -118.470784)
        }
    }

}

