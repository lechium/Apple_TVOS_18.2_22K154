//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSXPCConnection;

@interface MIClientConnection : NSObject
{
    unsigned int _percentComplete;	// 8 = 0x8
    NSXPCConnection *_xpcConnection;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000001ca98
@property(readonly, nonatomic) unsigned int percentComplete; // @synthesize percentComplete=_percentComplete;
@property(nonatomic) __weak NSXPCConnection *xpcConnection; // @synthesize xpcConnection=_xpcConnection;
- (void)setLaunchWarningForApp:(id)arg1 withUniqueInstallIdentifier:(id)arg2 warningData:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000001c38d
- (void)createSerializedPlaceholderForInstalledAppWithBundeID:(id)arg1 personaUniqueString:(id)arg2 atResultURL:(id)arg3 onDevice:(int)arg4 withCompletion:(CDUnknownBlockType)arg5;	// IMP=0x001000000001bfb1
- (void)triggerRegistrationForDiskImageContentForOptions:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x001000000001bf91
- (void)triggerRegistrationForContainerizedContentForOptions:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x001000000001bf6e
- (void)_triggerRegistrationForContent:(unsigned long long)arg1 registrationOptions:(id)arg2 writeLock:(_Bool)arg3 withCompletion:(CDUnknownBlockType)arg4;	// IMP=0x001000000001b866
- (void)setEligibilityTestOverrides:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x001000000001b75b
- (void)clearTestFlags:(unsigned long long)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x001000000001b649
- (void)setTestFlags:(unsigned long long)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x001000000001b537
- (void)getTestModeWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000001b477
- (void)endTestModeWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000001b39d
- (void)setTestModeWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000001b2c3
- (void)raiseExceptionWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000001b18b
- (void)dieForTesting;	// IMP=0x001000000001b124
- (void)getPidForTestingWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000001b0f4
- (void)linkedBundleIDsForAppIdentity:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x001000000001ae30
- (void)referencesForBundleWithIdentifier:(id)arg1 inDomain:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000001ace4
- (void)invalidateReference:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000001aada
- (void)acquireReferenceforInstalledAppWithIdentity:(id)arg1 inDomain:(unsigned long long)arg2 matchingInstallSessionID:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000001a2f7
- (void)finalizeReference:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000019935
- (void)systemAppMigratorHasCompleted:(CDUnknownBlockType)arg1;	// IMP=0x0010000000019769
- (void)waitForSystemAppMigratorToComplete:(CDUnknownBlockType)arg1;	// IMP=0x00100000000195c7
- (void)setSystemAppMigrationComplete:(CDUnknownBlockType)arg1;	// IMP=0x0010000000019400
- (void)getAppMetadataForApp:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000190ce
- (void)updatePlaceholderMetadataForApp:(id)arg1 installType:(unsigned long long)arg2 failureReason:(unsigned long long)arg3 underlyingError:(id)arg4 failureSource:(unsigned long long)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x001000000001887f
- (void)checkCapabilities:(id)arg1 withOptions:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000001845b
- (void)listSafeHarborsOfType:(unsigned long long)arg1 forPersona:(id)arg2 withOptions:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00100000000180ce
- (void)removeSafeHarborForIdentity:(id)arg1 ofType:(unsigned long long)arg2 withOptions:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0010000000017c81
- (void)registerSafeHarborAtPath:(id)arg1 forIdentity:(id)arg2 ofType:(unsigned long long)arg3 withOptions:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x0010000000017747
- (void)fetchDiskUsageForIdentifiers:(id)arg1 withOptions:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000173bb
- (void)updateiTunesMetadataForIXWithIdentifier:(id)arg1 metadata:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000169f6
- (void)updateSinfForIXWithIdentifier:(id)arg1 withOptions:(id)arg2 sinfData:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0010000000015ccc
- (_Bool)_validateArgsForMethodWithName:(const char *)arg1 bundleIdentifier:(id)arg2 data:(id)arg3 optionalOptions:(id)arg4 error:(id *)arg5;	// IMP=0x0010000000015acf
- (void)fetchInfoForContainerizedAppWithIdentity:(id)arg1 inDomain:(unsigned long long)arg2 options:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00100000000155a8
- (void)fetchInfoForFrameworkAtURL:(id)arg1 options:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000014d1a
- (void)enumerateInstalledAppsWithOptions:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000014626
- (void)updateSystemAppStateForIdentifier:(id)arg1 appState:(int)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000142a2
- (void)lookupSystemAppStateWithOptions:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000013f59
- (void)clearUninstalledIdentifiers:(id)arg1 withOptions:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000013c11
- (void)lookupUninstalledWithOptions:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000013906
- (void)uninstallIdentity:(id)arg1 withOptions:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000137c8
- (void)_uninstallIdentities:(id)arg1 withOptions:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000013118
- (void)uninstallIdentifiers:(id)arg1 withOptions:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000012ede
- (void)revertForIXWithIdentity:(id)arg1 withOptions:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000129bf
- (void)revertIdentity:(id)arg1 withOptions:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000001290d
- (void)finalizeStagedInstallForUUID:(id)arg1 returningResultInfo:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000012602
- (void)_finalizeStagedUpdateForUUID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000011efd
- (void)stageInstallURL:(id)arg1 identity:(id)arg2 targetingDomain:(unsigned long long)arg3 withOptions:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x0010000000011ae7
- (void)_stageURL:(id)arg1 identity:(id)arg2 domain:(unsigned long long)arg3 options:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x001000000001151d
- (void)_installURL:(id)arg1 identity:(id)arg2 targetingDomain:(unsigned long long)arg3 options:(id)arg4 operationType:(unsigned long long)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x00100000000110a9
- (_Bool)_validateInstallRequestForURL:(id)arg1 identity:(id)arg2 targetingDomain:(unsigned long long)arg3 options:(id)arg4 withError:(id *)arg5;	// IMP=0x0010000000010c5a
- (void)registerPlaceholderForReference:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000000fb63
- (void)cancelUpdateForStagedUUID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000000f805
- (void)installURL:(id)arg1 identity:(id)arg2 targetingDomain:(unsigned long long)arg3 options:(id)arg4 returningResultInfo:(_Bool)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x001000000000f718
- (void)_doInstallationForURL:(id)arg1 identity:(id)arg2 domain:(unsigned long long)arg3 options:(id)arg4 operationType:(unsigned long long)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x001000000000f0b5
- (_Bool)_validateAppWithBundleID:(id)arg1 isNotInstalledInDomain:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x001000000000ef6c
- (void)_callBlockAfterDelegateMessagesSend:(const char *)arg1 dispatchBlock:(CDUnknownBlockType)arg2;	// IMP=0x001000000000ee16
- (void)releaseTerminationAssertion;	// IMP=0x001000000000ecf1
- (void)sendDelegateMessagesComplete;	// IMP=0x001000000000ebca
- (void)sendProgressWithStatus:(id)arg1;	// IMP=0x001000000000ebb5
- (void)sendProgressWithStatus:(id)arg1 percentComplete:(unsigned int)arg2;	// IMP=0x001000000000eaae
- (void)sendProgressWithDictionary:(id)arg1;	// IMP=0x001000000000e994
@property(readonly, copy, nonatomic) NSString *clientName;

@end

