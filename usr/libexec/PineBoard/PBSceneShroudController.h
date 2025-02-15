//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BSCompoundAssertion, PBSystemGestureHandle, TVSObserverSet;
@protocol OS_dispatch_source;

@interface PBSceneShroudController : NSObject
{
    TVSObserverSet *_agents;	// 8 = 0x8
    BSCompoundAssertion *_sceneShroudAssertion;	// 16 = 0x10
    BSCompoundAssertion *_shroudGestureAssertion;	// 24 = 0x18
    NSObject<OS_dispatch_source> *_debounceSource;	// 32 = 0x20
    PBSystemGestureHandle *_shroudGesture;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x002000000013e352
@property(readonly, nonatomic) PBSystemGestureHandle *shroudGesture; // @synthesize shroudGesture=_shroudGesture;
@property(readonly, nonatomic) NSObject<OS_dispatch_source> *debounceSource; // @synthesize debounceSource=_debounceSource;
- (id);	// IMP=0x001000000013e334
@property(readonly, nonatomic) BSCompoundAssertion *sceneShroudAssertion; // @synthesize sceneShroudAssertion=_sceneShroudAssertion;
@property(readonly, nonatomic) TVSObserverSet *agents; // @synthesize agents=_agents;
- (CDUnknownBlockType)_createContextProvider;	// IMP=0x001000000013e086
- (void)_mainQueue_updateShroudGestureWithState:(id)arg1;	// IMP=0x001000000013dea0
- (void)_mainQueue_updateAgent:(id)arg1 withUserInfo:(id)arg2 usingContext:(id)arg3 animated:(_Bool)arg4;	// IMP=0x001000000013dcdf
- (void)_mainQueue_handleStateChange;	// IMP=0x001000000013da09
- (id)agentDidPresentShroud:(id)arg1;	// IMP=0x001000000013d843
- (id)registerAgent:(id)arg1 withClientProcessBundleIdentifier:(id)arg2;	// IMP=0x001000000013d5b4
- (id)shroudApplicationsUsingPredicate:(CDUnknownBlockType)arg1 style:(long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000013d3fb
- (id)shroudApplicationsWithBundleIDs:(id)arg1 style:(long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000013d1c2
- (void)dealloc;	// IMP=0x001000000013d133
- (id)init;	// IMP=0x001000000013cd7a

// Remaining properties
@property(readonly, nonatomic) BSCompoundAssertion *shroudGestureAssertion; // @synthesize shroudGestureAssertion=_shroudGestureAssertion;

@end

