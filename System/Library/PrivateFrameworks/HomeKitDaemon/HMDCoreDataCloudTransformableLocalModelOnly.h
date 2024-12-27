//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface HMDCoreDataCloudTransformableLocalModelOnly : NSObject
{
}

+ (void)addToUpdates:(id)arg1 objectID:(id)arg2 properties:(id)arg3;	// IMP=0x0010000000ec894d
+ (_Bool)exportDeleteWithObjectID:(id)arg1 modelID:(id)arg2 additionalUpdates:(id)arg3 context:(id)arg4;	// IMP=0x0010000000ec8945
+ (_Bool)exportUpdateWithObjectID:(id)arg1 updatedProperties:(id)arg2 additionalUpdates:(id)arg3 context:(id)arg4;	// IMP=0x0010000000ec886f
+ (_Bool)exportInsertWithObjectID:(id)arg1 additionalUpdates:(id)arg2 context:(id)arg3;	// IMP=0x0010000000ec8867
+ (id)createWithLocalModel:(id)arg1 context:(id)arg2;	// IMP=0x0010000000ec87a3
+ (id)fetchWithLocalModel:(id)arg1 context:(id)arg2;	// IMP=0x0010000000ec86df
+ (_Bool)importDeleteWithObjectID:(id)arg1 modelID:(id)arg2 additionalUpdates:(id)arg3 context:(id)arg4;	// IMP=0x0010000000ec8609
+ (_Bool)importUpdateWithObjectID:(id)arg1 updatedProperties:(id)arg2 additionalUpdates:(id)arg3 context:(id)arg4;	// IMP=0x0010000000ec8533
+ (_Bool)importInsertWithObjectID:(id)arg1 additionalUpdates:(id)arg2 context:(id)arg3;	// IMP=0x0010000000ec8466
+ (id)logCategory;	// IMP=0x0010000000ec844d
+ (id)new;	// IMP=0x0010000000ec83a5
- (id)createLocalModelWithContext:(id)arg1;	// IMP=0x0000000000ec8d29
- (id)fetchLocalModelWithContext:(id)arg1;	// IMP=0x0000000000ec8c75
- (id)init;	// IMP=0x0000000000ec8bcd

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

