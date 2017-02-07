![TallyGo Logo](http://www.tallygo.com/img/TallyGo-NavSDK-logo.png "TallyGo SDK Logo")

# TallyGoKit

TallyGoKit is an SDK that enables you to embed turn-by-turn navigation directly in your iOS app.

It is currectly designed for Swift 3.0 projects, including iPhone and iPad devices.

## API Documentation
View the [API Documentation] (https://htmlpreview.github.io/?https://github.com/tallygo/TallyGoKit/blob/develop/Documentation/index.html)

## Getting Started

1. Request an Access Token from [sdk@tallygo.com](mailto:sdk@tallygo.com?subject=SDK Token Request).
1. Download the `TallyGoKit.framework` and include it in you target's "Linked Frameworks and Libraries"
1. Have a look at the [Reference Implementation](https://github.com/tallygo/TallyGoKit/tree/develop/Reference%20Implementation%20Swift).
1. Install the Mapbox framework and follow their [instructions](https://www.mapbox.com/ios-sdk/).
1. Import the module.

    ```swift
    import TallyGoKit
    ```
1. Initialize the TallyGoKit with your access token.

    ```swift
    TallyGoKit.initialize(withAccessToken: "YOUR ACCESS TOKEN")
    ```
1. Create an instance of `TGViewController` in your storyboard.
1. Set a few attributes when you prepare for segue.

    ```swift
    // Get these from somewhere
    let origin = CLLocationCoordinate2DMake(34.050259, -118.249611)
    let destination = CLLocationCoordinate2DMake(33.987760, -118.470784)
    
    override func prepare(for segue: UIStoryboardSegue, sender: Any?) {
        if let viewController = segue.destination as? TGViewController {
            viewController.showsOriginIcon = false
            viewController.origin = origin
            viewController.destination = destination
            viewController.mapview.delegate = mapViewDelegate
            viewController.mapview.tintColor = UIColor.red
            viewController.commencementSpeech = "Let's go."
            viewController.proceedToRouteSpeech = "Please proceed to the route."
            viewController.arrivalSpeech = "You have arrived."
            viewController.voice = .Julie
        }  
    }
    ```
1. Find address from coordinate example code:

    ```swift
    var selectedAddress: TGAddress?
    var selectedLocation: CLLocationCoordinate2D?
    
    func reverseGeocode(coordinate: CLLocationCoordinate2D) {
        let request = TGReverseGeocodeRequest(location: coordinate)
        
        TGFind.reverseGeocode(request: request) { (response) in
            if let error = response.error {
                debugPrint("Reverse Geocoding Error: \(error)")
            }
            
            self.selectedAddress = response.address
            self.selectedLocation = response.location
        }
    }
    ```
    
## Need help?

Email us at [sdk@tallygo.com](mailto:sdk@tallygo.com?subject=SDK Help Request).
