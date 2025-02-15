//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSMutableSet, NSString, NSTimer;
@protocol BNConsidering, BNPosting, BSInvalidatable, TVSSBannerPresenterDelegate, TVSSMenuModeStateContributingDelegate;

@interface TVSSBannerPresenter : NSObject
{
    id <BNConsidering> _authority;	// 8 = 0x8
    id <BNPosting> _poster;	// 16 = 0x10
    id <TVSSBannerPresenterDelegate> _delegate;	// 24 = 0x18
    id <TVSSMenuModeStateContributingDelegate> contributorDelegate;	// 32 = 0x20
    NSMutableArray *_presentables;	// 40 = 0x28
    NSMutableSet *_presentingPresentables;	// 48 = 0x30
    NSMutableSet *_dismissingPresentables;	// 56 = 0x38
    NSMutableArray *_transitioningStack;	// 64 = 0x40
    NSTimer *_timeoutTimer;	// 72 = 0x48
    id <BSInvalidatable> _stateCaptureHandle;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x002000000013b090
@property(retain, nonatomic) id <BSInvalidatable> stateCaptureHandle; // @synthesize stateCaptureHandle=_stateCaptureHandle;
@property(retain, nonatomic) NSTimer *timeoutTimer; // @synthesize timeoutTimer=_timeoutTimer;
@property(retain, nonatomic) NSMutableArray *transitioningStack; // @synthesize transitioningStack=_transitioningStack;
@property(retain, nonatomic) NSMutableSet *dismissingPresentables; // @synthesize dismissingPresentables=_dismissingPresentables;
@property(retain, nonatomic) NSMutableSet *presentingPresentables; // @synthesize presentingPresentables=_presentingPresentables;
@property(retain, nonatomic) NSMutableArray *presentables; // @synthesize presentables=_presentables;
@property(nonatomic) __weak id <TVSSMenuModeStateContributingDelegate> contributorDelegate; // @synthesize contributorDelegate;
@property(nonatomic) __weak id <TVSSBannerPresenterDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <BNPosting> poster; // @synthesize poster=_poster;
@property(readonly, nonatomic) id <BNConsidering> authority; // @synthesize authority=_authority;
- (void)updateMenuModeState:(id)arg1;	// IMP=0x0010000000139510
- (void)menuModeBannerContextDidCompleteTransition:(id)arg1;	// IMP=0x00100000001385f0
- (id)dismissPresentablesWithIdentification:(id)arg1 reason:(id)arg2 animated:(_Bool)arg3 userInfo:(id)arg4;	// IMP=0x00100000001383a0
- (id)dismissPresentablesWithIdentification:(id)arg1 reason:(id)arg2 userInfo:(id)arg3;	// IMP=0x0010000000137eb0
- (void)presentPresentable:(id)arg1 withOptions:(unsigned long long)arg2 userInfo:(id)arg3;	// IMP=0x0010000000137910
- (id)initWithAuthority:(id)arg1;	// IMP=0x0010000000137840
@property(readonly, nonatomic) NSArray *fullyPresentedTopPresentables;
@property(readonly, copy, nonatomic) NSArray *topPresentables;
@property(readonly, copy, nonatomic) NSArray *presentedPresentables;
@property(readonly, copy, nonatomic) NSArray *allPresentables;
- (void)cancelTimeoutTimer;	// IMP=0x00100000001372c0
- (void)dealloc;	// IMP=0x0010000000137260
- (id)init;	// IMP=0x0010000000136d60

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

