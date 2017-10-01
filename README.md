# TallyGoKit

The TallyGo Navigation SDK (TallyGoKit) enables you to embed turn-by-turn navigation features directly in your iOS app. It is currently designed for Swift 4.0 projects, including iPhone and iPad devices.

## API Documentation
View the [API Documentation] (https://htmlpreview.github.io/?https://github.com/tallygo/TallyGoKit/blob/develop/Documentation/index.html)

## Getting Started

1. If you don't already have one, request an Access Token by signing up for an account at [tallygo.com](http://www.tallygo.com/sign-up).
1. If you use Cocoapods, just add `pod 'TallyGoKit'` to your Podfile.
1. If you do not wish to use Cocoapods, download the `TallyGoKit.framework` and include it in you target's "Linked Frameworks and Libraries"
1. Have a look at the [Reference Implementation](https://github.com/tallygo/TallyGoKit/tree/develop/Reference%20Implementation%20Swift).
1. If you're not using Cocoapods to manage the dependencies, you'll also need to get Mapbox, CryptoSwift and SwiftyJSON. These  are open source frameworks and are required by TallyGoKit.
1. Configure the Mapbox framework and follow their [instructions](https://www.mapbox.com/ios-sdk/).
1. Import the module.

    ```swift
    import TallyGoKit
    ```
1. Initialize the TallyGoKit with your access token.

    ```swift
    TallyGoKit.initialize(withAccessToken: "YOUR ACCESS TOKEN")
    ```
1. Need to test without leaving your desk? Use the driving simulator.

    ```
    TallyGoKit.simulatedCoordinate = CLLocationCoordinate2DMake(34.050259, -118.249611)
    ```
1. Create the view controller and set a few attributes.

    ```swift
    // Get these from somewhere
    let origin = CLLocationCoordinate2DMake(34.050259, -118.249611)
    let destination = CLLocationCoordinate2DMake(33.987760, -118.470784)
    
    // Create and configure the guidance view controller
    let viewController = TGGuidanceViewController.makeFromStoryboard()
    viewController.showsOriginIcon = false
    viewController.origin = origin
    viewController.destination = destination
    viewController.mapview.delegate = mapViewDelegate
    viewController.mapview.tintColor = UIColor.red
    viewController.commencementSpeech = "Let's go."
    viewController.proceedToRouteSpeech = "Please proceed to the route."
    viewController.arrivalSpeech = "You have arrived."
    
    // Display it
    navigationController?.pushViewController(viewController, animated: true)
    ```
    
## Need help?

Email us at [sdk@tallygo.com](mailto:sdk@tallygo.com?subject=SDK Help Request).

## SDK Feature Summary

* **Start of Route** - Advanced start-of-route logic seamlessly manages thorny use cases like starting away from route, GPS drift, or starting route in parking garages or other elevated structures.

* **Turn-by-Turn Navigation** - Modern turn-by-turn navigation uses accurate and robust road network data, including exit sign data and time-based turn restrictions.

* **Voice Guidance** - Choose from a variety of voices that sound like real humans, providing timely spoken prompts to guide users to the destination without the need to look at the screen.

* **Dynamic Re-Routing** - Route dynamically updates based on driving speed when the user misses a turn or goes off route.

* **Real-time Sensors and Traffic Prediction** - Routes take advantage of a patented near-future traffic prediction algorithm that processes millions of minute-level traffic readings each day from loop sensors installed throughout the road network.

* **Time-Dependent Routing** - Patented dynamic routing algorithm calculates on-the-fly across billions of possible routes to identify actual fastest route while still delivering industry-leading response times.

* **Real-time Accident Data** - Real-time accidents with accurate clear times and other metadata displayed on the map without the need for user reporting, derived from real-time feed of highway patrol data. Routing algorithm intelligently incorporates accidents and clear times to avoid cascading effects of congestion on roads near the accident.

* **Waypoints** - Provide multiple waypoint routes that you can use to build your custom navigation experience, to avoid constant starting and stopping at each destination.

* **Advanced Route Planning (Leave at X, Arrive by X)** - Take advantage of route planning rather than simply departing at the current time. Specify a future time to leave, or specify a future time to arrive at the destination, and then receive a route customized to that timeframe based on future real-time traffic prediction. Easily enable push notifications as reminders of these upcoming trips.

* **Visual Turn Indicator** - Color-coded visual turn indicator makes it easy for users to get ready for upcoming turns.

* **Branding** - Customize icons, route line colors, and voice prompts to match the experience of your existing app.

#### Features on the Roadmap

* **Voice Search** `COMING SOON` - Search by speaking into the microphone instead of typing in a destination.

* **Advanced Route Planning (Best Time To Go)** `COMING SOON` - Specify a window of time and receive the best time to go in that window to reduce travel time.

* **Dynamic Dispatch** `COMING SOON` - A REST API to optimally dispatch drivers to locations. Improve the efficiency of your business by grouping pickups and dropoffs, and dynamically re-route drivers upon new pickup requests.
