//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSTimer, TVSStateMachine;

@interface PBAXFeatureManager : NSObject
{
    NSArray *_pendingUpdates;	// 8 = 0x8
    CDUnknownBlockType _updateCompletion;	// 16 = 0x10
    NSTimer *_updateTimer;	// 24 = 0x18
    TVSStateMachine *_stateMachine;	// 32 = 0x20
}

+ (id)sharedInstance;	// IMP=0x00400000001e62b8
- (void).cxx_destruct;	// IMP=0x00200000001e9dbb
@property(retain, nonatomic) TVSStateMachine *stateMachine; // @synthesize stateMachine=_stateMachine;
@property(copy, nonatomic) NSTimer *updateTimer; // @synthesize updateTimer=_updateTimer;
@property(copy, nonatomic) CDUnknownBlockType updateCompletion; // @synthesize updateCompletion=_updateCompletion;
@property(copy, nonatomic) NSArray *pendingUpdates; // @synthesize pendingUpdates=_pendingUpdates;
- (id)_defaultTripleClickOptions;	// IMP=0x00100000001e9d44
- (void)_cancelPendingUpdates;	// IMP=0x00100000001e9cbe
- (void)_servicePendingUpdates;	// IMP=0x00100000001e99cb
- (void)_applyUpdatesWithOptions:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000001e991b
- (id)_updatesForConfigurationOptions:(id)arg1;	// IMP=0x00100000001e88b3
- (id)_currentConfigOptions;	// IMP=0x00100000001e8292
- (id)_handleSetDefaultConfiguration:(id)arg1;	// IMP=0x00100000001e7fcc
- (id)_handleSetSingleAppConfiguration:(id)arg1;	// IMP=0x00100000001e7cd2
- (void)_initialzeStateMachine;	// IMP=0x00100000001e7859
- (void)updateWithConfiguration:(id)arg1;	// IMP=0x00100000001e7777
- (_Bool)handleAXShortcutEvent;	// IMP=0x00100000001e638b
- (id)init;	// IMP=0x00100000001e633f

@end

