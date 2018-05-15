//
//  TGFind.h
//  TallyGoKit
//
//  Created by David Deller on 11/16/17.
//  Copyright © 2017 TallyGo. All rights reserved.
//

#import "TGBaseService.h"

@class TGSearchRequest, TGSearchResponse, TGSuggestRequest, TGSuggestResponse, TGReverseGeocodeRequest, TGReverseGeocodeResponse;

FOUNDATION_EXPORT NSErrorDomain const TGFindServiceErrorDomain;

NS_ERROR_ENUM(TGFindServiceErrorDomain) {
    TGFindServiceErrorWaitingForConnection,
};

/**
 Provides access to the TallyGo Find service for street address and point-of-interest searching, as well as reverse geocoding.
 
 The suggest method is used to populate a list of suggestions while the user is typing. Suggest will generally return faster than the search method, but results returned from suggest do not include specific location information. Instead they include include a suggestionKey. When the user selects a suggestion from the list, pass the corresponding suggestionKey to the search method, which returns all available information, including a precise geographic coordinate.
 
 When the user selects a specific sugegstion, call the search method with a search request to get the full address and location information. The search request should be populated with the same location as was used when the suggest call was made, the "singleLine" attribute should be the "text" value from the suggestion, and the "suggestionKey" should be the value from the "suggestion.suggestionKey".
 
 Results from the search and suggest method may come from a variety of information sources, including Open Street Maps, ArcGIS, TallyGo, Yelp, Foursquare, and Mapbox.
 
 Some of the information providers, notably Yelp, have specific requirements on how to display results from their API. Be sure to read and follow the guidlines here: https://www.yelp.com/developers/display_requirements
 */
@interface TGFindService : TGBaseService

/**
 Find locations based on various search criteria.
 See TGSearchRequest for more details.
 
 Do not call this method repeatedly as a user is typing, instead use the suggest method.
 
 Note that you may pass a suggestionKey obtained from a TGSuggestion returned by suggest() to request all information about that suggestion.
 
 **Usage Example:**
 
 ```
 let request = TGSearchRequest(singleLine: "restaurant",
 location: CLLocationCoordinate2DMake(34.050000, -118.250000),
 searchExtent: nil,
 suggestionKey: suggestionKey)
 
 TGFind.search(request: request) { resp in
 if let bestResult = resp.results.first {
 // Use or display the address
 debugPrint(bestResult.placeAddress)
 
 // Use or display the location (CLLocationCoordinate2D)
 debugPrint(bestResult.location)
 }
 }
 ```
 
 */
+ (nullable NSURLSessionDataTask *)searchWithRequest:(nonnull TGSearchRequest *)request completionHandler:(void (^_Nonnull)(TGSearchResponse * _Nonnull response))completionHandler;

/**
 Get autocomplete suggestions for location searches.
 Intended to be called while a user is typing in a search field to anticipate what they are typing.
 
 TGSuggestions returned by this method do not include a precise geographic location. When the user selects a TGSuggestion,
 pass that object's suggestionKey value to search() to retrieve the location of the suggestion.
 
 **Usage Example:**
 
 ```
 let request = TGSuggestRequest(text: "restaurant", location: CLLocationCoordinate2DMake(34.050000, -118.250000))
 
 let task = TGFind.suggest(request: request) { resp in
 
 if let firstSuggestionKey = response?.suggestions.first?.suggestionKey {
 // Use this key later with the search function to get complete information.
 debugPrint(firstSuggestionKey)
 }
 
 }
 ```
 
 */
+ (nullable NSURLSessionDataTask *)suggestWithRequest:(nonnull TGSuggestRequest *)request completionHandler:(void (^_Nonnull)(TGSuggestResponse * _Nonnull response))completionHandler;

/**
 Attempts to find a fully-qualified street address for given a location coordinate.
 
 If the API is not able to map a given location to an address, an error response (code 400) will be returned instead.
 
 **Usage Example:**
 
 ```
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
 
 */
+ (nullable NSURLSessionDataTask *)reverseGeocodeWithRequest:(nonnull TGReverseGeocodeRequest *)request completionHandler:(void (^_Nonnull)(TGReverseGeocodeResponse * _Nonnull response))completionHandler;

@end
