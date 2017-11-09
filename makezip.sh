zip -r ~/Desktop/TallyGoKit.zip LICENSE TallyGoKit.framework

cd "Reference Implementation Swift"
pod install
cd ..

cp -a "Reference Implementation Swift/Pods/Mapbox-iOS-SDK" .
cp -a "Reference Implementation Swift/Pods/SwiftyJSON" .

zip -r ~/Desktop/TallyGoKit-With-Dependencies.zip LICENSE TallyGoKit.framework Mapbox-iOS-SDK SwiftyJSON

rm -rf Mapbox-iOS-SDK
rm -rf SwiftyJSON