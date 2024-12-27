//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BKHIDSystemInterface, NSMutableDictionary, NSString;

@interface BKTouchDeliveryGenericGestureFocusObserver : NSObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    NSMutableDictionary *_lock_destinationPerDisplayUUID;	// 16 = 0x10
    BKHIDSystemInterface *_HIDSystem;	// 24 = 0x18
}

+ (id)sharedInstance;	// IMP=0x0020000000049362
- (void).cxx_destruct;	// IMP=0x0020000000049303
@property(retain, nonatomic) BKHIDSystemInterface *HIDSystem; // @synthesize HIDSystem=_HIDSystem;
- (void)postEvent:(struct __IOHIDEvent *)arg1 fromSender:(id)arg2;	// IMP=0x00100000000491a6
- (void)postEvent:(struct __IOHIDEvent *)arg1 toDestination:(id)arg2;	// IMP=0x0010000000049190
- (id)destinationsForEvent:(struct __IOHIDEvent *)arg1 fromSender:(id)arg2 overrideSenderDescriptor:(id)arg3;	// IMP=0x001000000004901d
- (id)destinationsForEvent:(struct __IOHIDEvent *)arg1 fromSender:(id)arg2;	// IMP=0x0010000000049008
- (_Bool)destinationPIDMatchesHapticFeedbackRequestPID:(int)arg1;	// IMP=0x0010000000048f36
- (void)setEventDestination:(id)arg1 forDisplayUUID:(id)arg2;	// IMP=0x0010000000048df8
- (id)eventDestinationForDisplayUUID:(id)arg1;	// IMP=0x0010000000048d28
- (id)initWithHIDSystem:(id)arg1;	// IMP=0x0010000000048c9b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

