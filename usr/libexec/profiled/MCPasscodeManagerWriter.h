//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ManagedConfiguration/MCPasscodeManager.h>

@interface MCPasscodeManagerWriter : MCPasscodeManager
{
}

+ (void)setCurrentEphemeralUserPasscodeTypeFromUnlockScreenType:(int)arg1 simplePasscodeType:(int)arg2;	// IMP=0x004000000007d649
+ (_Bool)didPasscodePolicyChangeWithOldRestrictions:(id)arg1 newRestrictions:(id)arg2;	// IMP=0x001000000007d429
+ (id)sharedManager;	// IMP=0x001000000007d325
- (void)migratePasscodeMetadata;	// IMP=0x004000000007d841
- (id)processPasscodeChangeWithOldPascodeGeneration:(id)arg1 oldPublicDict:(id)arg2 newPasscodeGeneration:(id)arg3 newPublicDict:(id)arg4 newPasscodeWasSet:(_Bool)arg5;	// IMP=0x001000000007d839
- (_Bool)clearRecoveryPasscodeOpaqueDataWithOutError:(id *)arg1;	// IMP=0x001000000007d6da
- (id)clearRecoveryPasscode;	// IMP=0x001000000007d66f
- (void)clearPasscodeHistory;	// IMP=0x001000000007d669
- (void)updatePasscodeHistoryWithOldPasscode:(id)arg1 oldPasscodeData:(id)arg2 newPrivateDictionary:(id)arg3;	// IMP=0x001000000007d663
- (void)resetPasscodeMetadata;	// IMP=0x001000000007d64f
- (_Bool)clearPasscodeWithEscrowKeybagData:(id)arg1 secret:(id)arg2 senderBundleID:(id)arg3 outError:(id *)arg4;	// IMP=0x001000000007d421
- (_Bool)changePasscodeWithRecoveryPasscode:(id)arg1 to:(id)arg2 skipRecovery:(_Bool)arg3 senderBundleID:(id)arg4 outError:(id *)arg5;	// IMP=0x001000000007d419
- (_Bool)changePasscodeFrom:(id)arg1 to:(id)arg2 skipRecovery:(_Bool)arg3 senderBundleID:(id)arg4 outError:(id *)arg5;	// IMP=0x001000000007d411
- (_Bool)isPasscodeRecoveryRestricted;	// IMP=0x001000000007d391
- (void)_sendPasscodeChangedNotification;	// IMP=0x001000000007d371
- (void)_setPrivatePasscodeDict:(id)arg1;	// IMP=0x001000000007d36b
- (id)_setPublicPasscodeDict:(id)arg1;	// IMP=0x001000000007d363

@end

