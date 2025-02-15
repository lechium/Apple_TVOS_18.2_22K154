//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDHomeManager, NSArray, NSObject, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDAssistantGather : HMFObject
{
    HMDHomeManager *_manager;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_workQueue;	// 16 = 0x10
    NSArray *_currentHomekitObjects;	// 24 = 0x18
}

+ (id)logCategory;	// IMP=0x0010000000844c7c
- (void).cxx_destruct;	// IMP=0x0000000000844986
@property(retain, nonatomic) NSArray *currentHomekitObjects; // @synthesize currentHomekitObjects=_currentHomekitObjects;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(nonatomic) __weak HMDHomeManager *manager; // @synthesize manager=_manager;
- (void)getSyncEntityObjectsWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000844857
@property(readonly, nonatomic) NSArray *homeKitObjects;
- (void)gatherHomeKitObjectsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000844757
- (void)_gatherHomeKitObjects;	// IMP=0x0000000000842c76
@property(readonly, nonatomic) NSString *currentHomeAssistantIdentifier;
@property(readonly, nonatomic) NSString *currentHomeName;
@property(readonly, nonatomic) NSString *primaryHomeAssistantIdentifier;
@property(readonly, nonatomic) NSString *primaryHomeName;
@property(readonly, nonatomic) long long homeCount;
- (id)_getCurrentHome;	// IMP=0x000000000084289a
- (id)_getPrimaryHome;	// IMP=0x0000000000842675
- (id)initWithHomeManager:(id)arg1 queue:(id)arg2;	// IMP=0x00000000008425da

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

