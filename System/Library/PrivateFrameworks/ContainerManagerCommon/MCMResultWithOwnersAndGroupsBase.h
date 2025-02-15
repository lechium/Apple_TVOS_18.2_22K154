//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MCMError, NSArray, NSMutableArray, NSMutableSet, NSString;

__attribute__((visibility("hidden")))
@interface MCMResultWithOwnersAndGroupsBase
{
    NSMutableArray *_mutableOwnerIdentifiers;	// 8 = 0x8
    NSMutableArray *_mutableGroupIdentifiers;	// 16 = 0x10
    NSMutableSet *_facts;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000008563a
- (id)init;	// IMP=0x0000000000085576
- (_Bool)encodeResultOntoReply:(id)arg1;	// IMP=0x0000000000085239
- (void)addOwner:(id)arg1 group:(id)arg2;	// IMP=0x00000000000850b8
@property(readonly, nonatomic) NSArray *groupIdentifiers;
@property(readonly, nonatomic) NSArray *ownerIdentifiers;

// Remaining properties
@property(nonatomic, getter=isCacheable) _Bool cacheable;
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) MCMError *error; // @dynamic error;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

