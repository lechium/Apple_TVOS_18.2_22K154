//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BSCompoundAssertion, FBProcessManager, FBSSystemService, FBSceneManager, FBSystemService, NSArray, NSError, NSMutableOrderedSet, NSMutableSet, NSString, PBAppInfoController, PBApplicationRepairService, PBKeyboardPreferenceObserver, PBPreventProcessLaunchMonitor;
@protocol BSInvalidatable;

@interface PBProcessManager : NSObject
{
    NSMutableOrderedSet *_recentApplicationBundleIdentifiers;	// 8 = 0x8
    FBSSystemService *_systemService;	// 16 = 0x10
    FBSystemService *_fbSystemAppService;	// 24 = 0x18
    FBSceneManager *_fbSceneManager;	// 32 = 0x20
    FBProcessManager *_fbProcessManager;	// 40 = 0x28
    PBAppInfoController *_appInfoController;	// 48 = 0x30
    NSMutableSet *_pendingSnapshots;	// 56 = 0x38
    PBPreventProcessLaunchMonitor *_preventProcessLaunchMonitor;	// 64 = 0x40
    PBApplicationRepairService *_repairService;	// 72 = 0x48
    PBKeyboardPreferenceObserver *_keyboardPreferenceObserver;	// 80 = 0x50
    BSCompoundAssertion *_preventKioskRelaunchBundleIDsCompoundAssertion;	// 88 = 0x58
    id <BSInvalidatable> _airPlayProcessLaunchAssertion;	// 96 = 0x60
    NSError *_lastAppLaunchCompletionError;	// 104 = 0x68
}

+ (id)sharedInstance;	// IMP=0x002000000025e24a
+ (id)dependencyDescription;	// IMP=0x001000000025e123
- (void).cxx_destruct;	// IMP=0x002000000026430c
@property(readonly, nonatomic) NSError *lastAppLaunchCompletionError; // @synthesize lastAppLaunchCompletionError=_lastAppLaunchCompletionError;
@property(readonly, nonatomic) id <BSInvalidatable> airPlayProcessLaunchAssertion; // @synthesize airPlayProcessLaunchAssertion=_airPlayProcessLaunchAssertion;
@property(readonly, nonatomic) BSCompoundAssertion *preventKioskRelaunchBundleIDsCompoundAssertion; // @synthesize preventKioskRelaunchBundleIDsCompoundAssertion=_preventKioskRelaunchBundleIDsCompoundAssertion;
@property(readonly, nonatomic) PBKeyboardPreferenceObserver *keyboardPreferenceObserver; // @synthesize keyboardPreferenceObserver=_keyboardPreferenceObserver;
@property(readonly, nonatomic) PBApplicationRepairService *repairService; // @synthesize repairService=_repairService;
- (void)appTransitioner:(id)arg1 didCompleteAppTransition:(id)arg2;	// IMP=0x00100000002640f6
- (_Bool)_shouldRelaunchKioskForTerminatingProcessWithBundleID:(id)arg1;	// IMP=0x0010000000264013
- (void)terminateCurrentApplicationIfRestrictedWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000026376e
- (void)restoreSystemFromSleepWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000026345a
- (void)prepareSystemForSleepWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000002633c4
- (void)keyboardPreferenceObserver:(id)arg1 didUpdateFromKeyboardStyle:(long long)arg2 toKeyboardStyle:(long long)arg3;	// IMP=0x0010000000262f7d
- (void)preventProcessLaunchMonitor:(id)arg1 updatedBundleIDsAdding:(id)arg2 removing:(id)arg3;	// IMP=0x0010000000262a91
- (void)appInfoController:(id)arg1 didUpdate:(id)arg2;	// IMP=0x00100000002621ad
- (void)processManager:(id)arg1 didRemoveProcess:(id)arg2;	// IMP=0x001000000026190e
- (void)processManager:(id)arg1 didAddProcess:(id)arg2;	// IMP=0x0010000000261908
- (void)_handleFairplayLaunchFailureForApplication:(id)arg1;	// IMP=0x00100000002618ef
- (void)systemServicePrepareForExit:(id)arg1 andRelaunch:(_Bool)arg2;	// IMP=0x001000000026187f
- (void)systemService:(id)arg1 prepareForShutdownWithOptions:(id)arg2 origin:(id)arg3;	// IMP=0x0010000000261614
- (void)_openAppFromRequest:(id)arg1 bundleIdentifier:(id)arg2 URL:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000026107f
- (void)systemService:(id)arg1 handleOpenApplicationRequest:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000260498
- (_Bool)_handleSpecialURL:(id)arg1;	// IMP=0x001000000025fc84
- (void)systemService:(id)arg1 canActivateApplication:(id)arg2 withResult:(CDUnknownBlockType)arg3;	// IMP=0x001000000025f9d1
- (id)systemServiceApplicationInfoProvider:(id)arg1;	// IMP=0x001000000025f9a7
- (id)preventKioskRelaunchForTerminatingBundleIDs:(id)arg1 reason:(id)arg2;	// IMP=0x001000000025f773
- (id)preventKioskRelaunchWithReason:(id)arg1 forTerminatingApplications:(CDUnknownBlockType)arg2;	// IMP=0x001000000025f521
- (void)reboot;	// IMP=0x001000000025f4a1
- (void)relaunch;	// IMP=0x001000000025f485
- (void)ensureTVAirPlayRunning;	// IMP=0x001000000025f47f
- (void)killApplication:(id)arg1 removeFromRecents:(_Bool)arg2;	// IMP=0x001000000025f1a5
- (void)openApplication:(id)arg1 launchURL:(id)arg2 options:(id)arg3 suspended:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x001000000025ede2
- (_Bool)isProcessRunningForBundleID:(id)arg1;	// IMP=0x001000000025ebfc
- (_Bool)isAirPlayViewServicePID:(int)arg1;	// IMP=0x001000000025eaa4
- (_Bool)isSiriViewServicePID:(int)arg1;	// IMP=0x001000000025e94c
@property(readonly, copy, nonatomic) NSArray *recentApplicationBundleIdentifiers;
- (void)_setupRecentApplicationIdentifiers:(id)arg1;	// IMP=0x001000000025e7d0
- (void)dealloc;	// IMP=0x001000000025e6f9
- (id)init;	// IMP=0x001000000025e3d9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

