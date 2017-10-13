# TallyGo iOS SDK `BETA`

The TallyGo iOS SDK (TallyGoKit) enables you to embed state-of-the-art real-time navigation into your iOS app with virtually no development effort. It is currently designed for Swift 4.0 projects, including both iPhone and iPad devices.

---

## iOS SDK Features
Packed with modern features, our navigation experience is on par with industry-leading consumer turn-by-turn navigation apps. There’s no need to waste your valuable resources trying to build this yourself — we've got you covered!

- **TURN-BY-TURN NAVIGATION** - State-of-the-art navigation system integrates real-time traffic and accident data to provide optimal driving directions to users.

- **TIME-DEPENDENT ROUTING** - Patented routing algorithm calculates the fastest route based on near-future traffic prediction while delivering sub-second response times.

- **VOICE GUIDANCE** - A natural-sounding voice provide timely spoken instructions that guide you to your destination.

- **ROBUST ROAD NETWORK** - Comprehensive road network data includes accurate exit sign data, time-based turn restrictions, one-way streets, and private roadways.

- **REAL-TIME TRAFFIC** - Intelligent routes use millions of minute-level traffic readings from loop sensors installed in the roads.

- **REAL-TIME ACCIDENTS** - Accurate clear times and other meta data are displayed by directly accessing highway patrol data.

- **CONTEXTUAL SEARCH** - Intelligent search API incorporates multiple search sources (Yelp, Foursquare, OSM) to return location results based on geographic relevance.

- **ADVANCED TELEMETRY** - Track driver location granularly, which enables features like displaying driver location to consumers.

---

## Getting Set Up
Approximate time: 2-10 mins

1. [Sign up for a free TallyGo account](http://www.tallygo.com/signup) to get an SDK Access Token
2. Just add `pod 'TallyGoKit'` to your [CocoaPods](https://cocoapods.org/) Podfile
3. Import the module with `import TallyGoKit`
4. Initialize the TallyGoKit with your TallyGo SDK Access Token (sent to you via email) `TallyGoKit.initialize(withAccessToken: "YOUR_ACCESS_TOKEN")`
5. Set `MGLMapboxMetricsEnabledSettingShownInApp` to `YES` in your app's `Info.plist` file (for telemetry)
6. Set the `NSLocationAlwaysUsageDescription` and/or `NSLocationWhenInUseUsageDescription` keys in your app's `Info.plist` file (for location services)

You're ready to roll!

(BTW, if you're new to iOS development, you might want to take a look at our [Reference Implementation](https://github.com/tallygo/TallyGoKit/tree/develop/Reference%20Implementation%20Swift).)

---

## Get Navigation in your App
Approximate time: 5-10 mins

Now let's have some fun by adding turn-by-turn navigation to your app!

1. Use the driving simulator so you can try this from the comfort of your desk:

    ```swift
    TallyGoKit.simulatedCoordinate = CLLocationCoordinate2DMake(34.050259, -118.249611)
    ```

2. Now let's create the view controller and set a few attributes:

    ```swift
    // Get these starting coordinates from your app
    let origin = CLLocationCoordinate2DMake(34.050259, -118.249611)
    let destination = CLLocationCoordinate2DMake(33.987760, -118.470784)
    
    // Create and configure the navigation guidance view controller
    let viewController = TGGuidanceViewController.makeFromStoryboard()
    viewController.showsOriginIcon = false
    viewController.origin = origin
    viewController.destination = destination
    viewController.mapview.delegate = mapViewDelegate
    viewController.mapview.tintColor = UIColor.red
    viewController.commencementSpeech = "Let's go!"
    viewController.proceedToRouteSpeech = "Please proceed to the route."
    viewController.arrivalSpeech = "You have arrived."
    
    // Display it
      navigationController?.pushViewController(viewController, animated: true)
    Voila! You now have turn-by-turn navigation in your app!
    ```

3. Voila! You now have turn-by-turn navigation in your app!

---

## API Documentation
Check out our API Documentation to learn more about the all the features that the TallyGo iOS SDK has to offer:

[TallyGo iOS API Documentation](https://github.com/tallygo/TallyGoKit/blob/develop/Documentation/index.html)
