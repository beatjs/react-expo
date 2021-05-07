// Copyright 2015-present 650 Industries. All rights reserved.

#import <Expo/EXFontScaler.h>

#import <Expo/EXFont.h>
#import <objc/runtime.h>

@implementation EXFontScaler

- (UIFont *)scaledFont:(UIFont *)font toSize:(CGFloat)fontSize
{
  EXFont *exFont = objc_getAssociatedObject(font, EXFontAssocKey);
  return [exFont UIFontWithSize:fontSize];
}

@end
