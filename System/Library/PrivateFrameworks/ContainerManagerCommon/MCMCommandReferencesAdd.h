//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MCMUserIdentity, NSSet;

__attribute__((visibility("hidden")))
@interface MCMCommandReferencesAdd
{
    _Bool _createDuringReconciliation;	// 8 = 0x8
    _Bool _deleteDuringReconciliation;	// 9 = 0x9
    _Bool _yesReallyApplyToAll;	// 10 = 0xa
    unsigned int _uid;	// 12 = 0xc
    unsigned long long _containerClass;	// 16 = 0x10
    NSSet *_ownerIdentifiers;	// 24 = 0x18
    NSSet *_groupIdentifiers;	// 32 = 0x20
    unsigned long long _explicitFlags;	// 40 = 0x28
    unsigned long long _privateFlags;	// 48 = 0x30
    MCMUserIdentity *_userIdentity;	// 56 = 0x38
}

+ (Class)incomingMessageClass;	// IMP=0x001000000000db7a
+ (unsigned long long)command;	// IMP=0x001000000000db4e
- (void).cxx_destruct;	// IMP=0x000000000000d906
@property(readonly, nonatomic) MCMUserIdentity *userIdentity; // @synthesize userIdentity=_userIdentity;
@property(readonly, nonatomic) _Bool yesReallyApplyToAll; // @synthesize yesReallyApplyToAll=_yesReallyApplyToAll;
@property(readonly, nonatomic) _Bool deleteDuringReconciliation; // @synthesize deleteDuringReconciliation=_deleteDuringReconciliation;
@property(readonly, nonatomic) _Bool createDuringReconciliation; // @synthesize createDuringReconciliation=_createDuringReconciliation;
@property(readonly, nonatomic) unsigned long long privateFlags; // @synthesize privateFlags=_privateFlags;
@property(readonly, nonatomic) unsigned int uid; // @synthesize uid=_uid;
@property(readonly, nonatomic) unsigned long long explicitFlags; // @synthesize explicitFlags=_explicitFlags;
@property(readonly, nonatomic) NSSet *groupIdentifiers; // @synthesize groupIdentifiers=_groupIdentifiers;
@property(readonly, nonatomic) NSSet *ownerIdentifiers; // @synthesize ownerIdentifiers=_ownerIdentifiers;
@property(readonly, nonatomic) unsigned long long containerClass; // @synthesize containerClass=_containerClass;
- (id)_resolveUserIdentity;	// IMP=0x000000000000d594
- (void)execute;	// IMP=0x000000000000ca91
- (_Bool)preflightClientAllowed;	// IMP=0x000000000000c9fd
- (id)initWithMessage:(id)arg1 context:(id)arg2 reply:(id)arg3;	// IMP=0x000000000000c8b7

@end

