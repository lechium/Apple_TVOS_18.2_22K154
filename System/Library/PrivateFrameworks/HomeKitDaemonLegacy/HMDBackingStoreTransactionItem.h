//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDBackingStoreModelObject, HMFMessage, NSSet, NSString;

__attribute__((visibility("hidden")))
@interface HMDBackingStoreTransactionItem : HMFObject
{
    HMDBackingStoreModelObject *_change;	// 8 = 0x8
    NSSet *_dependentUUIDs;	// 16 = 0x10
    HMFMessage *_message;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000092cbca
@property(readonly, copy, nonatomic) HMFMessage *message; // @synthesize message=_message;
@property(readonly, nonatomic) NSSet *dependentUUIDs; // @synthesize dependentUUIDs=_dependentUUIDs;
@property(readonly, nonatomic) HMDBackingStoreModelObject *change; // @synthesize change=_change;
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
- (id)initWithChange:(id)arg1 message:(id)arg2;	// IMP=0x000000000092c8fe

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

