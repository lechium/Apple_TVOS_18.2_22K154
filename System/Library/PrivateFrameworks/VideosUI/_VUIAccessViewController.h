//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIViewController.h>

@class NSArray, NSDictionary, NSMutableArray, VUIAccessView_tvOS, VUIAppSpinnerView;

__attribute__((visibility("hidden")))
@interface _VUIAccessViewController : UIViewController
{
    VUIAccessView_tvOS *_accessView;	// 8 = 0x8
    VUIAppSpinnerView *_loadingView;	// 16 = 0x10
    NSArray *_channels;	// 24 = 0x18
    NSMutableArray *_bundleIDs;	// 32 = 0x20
    NSDictionary *_options;	// 40 = 0x28
    _Bool _hasCalledCompletion;	// 48 = 0x30
    NSArray *_appInfos;	// 56 = 0x38
    NSArray *_appChannels;	// 64 = 0x40
    NSMutableArray *_channelIds;	// 72 = 0x48
    _Bool _shouldDenyOnCancel;	// 80 = 0x50
    unsigned long long _consentCancelButtonType;	// 88 = 0x58
    CDUnknownBlockType _completionHandler;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x000000000026fd0e
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
- (id)preferredFocusEnvironments;	// IMP=0x000000000026fbde
- (id)cappedTraitCollection;	// IMP=0x000000000026f9b0
- (id)_watchListAppIcon;	// IMP=0x000000000026f963
- (void)_fetchRemoteAppInfo;	// IMP=0x000000000026f002
- (struct CGSize)_iconSize;	// IMP=0x000000000026efe9
- (id)_imageForBundleID:(id)arg1;	// IMP=0x000000000026ef92
- (void)_presentGenericErrorWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000026edfe
- (void)_toggleLoadingScreen;	// IMP=0x000000000026ed24
- (void)_setupAccessViews;	// IMP=0x000000000026e061
- (void)_completeWithStatus:(unsigned long long)arg1;	// IMP=0x000000000026df23
- (void)_handleNackButton:(id)arg1;	// IMP=0x000000000026de17
- (void)_handleMenuGesture:(id)arg1;	// IMP=0x000000000026dc2b
- (void)_handleSeeAllButton:(id)arg1;	// IMP=0x000000000026da58
- (void)_disallow:(id)arg1;	// IMP=0x000000000026d47a
- (void)_allow:(id)arg1;	// IMP=0x000000000026d012
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x000000000026ce26
- (void)viewDidLoad;	// IMP=0x000000000026ca51
- (void)_init;	// IMP=0x000000000026c2d0
- (id)init;	// IMP=0x000000000026c291
- (id)initWithBundleIDs:(id)arg1 channels:(id)arg2 consentCancelButtonType:(unsigned long long)arg3 options:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x000000000026c0fa

@end

