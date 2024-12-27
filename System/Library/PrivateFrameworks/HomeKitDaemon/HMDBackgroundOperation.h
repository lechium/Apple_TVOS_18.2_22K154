//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDBackgroundOperationManager, HMDHomeManager, NSDate, NSDictionary, NSMutableSet, NSOperationQueue, NSString, NSUUID;
@protocol HMDBackgroundOperationDataSource;

__attribute__((visibility("hidden")))
@interface HMDBackgroundOperation : HMFObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    _Bool _finished;	// 12 = 0xc
    _Bool _isReadyToRun;	// 13 = 0xd
    _Bool _isExpired;	// 14 = 0xe
    _Bool _scheduled;	// 15 = 0xf
    NSDate *_deferralDate;	// 16 = 0x10
    NSUUID *_operationUUID;	// 24 = 0x18
    HMDHomeManager *_homeManager;	// 32 = 0x20
    HMDBackgroundOperationManager *_bgOpsManager;	// 40 = 0x28
    NSMutableSet *_dependencies;	// 48 = 0x30
    NSDictionary *_userData;	// 56 = 0x38
    NSDate *_scheduledDate;	// 64 = 0x40
    NSDate *_expirationDate;	// 72 = 0x48
    NSOperationQueue *_queue;	// 80 = 0x50
    id <HMDBackgroundOperationDataSource> _dataSource;	// 88 = 0x58
    long long _failureCount;	// 96 = 0x60
}

+ (id)logCategory;	// IMP=0x00100000008a66b8
+ (id)predicate;	// IMP=0x00100000008a6610
- (void).cxx_destruct;	// IMP=0x00000000008a6559
@property(nonatomic) long long failureCount; // @synthesize failureCount=_failureCount;
@property(readonly, nonatomic) id <HMDBackgroundOperationDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(getter=isAlreadyScheduled) _Bool scheduled; // @synthesize scheduled=_scheduled;
@property(nonatomic) _Bool isExpired; // @synthesize isExpired=_isExpired;
@property(nonatomic) _Bool isReadyToRun; // @synthesize isReadyToRun=_isReadyToRun;
@property(readonly, nonatomic) NSOperationQueue *queue; // @synthesize queue=_queue;
@property(readonly) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property(readonly) NSDate *scheduledDate; // @synthesize scheduledDate=_scheduledDate;
@property(readonly) NSDictionary *userData; // @synthesize userData=_userData;
@property _Bool finished; // @synthesize finished=_finished;
@property(readonly) NSMutableSet *dependencies; // @synthesize dependencies=_dependencies;
@property(retain, nonatomic) HMDBackgroundOperationManager *bgOpsManager; // @synthesize bgOpsManager=_bgOpsManager;
@property(nonatomic) __weak HMDHomeManager *homeManager; // @synthesize homeManager=_homeManager;
@property(readonly, nonatomic) NSUUID *operationUUID; // @synthesize operationUUID=_operationUUID;
- (id)dumpState;	// IMP=0x00000000008a6250
- (id)attributeDescriptions;	// IMP=0x00000000008a5f29
- (id)logIdentifier;	// IMP=0x00000000008a5ed9
- (id)AllDependencies;	// IMP=0x00000000008a5e79
- (_Bool)hasDependency:(id)arg1;	// IMP=0x00000000008a5dd7
- (void)removeDependency:(id)arg1;	// IMP=0x00000000008a5d43
- (void)addDependency:(id)arg1;	// IMP=0x00000000008a5cac
- (_Bool)isDeferred;	// IMP=0x00000000008a5c05
@property(retain) NSDate *deferralDate; // @synthesize deferralDate=_deferralDate;
- (void)deferWithFailureCount:(long long)arg1;	// IMP=0x00000000008a5a88
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000008a575d
- (void)markOperationFinished;	// IMP=0x00000000008a5746
- (_Bool)runOperation:(id)arg1;	// IMP=0x00000000008a5283
@property(readonly) long long qualityOfService;
- (id)initWithUserData:(id)arg1 dataSource:(id)arg2 backGroundOpsManager:(id)arg3;	// IMP=0x00000000008a5167
- (id)initWithUserData:(id)arg1;	// IMP=0x00000000008a5092
- (id)initWithUUID:(id)arg1 userData:(id)arg2 backGroundOpsManager:(id)arg3 scheduledDate:(id)arg4 expirationDate:(id)arg5 dataSource:(id)arg6 dependentOperations:(id)arg7;	// IMP=0x00000000008a4eb8
- (_Bool)mainWithError:(id *)arg1;	// IMP=0x00000000008a4e10

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

