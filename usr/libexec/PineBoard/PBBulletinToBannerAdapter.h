//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BNBannerSource, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue, PBBulletinToBannerAdapterDelegate;

@interface PBBulletinToBannerAdapter : NSObject
{
    id <PBBulletinToBannerAdapterDelegate> _delegate;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_callbackQueue;	// 16 = 0x10
    BNBannerSource *_bannerSource;	// 24 = 0x18
    NSMutableDictionary *_bulletinsByIdentifier;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_workQueue;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0020000000126307
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly, nonatomic) NSMutableDictionary *bulletinsByIdentifier; // @synthesize bulletinsByIdentifier=_bulletinsByIdentifier;
@property(readonly, nonatomic) BNBannerSource *bannerSource; // @synthesize bannerSource=_bannerSource;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue; // @synthesize callbackQueue=_callbackQueue;
@property(nonatomic) __weak id <PBBulletinToBannerAdapterDelegate> delegate; // @synthesize delegate=_delegate;
- (void)presentableWillNotAppearAsBanner:(id)arg1 withReason:(id)arg2;	// IMP=0x0010000000125df5
- (void)presentableDidDisappearAsBanner:(id)arg1 withReason:(id)arg2;	// IMP=0x0010000000125a17
- (void)presentableDidAppearAsBanner:(id)arg1;	// IMP=0x00100000001256b8
- (void)handleForwardedBulletinObservingAction:(id)arg1;	// IMP=0x00100000001231c5
- (void)forwardBulletin:(id)arg1 responseHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000122b1c
- (void)forwardBulletin:(id)arg1;	// IMP=0x0010000000122b07
- (_Bool)isForwardableBulletin:(id)arg1;	// IMP=0x0010000000122ab6
- (void)invalidate;	// IMP=0x0010000000122903
- (void)dismissBulletin:(id)arg1;	// IMP=0x001000000012268e
- (void)updateBannerWithNewBulletin:(id)arg1 replacingBulletin:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000001222a8
- (void)presentBannerFromBulletin:(id)arg1;	// IMP=0x0010000000121efc
- (_Bool)isPresentableBulletin:(id)arg1;	// IMP=0x0010000000121eab
- (void)dealloc;	// IMP=0x0010000000121e1a
- (id)init;	// IMP=0x0010000000121cdf

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

