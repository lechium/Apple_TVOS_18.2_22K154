//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSNumber, NSString, PBSScheduledSleep;
@protocol TVSSMenuModeStateContributingDelegate;

@interface TVSSSceneDelegateMenuModeStateContributor : NSObject
{
    _Bool _headboardRequestedVisibility;	// 8 = 0x8
    _Bool _splitViewVisible;	// 9 = 0x9
    _Bool _dictating;	// 10 = 0xa
    id <TVSSMenuModeStateContributingDelegate> contributorDelegate;	// 16 = 0x10
    NSNumber *_interactionRequestReason;	// 24 = 0x18
    long long _playbackControlsState;	// 32 = 0x20
    long long _siriPresentationVisibility;	// 40 = 0x28
    PBSScheduledSleep *_currentScheduledSleep;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00200000000c0140
@property(retain, nonatomic) PBSScheduledSleep *currentScheduledSleep; // @synthesize currentScheduledSleep=_currentScheduledSleep;
@property(nonatomic, getter=isDictating) _Bool dictating; // @synthesize dictating=_dictating;
@property(nonatomic) long long siriPresentationVisibility; // @synthesize siriPresentationVisibility=_siriPresentationVisibility;
@property(nonatomic, getter=isSplitViewVisible) _Bool splitViewVisible; // @synthesize splitViewVisible=_splitViewVisible;
@property(nonatomic) long long playbackControlsState; // @synthesize playbackControlsState=_playbackControlsState;
@property(retain, nonatomic) NSNumber *interactionRequestReason; // @synthesize interactionRequestReason=_interactionRequestReason;
@property(nonatomic) _Bool headboardRequestedVisibility; // @synthesize headboardRequestedVisibility=_headboardRequestedVisibility;
@property(nonatomic) __weak id <TVSSMenuModeStateContributingDelegate> contributorDelegate; // @synthesize contributorDelegate;
- (void)_notifyStateContributorHasUpdate;	// IMP=0x00100000000bffa0
- (void)updateMenuModeState:(id)arg1;	// IMP=0x00100000000bfde0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

