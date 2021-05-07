package com.beatjs.react;

import com.facebook.react.bridge.ReactApplicationContext;
import com.facebook.react.bridge.ReactContextBaseJavaModule;
import com.facebook.react.bridge.ReactMethod;
import com.facebook.react.bridge.Callback;

public class ReactExpoModule extends ReactContextBaseJavaModule {

    private final ReactApplicationContext reactContext;

    public ReactExpoModule(ReactApplicationContext reactContext) {
        super(reactContext);
        this.reactContext = reactContext;
    }

    @Override
    public String getName() {
        return "ReactExpoModule";
    }

    @ReactMethod
    public void hello() {
      System.out.println("Hello React Native!");
    }

    @ReactMethod
    public void sampleMethod(String stringArgument, int numberArgument, Callback callback) {
        // TODO: Implement
    }
}