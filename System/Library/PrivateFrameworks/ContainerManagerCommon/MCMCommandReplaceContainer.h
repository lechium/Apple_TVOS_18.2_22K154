//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MCMConcreteContainerIdentity;

__attribute__((visibility("hidden")))
@interface MCMCommandReplaceContainer
{
    _Bool _preserveOldPathIdentifier;	// 8 = 0x8
    _Bool _preserveOldInternalUUID;	// 9 = 0x9
    _Bool _asyncReclaim;	// 10 = 0xa
    MCMConcreteContainerIdentity *_containerIdentityOld;	// 16 = 0x10
    MCMConcreteContainerIdentity *_containerIdentityNew;	// 24 = 0x18
}

+ (id)_readAndValidateReplaceFileAtUrl:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000dd64c
+ (_Bool)recoverFromReplaceOperationsWithContext:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000dc95e
+ (Class)incomingMessageClass;	// IMP=0x00100000000dc92c
+ (unsigned long long)command;	// IMP=0x00100000000dc900
- (void).cxx_destruct;	// IMP=0x00000000000dc6e8
@property(readonly, nonatomic) _Bool asyncReclaim; // @synthesize asyncReclaim=_asyncReclaim;
@property(readonly, nonatomic) _Bool preserveOldInternalUUID; // @synthesize preserveOldInternalUUID=_preserveOldInternalUUID;
@property(readonly, nonatomic) _Bool preserveOldPathIdentifier; // @synthesize preserveOldPathIdentifier=_preserveOldPathIdentifier;
@property(readonly, nonatomic) MCMConcreteContainerIdentity *containerIdentityNew; // @synthesize containerIdentityNew=_containerIdentityNew;
@property(readonly, nonatomic) MCMConcreteContainerIdentity *containerIdentityOld; // @synthesize containerIdentityOld=_containerIdentityOld;
- (_Bool)_writeToDiskReplaceAt:(id)arg1 old:(id)arg2 withNew:(id)arg3 usingStaging:(id)arg4 toDestination:(id)arg5 error:(id *)arg6;	// IMP=0x00000000000dc094
- (void)execute;	// IMP=0x00000000000d90e0
- (_Bool)preflightClientAllowed;	// IMP=0x00000000000d904c
- (id)initWithMessage:(id)arg1 context:(id)arg2 reply:(id)arg3;	// IMP=0x00000000000d8f39
- (id)initWithConcreteContainerIdentityOld:(id)arg1 concreteContainerIdentityNew:(id)arg2 preserveOldPathIdentifier:(_Bool)arg3 preserveOldInternalUUID:(_Bool)arg4 asyncReclaim:(_Bool)arg5 context:(id)arg6 resultPromise:(id)arg7;	// IMP=0x00000000000d8e3d

@end

