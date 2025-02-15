//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ADOpportuneSpeakingStateManager, AFWatchdogTimer, NSMutableArray, NSMutableDictionary, NSString, NSXPCConnection;
@protocol AFOpportuneSpeakable, OS_dispatch_group, OS_dispatch_queue;

@interface ADOpportuneSpeakingModule : NSObject
{
    AFWatchdogTimer *_timer;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    NSObject<OS_dispatch_group> *_modelLoadingGroup;	// 24 = 0x18
    id <AFOpportuneSpeakable> _currentSpeakable;	// 32 = 0x20
    NSMutableArray *_queuedSpeakables;	// 40 = 0x28
    NSMutableDictionary *_handlersBySpeakableID;	// 48 = 0x30
    NSString *_executionModelIdentifier;	// 56 = 0x38
    long long _executionModelType;	// 64 = 0x40
    NSMutableDictionary *_modelMap;	// 72 = 0x48
    NSMutableDictionary *_typeMap;	// 80 = 0x50
    _Bool _modelLoading;	// 88 = 0x58
    NSXPCConnection *_connection;	// 96 = 0x60
    ADOpportuneSpeakingStateManager *_stateManager;	// 104 = 0x68
}

+ (id)sharedModule;	// IMP=0x002000000029a66b
- (void).cxx_destruct;	// IMP=0x002000000029998f
@property(readonly, nonatomic) ADOpportuneSpeakingStateManager *stateManager; // @synthesize stateManager=_stateManager;
- (void)modelWithIdentifier:(id)arg1 didUpdateScore:(float)arg2 forSpeakable:(id)arg3;	// IMP=0x00100000002997a8
- (id)_remoteOSMService;	// IMP=0x0010000000299751
- (id)_connectionToOSMService;	// IMP=0x00100000002995b3
- (void)_cleanUpAllModels;	// IMP=0x00100000002993f6
- (void)_resetConnectionToOSMService;	// IMP=0x00100000002990e6
- (void)_loadModelWithType:(long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000298e73
- (void)_withAllModelsExecute:(CDUnknownBlockType)arg1;	// IMP=0x0010000000298aec
- (void)recordSpokenRequestCompletedForSpeakable:(id)arg1;	// IMP=0x0010000000298a0b
- (void)recordSpokenRequestCancelledForSpeakable:(id)arg1;	// IMP=0x001000000029892a
- (void)requestsToSpeak:(id)arg1 withHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000298784
- (void)_processEnqueuedSpeakables;	// IMP=0x0010000000298549
- (void)_recordImmediateNotificationInteractionAfterRecommendation:(long long)arg1 forSpeakable:(id)arg2;	// IMP=0x00100000002983f0
- (void)_finishRunningCurrentSpeakableWithResult:(long long)arg1 error:(id)arg2;	// IMP=0x0010000000298278
- (id)_init;	// IMP=0x001000000029812d

@end

