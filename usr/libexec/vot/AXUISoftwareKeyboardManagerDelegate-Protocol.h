//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class AXUISoftwareKeyboardManager;

@protocol AXUISoftwareKeyboardManagerDelegate <NSObject>
- (_Bool)softwareKeyboardManagerShouldSetHardwareKeyboardAttached:(AXUISoftwareKeyboardManager *)arg1 hardwareKeyboardIsCurrentlyAttached:(_Bool)arg2 newHardwareKeyboardAttachedValue:(_Bool *)arg3;
- (void)softwareKeyboardManagerDidChangeHardwareKeyboardAttached:(AXUISoftwareKeyboardManager *)arg1;
- (void)softwareKeyboardManager:(AXUISoftwareKeyboardManager *)arg1 didSetHardwareKeyboardAttached:(_Bool)arg2;
- (void)softwareKeyboardManagerWillUpdateKeyboardState:(AXUISoftwareKeyboardManager *)arg1;
@end

