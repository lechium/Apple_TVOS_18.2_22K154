//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSXPCConnection;
@protocol MRUIServerXPCProtocol;

__attribute__((visibility("hidden")))
@interface MRUIController : NSObject
{
    _Bool _hasLockScreenControlsAssertion;	// 8 = 0x8
    _Bool _hasQuickControlsAssertion;	// 9 = 0x9
    _Bool _hasScreenMirroringQuickControlsAssertion;	// 10 = 0xa
    _Bool _hasRouteRecommendationAssertion;	// 11 = 0xb
    _Bool _hasNowPlayingActivityAssertion;	// 12 = 0xc
    _Bool _shouldRestoreState;	// 13 = 0xd
    struct os_unfair_lock_s _lock;	// 16 = 0x10
    NSXPCConnection *_xpcConnection;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000024d88f
@property(nonatomic) _Bool shouldRestoreState; // @synthesize shouldRestoreState=_shouldRestoreState;
@property(nonatomic) _Bool hasNowPlayingActivityAssertion; // @synthesize hasNowPlayingActivityAssertion=_hasNowPlayingActivityAssertion;
@property(nonatomic) _Bool hasRouteRecommendationAssertion; // @synthesize hasRouteRecommendationAssertion=_hasRouteRecommendationAssertion;
@property(nonatomic) _Bool hasScreenMirroringQuickControlsAssertion; // @synthesize hasScreenMirroringQuickControlsAssertion=_hasScreenMirroringQuickControlsAssertion;
@property(nonatomic) _Bool hasQuickControlsAssertion; // @synthesize hasQuickControlsAssertion=_hasQuickControlsAssertion;
@property(nonatomic) _Bool hasLockScreenControlsAssertion; // @synthesize hasLockScreenControlsAssertion=_hasLockScreenControlsAssertion;
@property(readonly, nonatomic) struct os_unfair_lock_s lock; // @synthesize lock=_lock;
- (void)suppressPresentationOverBundleIdentifiers:(id)arg1;	// IMP=0x000000000024d7a4
- (void)setPreferredState:(long long)arg1;	// IMP=0x000000000024d74b
- (void)acquireNowPlayingActivityAssertionForRouteIdentifier:(id)arg1 withDuration:(long long)arg2 preferredState:(long long)arg3;	// IMP=0x000000000024d6a9
- (void)releaseRouteRecommendationAssertion;	// IMP=0x000000000024d64d
- (void)acquireRouteRecommendationAssertionForIdentifiers:(id)arg1;	// IMP=0x000000000024d5c5
- (id)contextForActivityIdentifier:(id)arg1;	// IMP=0x000000000024d494
- (void)releaseScreenMirroringQuickControlsAssertion;	// IMP=0x000000000024d438
- (void)acquireScreenMirroringQuickControlsAssertion;	// IMP=0x000000000024d3d9
- (void)releaseQuickControlsAssertion;	// IMP=0x000000000024d37d
- (id)acquireQuickControlsAssertion;	// IMP=0x000000000024d22e
- (void)releaseLockScreenControlsAssertion;	// IMP=0x000000000024d1d2
- (void)acquireLockScreenControlsAssertion;	// IMP=0x000000000024d173
@property(readonly, nonatomic) id <MRUIServerXPCProtocol> server;
@property(readonly, nonatomic) NSXPCConnection *xpcConnection; // @synthesize xpcConnection=_xpcConnection;
- (_Bool)hasUIAssertions;	// IMP=0x000000000024caed
- (void)dealloc;	// IMP=0x000000000024c82d
- (void)_restoreState;	// IMP=0x000000000024c560
- (id)init;	// IMP=0x000000000024c48f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

