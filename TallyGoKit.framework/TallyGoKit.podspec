Pod::Spec.new do |s|
  s.name             = 'TallyGoKit'
  s.version          = '1.0.0'
  s.description      = 'TallyGoKit framework'
  s.summary          = 'TallyGoKit'
  s.license          = 'LICENSE.txt'
  s.homepage         = 'https://www.tallygo.com/'
  s.author           = { 'Anthony Picciano' => 'tony@tallygo.com' }
  s.source           = { :git => 'https://github.com/tallygo/TallyGoKit-Source.git', :branch => 'develop' }
  s.platform         = :ios, '10.0'

  s.source_files     = 'TallyGoKit/**/*.{swift,h,xib}'
  
  s.resources = [ 'TallyGoKit/Lato-Bold.ttf', 'TallyGoKit/Lato-Regular.ttf' ]

  s.dependency 'CryptoSwift'
  s.dependency 'SwiftyJSON'
  s.dependency 'Mapbox-iOS-SDK'

end
