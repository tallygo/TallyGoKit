Pod::Spec.new do |s|  
    s.name              = 'TallyGoKit'
    s.version           = '1.4.5'
    s.summary           = 'The TallyGo iOS SDK (TallyGoKit) enables you to embed state-of-the-art real-time navigation into your iOS app.'
    s.homepage          = 'http://tallygo.com'

    s.author            = { 'Name' => 'sdk@tallygo.com' }
    s.license           = { :type => 'Custom', :file => 'LICENSE' }

    s.platform          = :ios
    s.source            = { :http => 'https://github.com/tallygo/TallyGoKit/releases/download/1.4.5/TallyGoKit.zip' }

    s.ios.deployment_target = '9.0'
    s.ios.vendored_frameworks = 'TallyGoKit.framework'

    s.dependency 'SwiftyJSON'
    s.dependency 'Mapbox-iOS-SDK'
end
