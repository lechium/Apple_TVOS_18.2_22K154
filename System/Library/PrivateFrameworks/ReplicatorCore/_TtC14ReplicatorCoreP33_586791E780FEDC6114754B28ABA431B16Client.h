//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface _TtC14ReplicatorCoreP33_586791E780FEDC6114754B28ABA431B16Client : NSObject
{
    MISSING_TYPE *pid;	// 8 = 0x8
    MISSING_TYPE *connection;	// 16 = 0x10
    MISSING_TYPE *lock;	// 24 = 0x18
    MISSING_TYPE *delegate;	// 32 = 0x20
    MISSING_TYPE *lock_descriptors;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000048ee0
- (id)init;	// IMP=0x0000000000048e60
- (id)allowListAndReturnError:(id *)arg1;	// IMP=0x000000000004a870
- (id)isAllowListEnabledAndReturnError:(id *)arg1;	// IMP=0x000000000004a700
- (_Bool)removeFromAllowListWithParameters:(id)arg1 error:(id *)arg2;	// IMP=0x000000000004a5b0
- (_Bool)addIDToAllowListWithParameters:(id)arg1 error:(id *)arg2;	// IMP=0x000000000004a370
- (_Bool)setAllowListWithParameters:(id)arg1 error:(id *)arg2;	// IMP=0x000000000004a0e0
- (_Bool)enableAllowListWithParameters:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000049de0
- (_Bool)setEnabledWithParameters:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000049c50
- (id)isEnabledAndReturnError:(id *)arg1;	// IMP=0x0000000000049c10
- (_Bool)retryStuckRelationshipsAndReturnError:(id *)arg1;	// IMP=0x0000000000049a80
- (_Bool)unavailableWithParameters:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000049950
- (_Bool)unpairWithParameters:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000497c0
- (void)pairWithParameters:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000049600
- (id)pushTokenWithParameters:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000049430
- (id)localDeviceAndReturnError:(id *)arg1;	// IMP=0x0000000000049250
- (id)devicesAndReturnError:(id *)arg1;	// IMP=0x0000000000049080

@end

