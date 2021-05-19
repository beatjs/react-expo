# react-expo

[![iOS CI](https://github.com/beatjs/react-expo/actions/workflows/ios.yml/badge.svg?branch=main)](https://github.com/beatjs/react-expo/actions/workflows/ios.yml)
[![Adnroid CI](https://github.com/beatjs/react-expo/actions/workflows/android.yml/badge.svg?branch=main)](https://github.com/beatjs/react-expo/actions/workflows/android.yml)

## Getting started

`$ npm install react-expo --save`

### Mostly automatic installation

`$ react-native link react-expo`

### Manual installation


#### iOS

1. In XCode, in the project navigator, right click `Libraries` ➜ `Add Files to [your project's name]`
2. Go to `node_modules` ➜ `react-expo` and add `ReactExpo.xcodeproj`
3. In XCode, in the project navigator, select your project. Add `libReactExpo.a` to your project's `Build Phases` ➜ `Link Binary With Libraries`
4. Run your project (`Cmd+R`)<

#### Android

1. Open up `android/app/src/main/java/[...]/MainApplication.java`
  - Add `import com.beatjs.react.ReactExpoPackage;` to the imports at the top of the file
  - Add `new ReactExpoPackage()` to the list returned by the `getPackages()` method
2. Append the following lines to `android/settings.gradle`:
  	```
  	include ':react-expo'
  	project(':react-expo').projectDir = new File(rootProject.projectDir, 	'../node_modules/react-expo/android')
  	```
3. Insert the following lines inside the dependencies block in `android/app/build.gradle`:
  	```
      compile project(':react-expo')
  	```


## Usage
```javascript
import ReactExpo from 'react-expo';

// TODO: What to do with the module?
ReactExpo;
```
  
