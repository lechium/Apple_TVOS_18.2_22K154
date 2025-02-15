//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BaseBoard/BSTransaction.h>

@class BSWatchdog, FBProcessManager, NSString, NSURL, PBProcessManager, PBSceneManager, PBSnapshotService;
@protocol BSInvalidatable, PBOpenAppTransitioner;

@interface PBApplicationLanguageChangeTransaction : BSTransaction
{
    _Bool _languageChange;	// 8 = 0x8
    _Bool _localeChange;	// 9 = 0x9
    PBProcessManager *_processManager;	// 16 = 0x10
    FBProcessManager *_fbProcessManager;	// 24 = 0x18
    PBSceneManager *_sceneManager;	// 32 = 0x20
    id <PBOpenAppTransitioner> _openAppTransitioner;	// 40 = 0x28
    PBSnapshotService *_snapshotService;	// 48 = 0x30
    NSString *_relaunchBundleID;	// 56 = 0x38
    NSURL *_relaunchURL;	// 64 = 0x40
    id <BSInvalidatable> _preventKioskLaunchAssertion;	// 72 = 0x48
    BSWatchdog *_watchdog;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x002000000002ffe7
@property(readonly, nonatomic) BSWatchdog *watchdog; // @synthesize watchdog=_watchdog;
@property(readonly, nonatomic) id <BSInvalidatable> preventKioskLaunchAssertion; // @synthesize preventKioskLaunchAssertion=_preventKioskLaunchAssertion;
@property(readonly, nonatomic) NSURL *relaunchURL; // @synthesize relaunchURL=_relaunchURL;
@property(readonly, nonatomic) NSString *relaunchBundleID; // @synthesize relaunchBundleID=_relaunchBundleID;
@property(readonly, nonatomic) PBSnapshotService *snapshotService; // @synthesize snapshotService=_snapshotService;
@property(readonly, nonatomic) id <PBOpenAppTransitioner> openAppTransitioner; // @synthesize openAppTransitioner=_openAppTransitioner;
@property(readonly, nonatomic) PBSceneManager *sceneManager; // @synthesize sceneManager=_sceneManager;
@property(readonly, nonatomic) FBProcessManager *fbProcessManager; // @synthesize fbProcessManager=_fbProcessManager;
@property(readonly, nonatomic) PBProcessManager *processManager; // @synthesize processManager=_processManager;
@property(nonatomic, getter=isLocaleChange) _Bool localeChange; // @synthesize localeChange=_localeChange;
@property(nonatomic, getter=isLanguageChange) _Bool languageChange; // @synthesize languageChange=_languageChange;
- (void)_invalidateRecentApplicationSnapshots;	// IMP=0x001000000002fdb1
- (void)_attemptLaunchingRelaunchAppWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000002fb39
- (CDUnknownBlockType)_processKillCompletionForRelaunchApp;	// IMP=0x001000000002f9cf
- (void)_enumerateApplicationProcesses:(CDUnknownBlockType)arg1;	// IMP=0x001000000002f65a
- (id)_createPreventKioskRelaunchAssertion;	// IMP=0x001000000002f5a3
- (_Bool)shouldWatchdog:(id *)arg1;	// IMP=0x001000000002f566
- (double)watchdogTimeout;	// IMP=0x001000000002f558
- (void)_didComplete;	// IMP=0x001000000002f4ef
- (void)_begin;	// IMP=0x001000000002efd2
- (void)dealloc;	// IMP=0x001000000002ef89
- (id)init;	// IMP=0x001000000002ef03
- (id)initWithRelaunchBundleID:(id)arg1 url:(id)arg2;	// IMP=0x001000000002edb5
- (id)initWithProcessManager:(id)arg1 fbProcessManager:(id)arg2 sceneManager:(id)arg3 openAppTransitioner:(id)arg4 snapshotService:(id)arg5 relaunchBundleID:(id)arg6 url:(id)arg7;	// IMP=0x001000000002e572

@end

