//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UIViewController;
@protocol TVSSBannerPresentable, TVSSMenuModeBannerContextTransitionObserver;

@interface TVSSMenuModeBannerContext : NSObject
{
    _Bool _shouldAnimateTransition;	// 8 = 0x8
    _Bool _supportsInteractiveMode;	// 9 = 0x9
    long long _bannerPresentationState;	// 16 = 0x10
    UIViewController<TVSSBannerPresentable> *_transitioningBannerPresentable;	// 24 = 0x18
    id <TVSSMenuModeBannerContextTransitionObserver> _transitionObserver;	// 32 = 0x20
    NSString *_dismissalReason;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0020000000109dc0
@property(readonly, nonatomic) NSString *dismissalReason; // @synthesize dismissalReason=_dismissalReason;
@property(readonly, nonatomic) __weak id <TVSSMenuModeBannerContextTransitionObserver> transitionObserver; // @synthesize transitionObserver=_transitionObserver;
@property(readonly, nonatomic) UIViewController<TVSSBannerPresentable> *transitioningBannerPresentable; // @synthesize transitioningBannerPresentable=_transitioningBannerPresentable;
@property(readonly, nonatomic) _Bool supportsInteractiveMode; // @synthesize supportsInteractiveMode=_supportsInteractiveMode;
@property(readonly, nonatomic) _Bool shouldAnimateTransition; // @synthesize shouldAnimateTransition=_shouldAnimateTransition;
@property(readonly, nonatomic) long long bannerPresentationState; // @synthesize bannerPresentationState=_bannerPresentationState;
- (unsigned long long)hash;	// IMP=0x0010000000109910
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000109240
- (id)debugDescription;	// IMP=0x0010000000109160
- (id)description;	// IMP=0x00100000001090c0
- (id)initWithBannerPresentationState:(long long)arg1 transitioningBannerPresentable:(id)arg2 shouldAnimateTransition:(_Bool)arg3 supportsInteractiveMode:(_Bool)arg4 transitionObserver:(id)arg5 dismissalReason:(id)arg6;	// IMP=0x0010000000108c70
- (id)initWithBannerPresentationState:(long long)arg1;	// IMP=0x0010000000108be0
- (id)init;	// IMP=0x0010000000108b80

@end

