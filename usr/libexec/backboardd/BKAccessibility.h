//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface BKAccessibility : NSObject
{
}

+ (void)_setCapsLockLightOn:(_Bool)arg1;	// IMP=0x0040000000053088
+ (id)_eventRoutingClientConnectionManager;	// IMP=0x001000000005307e
+ (_Bool)_isDisplayBacklightOff;	// IMP=0x001000000005303d
+ (_Bool)_objectWithinProximity;	// IMP=0x0010000000052fbb
+ (id)_authenticationMessageForLocationInCAScreenCoordinates:(struct CGPoint)arg1 eventType:(unsigned int)arg2 excludeContextIDsFromHitTest:(id)arg3 secureName:(unsigned int)arg4;	// IMP=0x0010000000052f12
+ (id)_authenticationMessageForLocationInCAScreenCoordinates:(struct CGPoint)arg1 eventType:(unsigned int)arg2 excludeContextIDsFromHitTest:(id)arg3;	// IMP=0x0010000000052efa
+ (void)_applyExtendedHitTestInformationForCAScreenCoordinates:(struct CGPoint)arg1 displayUUID:(id)arg2 toPathAttributes:(id)arg3 secureName:(unsigned int)arg4 excludeContextIDs:(id)arg5;	// IMP=0x0010000000052e03
+ (struct CGPoint)_displayConvertToCAScreen:(struct CGPoint)arg1 withDisplayIntegerId:(unsigned int)arg2;	// IMP=0x0010000000052d45
+ (struct CGPoint)_displayConvertFromCAScreen:(struct CGPoint)arg1 withDisplayIntegerId:(unsigned int)arg2;	// IMP=0x0010000000052c87
+ (struct CGPoint)_displayConvertToCAScreen:(struct CGPoint)arg1;	// IMP=0x0010000000052c7b
+ (struct CGPoint)_displayConvertFromCAScreen:(struct CGPoint)arg1;	// IMP=0x0010000000052c6f
+ (CDUnknownFunctionPointerType)_accessibilityHIDEventTapCallback;	// IMP=0x0010000000052c65
+ (void)_accessibilitySetHIDEventTapCallback:(CDUnknownFunctionPointerType)arg1;	// IMP=0x0010000000052c58
+ (CDUnknownFunctionPointerType)_accessibilityEventTapCallback;	// IMP=0x0010000000052c4e
+ (void)_accessibilitySetEventTapCallback:(CDUnknownFunctionPointerType)arg1;	// IMP=0x0010000000052c41
+ (void)_accessibilityProcessExternHIDEvent:(struct __IOHIDEvent *)arg1;	// IMP=0x0010000000052bee

@end

