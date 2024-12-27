//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSNotificationCenter, NSString;
@protocol HMFTimerManager;

__attribute__((visibility("hidden")))
@interface HMDHomePrimaryResidentMessagingHandlerDefaultDataSource : NSObject
{
    NSNotificationCenter *_notificationCenter;	// 8 = 0x8
    id <HMFTimerManager> _timerManager;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000176c0c
@property(readonly, nonatomic) id <HMFTimerManager> timerManager; // @synthesize timerManager=_timerManager;
@property(readonly, nonatomic) NSNotificationCenter *notificationCenter; // @synthesize notificationCenter=_notificationCenter;
- (id)init;	// IMP=0x0000000000176b5c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

