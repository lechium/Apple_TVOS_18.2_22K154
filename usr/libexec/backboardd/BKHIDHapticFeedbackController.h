//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BKTouchDeliveryGenericGestureFocusObserver;
@protocol BKHIDHapticFeedbackInterface;

@interface BKHIDHapticFeedbackController : NSObject
{
    BKTouchDeliveryGenericGestureFocusObserver *_genericGestureFocusObserver;	// 8 = 0x8
    id <BKHIDHapticFeedbackInterface> _HIDHapticFeedbackInterface;	// 16 = 0x10
}

+ (id)sharedInstance;	// IMP=0x004000000004ac0f
- (void).cxx_destruct;	// IMP=0x002000000004abe7
- (_Bool)_validateTrackpadHapticFeedbackRequest:(id)arg1 forPID:(int)arg2;	// IMP=0x001000000004abdf
- (_Bool)_validatePencilHapticFeedbackRequest:(id)arg1 forPID:(int)arg2;	// IMP=0x001000000004ab89
- (_Bool)_validateHapticFeedbackRequest:(id)arg1 forAuditToken:(CDStruct_6ad76789 *)arg2;	// IMP=0x001000000004a9be
- (void)postHapticFeedbackRequest:(id)arg1 forAuditToken:(CDStruct_6ad76789 *)arg2;	// IMP=0x001000000004a961
- (id)initWithHIDHapticFeedbackInterface:(id)arg1;	// IMP=0x001000000004a8f6

@end

