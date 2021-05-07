
Pod::Spec.new do |s|
  s.name = 'react-expo'
  s.version = '0.0.1'
  s.summary = 'An runtime base on react-native.'
  s.description = 
	<<-DESC
	'Introduce this library for your App, development by react-native code.'
	DESC
  s.homepage = 'https://github.com/beatjs/react-expo'
	s.license = { :type => 'MIT', :file => 'LICENSE' }
  s.author = { 'Liam Xu' => 'liamxujia@outlook.com' }
	s.platforms = { :ios => '11.0' }
  s.source = { :git => 'https://github.com/beatjs/react-expo.git', :tag => s.version.to_s }
  # s.module_name = 'Expo'
  s.header_dir = 'Expo'
  s.source_files = 'ios/ReactExpo/**/*.{h,m}'
  s.ios.deployment_target = "11.0"
  s.pod_target_xcconfig = {
    "DEFINES_MODULE" => "YES"
  }
  s.dependency 'react-ios', '~> 0.63.4.1'
  s.dependency 'react-component', '~> 1.0.0'
  # s.default_subspec = 'All'
  # s.subspec 'All' do |ss|
  #   ss.dependency 'react-expo/EXApplication'
  #   ss.dependency 'react-expo/EXConstants'
  #   ss.dependency 'react-expo/EXErrorRecovery'
  #   ss.dependency 'react-expo/EXFileSystem'
  #   ss.dependency 'react-expo/EXFont'
  #   ss.dependency 'react-expo/EXImageLoader'
  #   ss.dependency 'react-expo/EXKeepAwake'
  #   ss.dependency 'react-expo/EXPermissions'
  #   ss.dependency 'react-expo/EXSplashScreen'
  #   ss.dependency 'react-expo/EXStructuredHeaders'
  #   ss.dependency 'react-expo/EXUpdates'
  #   ss.dependency 'react-expo/EXWebBrowser'
  #   ss.dependency 'react-expo/UMAppLoader'
  #   ss.dependency 'react-expo/UMBarCodeScannerInterface'
  #   ss.dependency 'react-expo/UMCameraInterface'
  #   ss.dependency 'react-expo/UMConstantsInterface'
  #   ss.dependency 'react-expo/UMCore'
  #   ss.dependency 'react-expo/UMFaceDetectorInterface'
  #   ss.dependency 'react-expo/UMFileSystemInterface'
  #   ss.dependency 'react-expo/UMFontInterface'
  #   ss.dependency 'react-expo/UMImageLoaderInterface'
  #   ss.dependency 'react-expo/UMPermissionsInterface'
  #   ss.dependency 'react-expo/UMReactNativeAdapter'
  #   ss.dependency 'react-expo/UMSensorsInterface'
  #   ss.dependency 'react-expo/UMTaskManagerInterface'
  # end

  # s.subspec 'EXApplication' do |ss|
  #   ss.source_files = 'ios/ReactExpo/EXApplication/**/*.{h,m}'
  #   ss.dependency 'react-expo/UMCore'
  # end

  # s.subspec 'EXConstants' do |ss|
  #   ss.source_files = 'ios/ReactExpo/EXConstants/**/*.{h,m}'
  #   ss.dependency 'react-expo/UMCore'
  #   ss.dependency 'react-expo/UMConstantsInterface'
  # end

  # s.subspec 'EXErrorRecovery' do |ss|
  #   ss.source_files = 'ios/ReactExpo/EXErrorRecovery/**/*.{h,m}'
  #   ss.dependency 'react-expo/UMCore'
  # end

  # s.subspec 'EXFileSystem' do |ss|
  #   ss.source_files = 'ios/ReactExpo/EXFileSystem/**/*.{h,m}'
  #   ss.dependency 'react-expo/UMCore'
  #   ss.dependency 'react-expo/UMFileSystemInterface'
  # end

  # s.subspec 'EXFont' do |ss|
  #   ss.source_files = 'ios/ReactExpo/EXFont/**/*.{h,m}'
  #   ss.dependency 'react-expo/UMCore'
  #   ss.dependency 'react-expo/UMFontInterface'
  # end

  # s.subspec 'EXImageLoader' do |ss|
  #   ss.source_files = 'ios/ReactExpo/EXImageLoader/**/*.{h,m}'
  #   ss.dependency 'react-expo/UMCore'
  #   ss.dependency 'react-expo/UMImageLoaderInterface'
  # end

  # s.subspec 'EXKeepAwake' do |ss|
  #   ss.source_files = 'ios/ReactExpo/EXKeepAwake/**/*.{h,m}'
  #   ss.dependency 'react-expo/UMCore'
  # end

  # s.subspec 'EXPermissions' do |ss|
  #   ss.source_files = 'ios/ReactExpo/EXPermissions/**/*.{h,m}'
  #   ss.dependency 'react-expo/UMCore'
  #   ss.dependency 'react-expo/UMPermissionsInterface'
  # end

  # s.subspec 'EXSplashScreen' do |ss|
  #   ss.source_files = 'ios/ReactExpo/EXSplashScreen/**/*.{h,m}'
  #   ss.dependency 'react-expo/UMCore'
  # end

  # s.subspec 'EXStructuredHeaders' do |ss|
  #   ss.source_files = 'ios/ReactExpo/EXStructuredHeaders/**/*.{h,m}'
  #   ss.dependency 'react-expo/UMCore'
  # end

  # s.subspec 'EXUpdates' do |ss|
  #   ss.source_files = 'ios/ReactExpo/EXUpdates/**/*.{h,m}'
  #   ss.dependency 'react-expo/UMCore'
  #   ss.dependency 'react-expo/EXStructuredHeaders'
  # end

  # s.subspec 'EXWebBrowser' do |ss|
  #   ss.source_files = 'ios/ReactExpo/EXWebBrowser/**/*.{h,m}'
  #   ss.dependency 'react-expo/UMCore'
  # end

  # s.subspec 'UMAppLoader' do |ss|
  #   ss.source_files = 'ios/ReactExpo/UMAppLoader/**/*.{h,m}'
  # end

  # s.subspec 'UMBarCodeScannerInterface' do |ss|
  #   ss.source_files = 'ios/ReactExpo/UMBarCodeScannerInterface/**/*.{h,m}'
  #   ss.dependency 'react-expo/UMCore'
  # end

  # s.subspec 'UMCameraInterface' do |ss|
  #   ss.source_files = 'ios/ReactExpo/UMCameraInterface/**/*.{h,m}'
  #   ss.dependency 'react-expo/UMCore'
  # end

  # s.subspec 'UMConstantsInterface' do |ss|
  #   ss.source_files = 'ios/ReactExpo/UMConstantsInterface/**/*.{h,m}'
  #   ss.dependency 'react-expo/UMCore'
  # end

  # s.subspec 'UMCore' do |ss|
  #   # ss.header_mappings_dir = 'UMCore/'
  #   # ss.pod_target_xcconfig = {
  #   #   'USE_HEADERMAP' => 'YES',
  #   #   'HEADER_SEARCH_PATHS' => '\'$(PODS_TARGET_SRCROOT)\''
  #   # }
  #   ss.source_files = 'ios/ReactExpo/UMCore/**/*.{h,m}'
  # end

  # s.subspec 'UMFaceDetectorInterface' do |ss|
  #   ss.source_files = 'ios/ReactExpo/UMFaceDetectorInterface/**/*.{h,m}'
  # end

  # s.subspec 'UMFileSystemInterface' do |ss|
  #   ss.source_files = 'ios/ReactExpo/UMFileSystemInterface/**/*.{h,m}'
  # end

  # s.subspec 'UMFontInterface' do |ss|
  #   ss.source_files = 'ios/ReactExpo/UMFontInterface/**/*.{h,m}'
  # end

  # s.subspec 'UMImageLoaderInterface' do |ss|
  #   ss.source_files = 'ios/ReactExpo/UMImageLoaderInterface/**/*.{h,m}'
  # end

  # s.subspec 'UMPermissionsInterface' do |ss|
  #   ss.source_files = 'ios/ReactExpo/UMPermissionsInterface/**/*.{h,m}'
  #   ss.dependency 'react-expo/UMCore'
  # end

  # s.subspec 'UMReactNativeAdapter' do |ss|
  #   ss.source_files = 'ios/ReactExpo/UMReactNativeAdapter/**/*.{h,m}'
  #   ss.dependency 'react-expo/UMCore'
  #   ss.dependency 'react-expo/UMFontInterface'
  # end

  # s.subspec 'UMSensorsInterface' do |ss|
  #   ss.source_files = 'ios/ReactExpo/UMSensorsInterface/**/*.{h,m}'
  #   ss.dependency 'react-expo/UMCore'
  # end

  # s.subspec 'UMTaskManagerInterface' do |ss|
  #   ss.source_files = 'ios/ReactExpo/UMTaskManagerInterface/**/*.{h,m}'
  #   ss.dependency 'react-expo/UMCore'
  # end
end

