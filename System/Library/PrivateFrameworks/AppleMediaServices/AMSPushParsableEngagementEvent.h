//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface AMSPushParsableEngagementEvent : NSObject
{
}

+ (void)_waitForPromises:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000004a8d8a
+ (id)_eventForStaticAssetPayload:(id)arg1 bag:(id)arg2;	// IMP=0x00100000004a8a14
+ (id)_eventForMapiPayload:(id)arg1 account:(id)arg2 bag:(id)arg3;	// IMP=0x00100000004a8482
+ (_Bool)shouldSkipAccountCheck;	// IMP=0x00100000004a847a
+ (void)handleNotificationPayload:(id)arg1 config:(id)arg2 bag:(id)arg3;	// IMP=0x00100000004a7a33

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

