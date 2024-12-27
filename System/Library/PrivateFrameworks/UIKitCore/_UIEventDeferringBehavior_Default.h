//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, _UIEventDeferringManager;
@protocol _UIEventDeferringSystemShellBehaviorDelegate;

__attribute__((visibility("hidden")))
@interface _UIEventDeferringBehavior_Default : NSObject
{
    struct {
        unsigned int systemShellManagesKeyboardFocus:1;
    } _behaviorFlags;	// 8 = 0x8
    _UIEventDeferringManager *_eventDeferringManager;	// 16 = 0x10
    id <_UIEventDeferringSystemShellBehaviorDelegate> _systemShellBehaviorDelegate;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000017b3b16
@property(readonly, nonatomic) __weak _UIEventDeferringManager *eventDeferringManager; // @synthesize eventDeferringManager=_eventDeferringManager;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x00000000017b3aee
- (id)debugDescriptionWithMultilinePrefix:(id)arg1;	// IMP=0x00000000017b3a9e
- (id)descriptionWithMultilinePrefix:(id)arg1;	// IMP=0x00000000017b3a4e
- (id)succinctDescriptionBuilder;	// IMP=0x00000000017b39e6
- (id)succinctDescription;	// IMP=0x00000000017b3996
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
- (_Bool)shouldAllowFallbackWindowForEnvironment:(id)arg1;	// IMP=0x00000000017b3968
- (_Bool)wantsSystemKeyCommandOverlayRules;	// IMP=0x00000000017b3960
- (long long)isRemoteRuleOwningElement:(id)arg1 andContainingWindow:(id)arg2 visibleComparedToLocalTargetWindow:(id)arg3;	// IMP=0x00000000017b3958
- (long long)compareRemoteRuleOwningElement:(id)arg1 toElement:(id)arg2 inEnvironment:(id)arg3;	// IMP=0x00000000017b3948
- (_Bool)shouldSuppressRemoteRuleForOwningElement:(id)arg1 inEnvironment:(id)arg2;	// IMP=0x00000000017b3940
- (_Bool)shouldDisableRemoteViewControllerEventDeferringForKeyboardKeyWindowChanges;	// IMP=0x00000000017b3938
- (_Bool)shouldDisableRemoteViewControllerEventDeferringForKeyboardSettingsSceneChanges;	// IMP=0x00000000017b3930
- (_Bool)shouldConsiderKeyWindowChangesForRemoteViewControllerAutomaticEventDeferring;	// IMP=0x00000000017b3928
- (_Bool)shouldEvaluateEventDeferringForAnyRemoteViewControllerWindowMovement;	// IMP=0x00000000017b3920
- (_Bool)eligibleForLocalCompatibilityRuleRemoval;	// IMP=0x00000000017b390e
- (_Bool)wantsLocalCompatibilityRules;	// IMP=0x00000000017b380c
- (_Bool)wantsLocalIdealRules;	// IMP=0x00000000017b3795
@property(nonatomic) _Bool systemShellManagesKeyboardFocus;
@property(nonatomic) __weak id <_UIEventDeferringSystemShellBehaviorDelegate> systemShellBehaviorDelegate; // @synthesize systemShellBehaviorDelegate=_systemShellBehaviorDelegate;
- (id)initWithEventDeferringManager:(id)arg1;	// IMP=0x00000000017b35ba
- (id)init;	// IMP=0x00000000017b352c

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

