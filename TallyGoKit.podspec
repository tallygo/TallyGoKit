Pod::Spec.new do |s|  
    s.name              = 'TallyGoKit'
    s.version           = '1.0.1'
    s.summary           = 'The TallyGo Navigation SDK (TallyGoKit) enables you to embed turn-by-turn navigation features directly in your iOS app.'
    s.homepage          = 'http://tallygo.com'

    s.author            = { 'Name' => 'sdk@tallygo.com' }
    s.license           = { :type => 'Custom', :file => 'LICENSE' }

    s.platform          = :ios
    s.source            = { :http => 'https://github.com/tallygo/TallyGoKit/raw/develop/TallyGoKit.zip' }

    s.ios.deployment_target = '9.0'
    s.ios.vendored_frameworks = 'TallyGoKit.framework'

	s.dependency 'CryptoSwift'
	s.dependency 'SwiftyJSON'
	s.dependency 'Mapbox-iOS-SDK'
end