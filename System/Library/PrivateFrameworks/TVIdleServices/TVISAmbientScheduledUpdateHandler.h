//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSBackgroundActivityScheduler, NSString, TVISAmbientPosterInfoManager, TVISOperationQueue;

__attribute__((visibility("hidden")))
@interface TVISAmbientScheduledUpdateHandler : NSObject
{
    TVISAmbientPosterInfoManager *_posterInfoManager;	// 8 = 0x8
    NSArray *_services;	// 16 = 0x10
    TVISOperationQueue *_operationQueue;	// 24 = 0x18
    NSBackgroundActivityScheduler *_scheduler;	// 32 = 0x20
}

+ (double)_timeIntervalToNextUpdateWithTolerance:(long long)arg1;	// IMP=0x00100000000c2e00
+ (double)_timeIntervalToFirstUpdateWithTolerance:(long long)arg1;	// IMP=0x00100000000c2b20
- (void).cxx_destruct;	// IMP=0x00000000000c3030
@property(retain, nonatomic) NSBackgroundActivityScheduler *scheduler; // @synthesize scheduler=_scheduler;
@property(readonly, nonatomic) TVISOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(readonly, copy, nonatomic) NSArray *services; // @synthesize services=_services;
@property(readonly, nonatomic) TVISAmbientPosterInfoManager *posterInfoManager; // @synthesize posterInfoManager=_posterInfoManager;
- (id)_serviceForIdentifier:(id)arg1;	// IMP=0x00000000000c2850
- (void)_handleUpdateWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000c1c60
- (void)_scheduleNextUpdate;	// IMP=0x00000000000c1620
- (void)_scheduleInitialUpdate;	// IMP=0x00000000000c0fe0
- (void)start;	// IMP=0x00000000000c0e80
- (id)initWithPosterInfoManager:(id)arg1 services:(id)arg2;	// IMP=0x00000000000c0d40

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

