//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class NSArray, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDHomeKeyDataRecorder : HMFObject
{
    NSObject<OS_dispatch_queue> *_workQueue;	// 8 = 0x8
}

+ (id)sharedRecorder;	// IMP=0x006000000075382e
- (void).cxx_destruct;	// IMP=0x0000000000753468
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
- (void)addRecord:(id)arg1 clearPrevious:(_Bool)arg2;	// IMP=0x0000000000753338
@property(readonly, copy) NSMutableArray *mutableRecords;
@property(readonly, copy) NSArray *records;
- (void)recordRemovedWalletKeyWithSerialNumber:(id)arg1 noWalletKeysRemaining:(_Bool)arg2;	// IMP=0x00000000007531a5
- (void)recordUpdatedWalletKey:(id)arg1;	// IMP=0x00000000007530ed
- (void)recordUpdatedWalletKey:(id)arg1 passJSONDict:(id)arg2;	// IMP=0x000000000075300f
- (void)recordAddedWalletKey:(id)arg1;	// IMP=0x0000000000752f57
- (void)recordAddedWalletKey:(id)arg1 passJSONDict:(id)arg2;	// IMP=0x0000000000752e79
- (void)recordInitialWalletKeys:(id)arg1;	// IMP=0x0000000000752dc1
- (id)init;	// IMP=0x0000000000752cf5

@end

