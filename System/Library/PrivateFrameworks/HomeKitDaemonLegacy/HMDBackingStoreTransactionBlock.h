//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDBackingStore, HMDBackingStoreTransactionOptions, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface HMDBackingStoreTransactionBlock : HMFObject
{
    _Bool _committed;	// 8 = 0x8
    HMDBackingStoreTransactionOptions *_options;	// 16 = 0x10
    HMDBackingStore *_backingStore;	// 24 = 0x18
    NSMutableArray *_objects;	// 32 = 0x20
}

+ (id)logCategory;	// IMP=0x001000000092e038
+ (void)sort:(id)arg1;	// IMP=0x001000000092dd3f
- (void).cxx_destruct;	// IMP=0x000000000092dcb7
@property(nonatomic) _Bool committed; // @synthesize committed=_committed;
@property(retain, nonatomic) NSMutableArray *objects; // @synthesize objects=_objects;
@property(nonatomic) __weak HMDBackingStore *backingStore; // @synthesize backingStore=_backingStore;
@property(readonly, nonatomic) HMDBackingStoreTransactionOptions *options; // @synthesize options=_options;
- (id)logIdentifier;	// IMP=0x000000000092dc27
- (void)dumpDebug;	// IMP=0x000000000092dc0e
- (void)dumpDebug:(id)arg1;	// IMP=0x000000000092dbf1
- (void)dumpWithVerbosity:(_Bool)arg1 prefix:(id)arg2 logType:(unsigned char)arg3;	// IMP=0x000000000092d7f1
@property(readonly, copy) NSString *description;
- (void)save;	// IMP=0x000000000092d73d
- (void)save:(CDUnknownBlockType)arg1;	// IMP=0x000000000092d690
- (void)runWithoutSave:(CDUnknownBlockType)arg1;	// IMP=0x000000000092d60e
- (void)run;	// IMP=0x000000000092d5fa
- (void)run:(CDUnknownBlockType)arg1;	// IMP=0x000000000092d584
- (void)addObjects:(id)arg1;	// IMP=0x000000000092d458
- (void)add:(id)arg1 withMessage:(id)arg2;	// IMP=0x000000000092cd3d
- (void)add:(id)arg1;	// IMP=0x000000000092cd29
- (id)initWithBackingStore:(id)arg1 options:(id)arg2 label:(id)arg3;	// IMP=0x000000000092cc0c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

