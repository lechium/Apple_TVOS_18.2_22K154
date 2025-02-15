//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class VUIContentRating, VUIExtrasInfo, VUIMediaEntity, VUIVideosPlayable;
@protocol TVPMediaItem, VUIControllerPresenter;

__attribute__((visibility("hidden")))
@interface VUIPreflightManager : NSObject
{
    _Bool _contentAllowsCellularDownload;	// 8 = 0x8
    _Bool _isSubscriptionPurchaseWithoutPlayback;	// 9 = 0x9
    VUIVideosPlayable *_videosPlayable;	// 16 = 0x10
    NSObject<TVPMediaItem> *_mediaItem;	// 24 = 0x18
    VUIMediaEntity *_mediaEntity;	// 32 = 0x20
    VUIExtrasInfo *_extrasInfo;	// 40 = 0x28
    VUIContentRating *_contentRating;	// 48 = 0x30
    unsigned long long _restrictionsCheckType;	// 56 = 0x38
    NSObject<VUIControllerPresenter> *_presentingController;	// 64 = 0x40
    CDUnknownBlockType _savedRestrictionsCompletion;	// 72 = 0x48
    long long _restrictionsState;	// 80 = 0x50
    id _restrictionsValidationToken;	// 88 = 0x58
}

+ (id)defaultPreflightManager;	// IMP=0x006000000011b99b
- (void).cxx_destruct;	// IMP=0x000000000011f621
@property(retain, nonatomic) id restrictionsValidationToken; // @synthesize restrictionsValidationToken=_restrictionsValidationToken;
@property(nonatomic) long long restrictionsState; // @synthesize restrictionsState=_restrictionsState;
@property(copy, nonatomic) CDUnknownBlockType savedRestrictionsCompletion; // @synthesize savedRestrictionsCompletion=_savedRestrictionsCompletion;
@property(nonatomic) _Bool isSubscriptionPurchaseWithoutPlayback; // @synthesize isSubscriptionPurchaseWithoutPlayback=_isSubscriptionPurchaseWithoutPlayback;
@property(retain, nonatomic) NSObject<VUIControllerPresenter> *presentingController; // @synthesize presentingController=_presentingController;
@property(nonatomic) unsigned long long restrictionsCheckType; // @synthesize restrictionsCheckType=_restrictionsCheckType;
@property(nonatomic) _Bool contentAllowsCellularDownload; // @synthesize contentAllowsCellularDownload=_contentAllowsCellularDownload;
@property(retain, nonatomic) VUIContentRating *contentRating; // @synthesize contentRating=_contentRating;
@property(retain, nonatomic) VUIExtrasInfo *extrasInfo; // @synthesize extrasInfo=_extrasInfo;
@property(retain, nonatomic) VUIMediaEntity *mediaEntity; // @synthesize mediaEntity=_mediaEntity;
@property(retain, nonatomic) NSObject<TVPMediaItem> *mediaItem; // @synthesize mediaItem=_mediaItem;
@property(retain, nonatomic) VUIVideosPlayable *videosPlayable; // @synthesize videosPlayable=_videosPlayable;
- (void)_showRentalPlaybackStartingWarningWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000011efbd
- (_Bool)_shouldWarnStartingRentalPlayback;	// IMP=0x000000000011ec9d
- (id)_mediaTitle;	// IMP=0x000000000011eb86
- (_Bool)_isRental;	// IMP=0x000000000011ea7e
- (void)_preflightRentalWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000011e97a
- (void)_showAgeConfirmationWithPresentingViewController:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000011e635
- (_Bool)_shouldShowAgeConfirmationAlert;	// IMP=0x000000000011e548
- (void)_setLastAgeConfirmationPrompted:(id)arg1;	// IMP=0x000000000011e4d4
- (id)_lastAgeConfirmationPrompted;	// IMP=0x000000000011e476
- (void)_setLastConfirmedAge:(long long)arg1;	// IMP=0x000000000011e41c
- (long long)_lastConfirmedAge;	// IMP=0x000000000011e3ca
- (void)_performAgeGateVerificationWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000011e0dd
- (long long)_requiredAgeForPlayback;	// IMP=0x000000000011dfcb
- (void)_showMediaNotAllowedBySettingsAlert;	// IMP=0x000000000011ddff
- (void)_validateRestrictionsForPurchase:(CDUnknownBlockType)arg1;	// IMP=0x000000000011da35
- (void)_validateRestrictionsForPlayback:(CDUnknownBlockType)arg1;	// IMP=0x000000000011d095
- (id)_pbrestrictedValueToString:(unsigned long long)arg1;	// IMP=0x000000000011d076
- (void)_performRestrictionsCheckWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000011cf36
- (id)_ratingValue;	// IMP=0x000000000011ccb8
- (_Bool)_isSportingEvent;	// IMP=0x000000000011cb60
- (_Bool)_isTrailer;	// IMP=0x000000000011ca28
- (id)_ratingDomain;	// IMP=0x000000000011c74e
- (void)_logRatingsInfo:(id)arg1 maxAllowedRank:(id)arg2 ratingValue:(id)arg3;	// IMP=0x000000000011c47d
- (void)_preflightWithOptions:(long long)arg1 userInfo:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000011bda4
- (void)preflightWithOptions:(long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000011bbe7
- (id)init;	// IMP=0x000000000011b9f0

@end

