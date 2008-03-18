//
//  GTMNSColor+Theme.m
//
//  Category for working with Themes and NSColor
//
//  Copyright 2006-2008 Google Inc.
//
//  Licensed under the Apache License, Version 2.0 (the "License"); you may not
//  use this file except in compliance with the License.  You may obtain a copy
//  of the License at
// 
//  http://www.apache.org/licenses/LICENSE-2.0
// 
//  Unless required by applicable law or agreed to in writing, software
//  distributed under the License is distributed on an "AS IS" BASIS, WITHOUT
//  WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.  See the
//  License for the specific language governing permissions and limitations under
//  the License.
//

#import <Cocoa/Cocoa.h>
#import <Carbon/Carbon.h>

///  Category for working with Themes and NSColor
@interface NSColor (GTMColorThemeAdditions) 

/// Create up an NSColor based on a Theme Text Color.
/// Colors will be in the CalibratedRGB color space
+ (id)gtm_colorWithThemeTextColor:(ThemeTextColor)textColor;

/// Create up an NSColor based on a Theme Brush
/// Colors will be in the CalibratedRGB color space
+ (id)gtm_colorWithThemeBrush:(ThemeBrush)brush;

@end
