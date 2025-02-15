//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class OTControl;

@interface OTControlCLI : NSObject
{
    OTControl *_control;	// 8 = 0x8
}

+ (id)annotateStatus:(id)arg1;	// IMP=0x0040000000012dc9
- (void).cxx_destruct;	// IMP=0x002000000000e3fb
@property(retain) OTControl *control; // @synthesize control=_control;
- (int)reset:(id)arg1 appleID:(id)arg2 isGuitarfish:(_Bool)arg3 dsid:(id)arg4;	// IMP=0x001000000000e1c0
- (int)rerollWithArguments:(id)arg1 json:(_Bool)arg2;	// IMP=0x001000000000e0c1
- (int)printAccountMetadataWithArguments:(id)arg1 json:(_Bool)arg2;	// IMP=0x001000000000e018
- (int)setMachineIDOverride:(id)arg1 machineID:(id)arg2 json:(_Bool)arg3;	// IMP=0x001000000000deff
- (int)fetchAccountWideSettingsWithArguments:(id)arg1 useDefault:(_Bool)arg2 forceFetch:(_Bool)arg3 json:(_Bool)arg4;	// IMP=0x001000000000db27
- (int)fetchAccountSettingsWithArguments:(id)arg1 json:(_Bool)arg2;	// IMP=0x001000000000da28
- (int)disableWalrusWithArguments:(id)arg1 timeout:(double)arg2;	// IMP=0x001000000000d814
- (int)enableWalrusWithArguments:(id)arg1 timeout:(double)arg2;	// IMP=0x001000000000d5fd
- (int)enableWebAccessWithArguments:(id)arg1 timeout:(double)arg2;	// IMP=0x001000000000d3e6
- (int)disableWebAccessWithArguments:(id)arg1 timeout:(double)arg2;	// IMP=0x001000000000d1d2
- (int)createInheritanceKeyWithClaimTokenAndWrappingKey:(id)arg1 uuidString:(id)arg2 claimToken:(id)arg3 wrappingKey:(id)arg4 json:(_Bool)arg5 timeout:(double)arg6;	// IMP=0x001000000000ce7c
- (int)recreateInheritanceKeyWithArguments:(id)arg1 uuidString:(id)arg2 wrappingKey:(id)arg3 wrappedKey:(id)arg4 claimToken:(id)arg5 json:(_Bool)arg6 timeout:(double)arg7;	// IMP=0x001000000000c980
- (int)checkInheritanceKeyWithArguments:(id)arg1 uuidString:(id)arg2 timeout:(double)arg3;	// IMP=0x001000000000c74c
- (int)removeInheritanceKeyWithArguments:(id)arg1 uuidString:(id)arg2 timeout:(double)arg3;	// IMP=0x001000000000c518
- (int)preflightJoinWithInheritanceKeyWithArguments:(id)arg1 wrappingKey:(id)arg2 wrappedKey:(id)arg3 uuidString:(id)arg4 timeout:(double)arg5;	// IMP=0x001000000000c0ec
- (int)joinWithInheritanceKeyWithArguments:(id)arg1 wrappingKey:(id)arg2 wrappedKey:(id)arg3 uuidString:(id)arg4 timeout:(double)arg5;	// IMP=0x001000000000bcc0
- (int)storeInheritanceKeyWithArguments:(id)arg1 wrappingKey:(id)arg2 wrappedKey:(id)arg3 uuidString:(id)arg4 timeout:(double)arg5;	// IMP=0x001000000000b8d8
- (int)generateInheritanceKeyWithArguments:(id)arg1 json:(_Bool)arg2 timeout:(double)arg3;	// IMP=0x001000000000b709
- (int)createInheritanceKeyWithArguments:(id)arg1 uuidString:(id)arg2 json:(_Bool)arg3 timeout:(double)arg4;	// IMP=0x001000000000b4a5
- (int)preflightJoinWithRecoveryKeyWithArguments:(id)arg1 recoveryKey:(id)arg2;	// IMP=0x001000000000b370
- (int)checkRecoveryKeyWithArguments:(id)arg1;	// IMP=0x001000000000b261
- (int)joinWithRecoveryKeyWithArguments:(id)arg1 recoveryKey:(id)arg2;	// IMP=0x001000000000b12c
- (int)setRecoveryKeyWithArguments:(id)arg1;	// IMP=0x001000000000af6e
- (int)removeRecoveryKeyWithArguments:(id)arg1;	// IMP=0x001000000000ae7e
- (int)checkCustodianRecoveryKeyWithArguments:(id)arg1 uuidString:(id)arg2 timeout:(double)arg3;	// IMP=0x001000000000ac4a
- (int)removeCustodianRecoveryKeyWithArguments:(id)arg1 uuidString:(id)arg2 timeout:(double)arg3;	// IMP=0x001000000000aa16
- (int)preflightJoinWithCustodianRecoveryKeyWithArguments:(id)arg1 wrappingKey:(id)arg2 wrappedKey:(id)arg3 uuidString:(id)arg4 timeout:(double)arg5;	// IMP=0x001000000000a5ea
- (int)joinWithCustodianRecoveryKeyWithArguments:(id)arg1 wrappingKey:(id)arg2 wrappedKey:(id)arg3 uuidString:(id)arg4 timeout:(double)arg5;	// IMP=0x001000000000a1be
- (int)createCustodianRecoveryKeyWithArguments:(id)arg1 uuidString:(id)arg2 json:(_Bool)arg3 timeout:(double)arg4;	// IMP=0x0010000000009f5a
- (int)resetAccountCDPContentsWithArguments:(id)arg1 idmsTargetContext:(id)arg2 idmsCuttlefishPassword:(id)arg3 notifyIdMS:(_Bool)arg4;	// IMP=0x0010000000009d98
- (int)fetchUserControllableViewsSyncStatus:(id)arg1;	// IMP=0x0010000000009ca8
- (int)setUserControllableViewsSyncStatus:(id)arg1 enabled:(_Bool)arg2;	// IMP=0x0010000000009ba9
- (int)tapToRadar:(id)arg1 description:(id)arg2 radar:(id)arg3;	// IMP=0x0010000000009a82
- (int)refetchCKKSPolicy:(id)arg1;	// IMP=0x0010000000009992
- (int)simulateReceivePush:(id)arg1 json:(_Bool)arg2;	// IMP=0x0010000000009893
- (int)healthCheck:(id)arg1 skipRateLimitingCheck:(_Bool)arg2 repair:(_Bool)arg3 json:(_Bool)arg4;	// IMP=0x0010000000009784
- (int)fetchAllBottles:(id)arg1 control:(id)arg2 overrideEscrowCache:(_Bool)arg3;	// IMP=0x001000000000949a
- (int)recoverUsingBottleID:(id)arg1 entropy:(id)arg2 arguments:(id)arg3 control:(id)arg4;	// IMP=0x00100000000092f6
- (int)status:(id)arg1 json:(_Bool)arg2;	// IMP=0x00100000000091f2
- (int)tlkRecoverability:(id)arg1;	// IMP=0x0010000000008bb7
- (int)performSilentEscrowRecovery:(id)arg1 appleID:(id)arg2 secret:(id)arg3;	// IMP=0x00100000000087e2
- (int)performEscrowRecovery:(id)arg1 recordID:(id)arg2 appleID:(id)arg3 secret:(id)arg4 overrideForAccountScript:(_Bool)arg5 overrideEscrowCache:(_Bool)arg6;	// IMP=0x00100000000080ac
- (int)fetchAllEscrowRecords:(id)arg1 json:(_Bool)arg2 overrideEscrowCache:(_Bool)arg3;	// IMP=0x0010000000007fe6
- (int)fetchEscrowRecords:(id)arg1 json:(_Bool)arg2 overrideEscrowCache:(_Bool)arg3;	// IMP=0x0010000000007f20
- (int)checkAndPrintEscrowRecords:(id)arg1 error:(id)arg2 json:(_Bool)arg3;	// IMP=0x001000000000781d
- (void)printPeers:(id)arg1 egoPeerID:(id)arg2 informationOnPeers:(id)arg3 informationOnCRKs:(id)arg4;	// IMP=0x0010000000007536
- (void)printCRKWithPeer:(id)arg1 information:(id)arg2 prefix:(id)arg3;	// IMP=0x00100000000073d7
- (void)printPeer:(id)arg1 prefix:(id)arg2;	// IMP=0x0010000000007106
- (int)resetProtectedData:(id)arg1 appleID:(id)arg2 dsid:(id)arg3 idmsTargetContext:(id)arg4 idmsCuttlefishPassword:(id)arg5 isGuitarfish:(_Bool)arg6 notifyIdMS:(_Bool)arg7;	// IMP=0x0010000000006e84
- (int)resetOctagon:(id)arg1 idmsTargetContext:(id)arg2 idmsCuttlefishPassword:(id)arg3 notifyIdMS:(_Bool)arg4 isGuitarfish:(_Bool)arg5 timeout:(double)arg6;	// IMP=0x0010000000006c64
- (int)depart:(id)arg1;	// IMP=0x0010000000006b74
- (int)signOut:(id)arg1;	// IMP=0x0010000000006a84
- (int)signIn:(id)arg1;	// IMP=0x0010000000006994
- (int)startOctagonStateMachine:(id)arg1;	// IMP=0x00100000000068a4
- (id)initWithOTControl:(id)arg1;	// IMP=0x0010000000006839

@end

