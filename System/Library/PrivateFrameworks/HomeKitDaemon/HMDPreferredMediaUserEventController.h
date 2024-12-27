//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol HMDFetchedSettingsDriver, HMDPreferredMediaUserEventControllerDataSource, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDPreferredMediaUserEventController : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    id <HMDFetchedSettingsDriver> _driver;	// 16 = 0x10
    id <HMDPreferredMediaUserEventControllerDataSource> _dataSource;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000cf5466
@property(readonly) __weak id <HMDPreferredMediaUserEventControllerDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(readonly) id <HMDFetchedSettingsDriver> driver; // @synthesize driver=_driver;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)driverDidReload:(id)arg1;	// IMP=0x0000000000cf5329
- (void)driver:(id)arg1 didUpdatePrimaryUserInfo:(id)arg2;	// IMP=0x0000000000cf50bf
- (void)driver:(id)arg1 didUpdateSettings:(id)arg2;	// IMP=0x0000000000cf4fba
- (void)_postUpdateEventsIfDifferent:(id)arg1;	// IMP=0x0000000000cf4802
- (double)eventTimestamp;	// IMP=0x0000000000cf47e9
- (id)eventSource;	// IMP=0x0000000000cf476f
- (void)updatePreferredMediaUserWithPrimaryUserInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000cf4691
- (id)initWithDataSource:(id)arg1 queue:(id)arg2 driver:(id)arg3;	// IMP=0x0000000000cf45c7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

