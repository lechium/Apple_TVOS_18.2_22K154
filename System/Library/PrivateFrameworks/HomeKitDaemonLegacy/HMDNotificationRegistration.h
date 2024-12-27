//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class NSMutableSet, NSString;
@protocol HMFLogging;

__attribute__((visibility("hidden")))
@interface HMDNotificationRegistration : HMFObject
{
    NSMutableSet *_registeredNotifications;	// 8 = 0x8
    id <HMFLogging> _registerer;	// 16 = 0x10
}

+ (id)logCategory;	// IMP=0x0010000000afa8e8
- (void).cxx_destruct;	// IMP=0x0000000000afa8b9
@property(readonly, nonatomic) __weak id <HMFLogging> registerer; // @synthesize registerer=_registerer;
@property(readonly, nonatomic) NSMutableSet *registeredNotifications; // @synthesize registeredNotifications=_registeredNotifications;
- (void)addObserver:(SEL)arg1 name:(id)arg2 object:(id)arg3;	// IMP=0x0000000000afa5e4
- (id)logIdentifier;	// IMP=0x0000000000afa50f
- (id)initWithRegisterer:(id)arg1;	// IMP=0x0000000000afa477

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

