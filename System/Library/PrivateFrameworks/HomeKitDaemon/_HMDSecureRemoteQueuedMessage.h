//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDRemoteMessage, HMFTimer, NSArray, NSString;

__attribute__((visibility("hidden")))
@interface _HMDSecureRemoteQueuedMessage : HMFObject
{
    HMDRemoteMessage *_message;	// 8 = 0x8
    HMFTimer *_timer;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000588da2
@property(readonly, nonatomic) HMFTimer *timer; // @synthesize timer=_timer;
@property(readonly, nonatomic) HMDRemoteMessage *message; // @synthesize message=_message;
@property(readonly, copy) NSString *propertyDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *shortDescription;
- (id)initWithMessage:(id)arg1;	// IMP=0x0000000000588b46
- (id)init;	// IMP=0x0000000000588a9e

// Remaining properties
@property(readonly, copy, nonatomic) NSArray *attributeDescriptions;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSArray",?,R,C,N

@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSString *privateDescription;
@property(readonly) Class superclass;

@end

