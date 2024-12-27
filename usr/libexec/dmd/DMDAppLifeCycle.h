//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CATStateMachine, NSDate, NSOperationQueue, NSPointerArray, NSProgress, NSString;

@interface DMDAppLifeCycle : NSObject
{
    NSString *_bundleIdentifier;	// 8 = 0x8
    NSProgress *_progress;	// 16 = 0x10
    NSPointerArray *_observers;	// 24 = 0x18
    NSOperationQueue *_queue;	// 32 = 0x20
    CATStateMachine *_stateMachine;	// 40 = 0x28
    NSDate *_lastModified;	// 48 = 0x30
}

+ (id)_lifeCycleByBundleIdentifier;	// IMP=0x004000000001f3a8
+ (void)_removeLifeCycleForBundleIdentifier:(id)arg1;	// IMP=0x001000000001f30b
+ (id)lifeCycleForBundleIdentifier:(id)arg1;	// IMP=0x001000000001f049
- (void).cxx_destruct;	// IMP=0x0020000000023a1e
@property(retain, nonatomic) NSDate *lastModified; // @synthesize lastModified=_lastModified;
- (void);	// IMP=0x00100000000239f2
@property(retain, nonatomic) CATStateMachine *stateMachine; // @synthesize stateMachine=_stateMachine;
@property(retain, nonatomic) NSOperationQueue *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSPointerArray *observers; // @synthesize observers=_observers;
@property(readonly, nonatomic) NSProgress *progress; // @synthesize progress=_progress;
@property(readonly, copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
- (void)cancelAndWaitUntilAllOperationsAreFinished;	// IMP=0x0010000000023954
- (void)didResetState;	// IMP=0x0010000000023674
- (void)didChangeUpdatingProgress;	// IMP=0x0010000000023494
- (void)didChangeInstallingProgress;	// IMP=0x00100000000232b4
- (void)removeObserver:(id)arg1;	// IMP=0x00100000000230f9
- (void)addObserver:(id)arg1;	// IMP=0x0010000000022fe5
- (void)didFinishUninstalling;	// IMP=0x0010000000022d48
- (void)didFailUninstalling;	// IMP=0x0010000000022aab
- (void)willStartUninstalling;	// IMP=0x001000000002280e
- (void)didFinishUpdating;	// IMP=0x0010000000022571
- (void)didFailUpdating;	// IMP=0x00100000000222d4
- (void)didCancelUpdating;	// IMP=0x0010000000022037
- (void)didResumeUpdating;	// IMP=0x0010000000021d9a
- (void)didPauseUpdating;	// IMP=0x0010000000021afd
- (void)didStartUpdating;	// IMP=0x0010000000021860
- (void)willStartUpdating;	// IMP=0x00100000000215c3
- (void)didFinishInstalling;	// IMP=0x0010000000021326
- (void)didFailInstalling;	// IMP=0x0010000000021089
- (void)didCancelInstalling;	// IMP=0x0010000000020dec
- (void)didResumeInstalling;	// IMP=0x0010000000020b4f
- (void)didPauseInstalling;	// IMP=0x00100000000208b2
- (void)didStartInstalling;	// IMP=0x0010000000020615
- (void)willStartInstalling;	// IMP=0x0010000000020378
@property(readonly, nonatomic) NSString *currentStateName;
@property(readonly, nonatomic) unsigned long long currentState;
- (void)_updateLastModified;	// IMP=0x001000000001fbf9
- (_Bool)_isUnchangedForInterval:(double)arg1;	// IMP=0x001000000001fb96
- (_Bool)_isInTransitoryState;	// IMP=0x001000000001fb7a
- (_Bool)_isStale;	// IMP=0x001000000001fb34
- (id)initWithBundleIdentifier:(id)arg1 currentState:(unsigned long long)arg2;	// IMP=0x001000000001f4a7
- (id)initWithBundleIdentifier:(id)arg1;	// IMP=0x001000000001f3fd

@end

