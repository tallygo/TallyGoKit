Pod::Spec.new do |s|  
    s.name              = 'TallyGoKit'
    s.version           = '1.4.2'
    s.summary           = 'The TallyGo iOS SDK (TallyGoKit) enables you to embed state-of-the-art real-time navigation into your iOS app with virtually no development effort. It is currently designed for Swift 4.0 projects, including both iPhone and iPad devices.'
    s.homepage          = 'http://tallygo.com'

    s.author            = { 'Name' => 'sdk@tallygo.com' }
    s.license           = { :type => 'Custom', :file => 'LICENSE' }

    s.platform          = :ios
    s.source            = { :http => 'https://github.com/tallygo/TallyGoKit/releases/download/1.4.2/TallyGoKit.zip' }

    s.ios.deployment_target = '9.0'
    s.ios.vendored_frameworks = 'TallyGoKit.framework'

    s.dependency 'CryptoSwift'
    s.dependency 'SwiftyJSON'
    s.dependency 'Mapbox-iOS-SDK'
end
