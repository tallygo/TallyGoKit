zip -r ~/Desktop/TallyGoKit.zip LICENSE TallyGoKit.framework

cd "Reference Implementation Swift"
pod install
pod update
cd ..

cp -a "Reference Implementation Swift/Pods/Mapbox-iOS-SDK" .
cp -a "Reference Implementation Swift/Pods/KissXML" .

zip -r ~/Desktop/TallyGoKit-With-Dependencies.zip LICENSE TallyGoKit.framework Mapbox-iOS-SDK KissXML

rm -rf Mapbox-iOS-SDK
rm -rf KissXML
