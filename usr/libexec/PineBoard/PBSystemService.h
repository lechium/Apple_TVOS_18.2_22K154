//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSMutableSet, NSString, NSXPCListener, PBAssertionServiceListener, PBBasicServiceListener, PBCaptiveNetworkServiceListener, PBHeadphoneBannerServiceListener, PBHomeUIServiceListener, PBOverlayLayoutServiceListener, PBPictureInPictureServiceListener, PBPreferencesServiceListener, PBRestrictionServiceListener, PBSEARCConfiguratorServiceListener, PBScheduledSleepServiceListener, PBSuggestedUserProfileManagerServiceListener, PBSystemServiceConnection, PBUserProfileApplicationManagerListener, PBUserProfileManagerServiceListener, PBUserProfilePictureServiceListener, PBVolumeControlServiceListener, _TtC9PineBoard30PBTVUserManagerServiceListener;
@protocol OS_dispatch_queue;

@interface PBSystemService : NSObject
{
    NSObject<OS_dispatch_queue> *_acceptSerialQueue;	// 8 = 0x8
    NSXPCListener *_serviceListener;	// 16 = 0x10
    NSMutableSet *_activeConnections;	// 24 = 0x18
    PBSystemServiceConnection *_defaultKioskConnection;	// 32 = 0x20
    PBAssertionServiceListener *_assertionServiceListener;	// 40 = 0x28
    PBCaptiveNetworkServiceListener *_captiveNetworkListener;	// 48 = 0x30
    PBHeadphoneBannerServiceListener *_headphoneBannerServiceListener;	// 56 = 0x38
    MISSING_TYPE *_earcConfiguratiorListener;	// 64 = 0x40
    PBHomeUIServiceListener *_homeUIListener;	// 72 = 0x48
    PBOverlayLayoutServiceListener *_overlayLayourListener;	// 80 = 0x50
    PBPictureInPictureServiceListener *_pictureInPictureListener;	// 88 = 0x58
    PBPreferencesServiceListener *_preferencesServiceListener;	// 96 = 0x60
    PBScheduledSleepServiceListener *_scheduledSleepServiceListener;	// 104 = 0x68
    PBRestrictionServiceListener *_restrictionServiceListener;	// 112 = 0x70
    PBSuggestedUserProfileManagerServiceListener *_suggestedUserProfileManagerListener;	// 120 = 0x78
    _TtC9PineBoard30PBTVUserManagerServiceListener *_tvUserManagerServiceListener;	// 128 = 0x80
    PBUserProfileApplicationManagerListener *_userProfileApplicationListener;	// 136 = 0x88
    PBUserProfileManagerServiceListener *_userProfileManagerListener;	// 144 = 0x90
    PBUserProfilePictureServiceListener *_userProfilePictureListener;	// 152 = 0x98
    PBBasicServiceListener *_videoSubscriberAccountListener;	// 160 = 0xa0
    PBVolumeControlServiceListener *_volumeControlListener;	// 168 = 0xa8
}

+ (id)activeConnections;	// IMP=0x002000000012a7ee
+ (void)notifyDefaultKioskAppPurgeTopShelfContentForApplicationIdentifiers:(id)arg1;	// IMP=0x001000000012a786
+ (void)start;	// IMP=0x001000000012a6ec
+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000012a2df
+ (id)_singleton;	// IMP=0x001000000012a248
- (void).cxx_destruct;	// IMP=0x002000000012b04f
@property(retain, nonatomic) PBVolumeControlServiceListener *volumeControlListener; // @synthesize volumeControlListener=_volumeControlListener;
@property(retain, nonatomic) PBBasicServiceListener *videoSubscriberAccountListener; // @synthesize videoSubscriberAccountListener=_videoSubscriberAccountListener;
@property(retain, nonatomic) PBUserProfilePictureServiceListener *userProfilePictureListener; // @synthesize userProfilePictureListener=_userProfilePictureListener;
@property(retain, nonatomic) PBUserProfileManagerServiceListener *userProfileManagerListener; // @synthesize userProfileManagerListener=_userProfileManagerListener;
@property(retain, nonatomic) PBUserProfileApplicationManagerListener *userProfileApplicationListener; // @synthesize userProfileApplicationListener=_userProfileApplicationListener;
@property(retain, nonatomic) _TtC9PineBoard30PBTVUserManagerServiceListener *tvUserManagerServiceListener; // @synthesize tvUserManagerServiceListener=_tvUserManagerServiceListener;
@property(retain, nonatomic) PBSuggestedUserProfileManagerServiceListener *suggestedUserProfileManagerListener; // @synthesize suggestedUserProfileManagerListener=_suggestedUserProfileManagerListener;
@property(retain, nonatomic) PBRestrictionServiceListener *restrictionServiceListener; // @synthesize restrictionServiceListener=_restrictionServiceListener;
@property(retain, nonatomic) PBScheduledSleepServiceListener *scheduledSleepServiceListener; // @synthesize scheduledSleepServiceListener=_scheduledSleepServiceListener;
@property(retain, nonatomic) PBPreferencesServiceListener *preferencesServiceListener; // @synthesize preferencesServiceListener=_preferencesServiceListener;
@property(retain, nonatomic) PBPictureInPictureServiceListener *pictureInPictureListener; // @synthesize pictureInPictureListener=_pictureInPictureListener;
@property(retain, nonatomic) PBOverlayLayoutServiceListener *overlayLayourListener; // @synthesize overlayLayourListener=_overlayLayourListener;
@property(retain, nonatomic) PBHomeUIServiceListener *homeUIListener; // @synthesize homeUIListener=_homeUIListener;
@property(retain, nonatomic) PBSEARCConfiguratorServiceListener *earcConfiguratiorListener; // @synthesize earcConfiguratiorListener=_earcConfiguratiorListener;
@property(retain, nonatomic) PBHeadphoneBannerServiceListener *headphoneBannerServiceListener; // @synthesize headphoneBannerServiceListener=_headphoneBannerServiceListener;
@property(retain, nonatomic) PBCaptiveNetworkServiceListener *captiveNetworkListener; // @synthesize captiveNetworkListener=_captiveNetworkListener;
@property(retain, nonatomic) PBAssertionServiceListener *assertionServiceListener; // @synthesize assertionServiceListener=_assertionServiceListener;
@property(nonatomic) __weak PBSystemServiceConnection *defaultKioskConnection; // @synthesize defaultKioskConnection=_defaultKioskConnection;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x001000000012ab8b
- (void)_handleInvalidationForConnection:(id)arg1;	// IMP=0x001000000012aac4
- (void)_startServices;	// IMP=0x001000000012a961
- (void)_notifyDefaultKioskAppPurgeTopShelfContentForApplicationIdentifiers:(id)arg1;	// IMP=0x001000000012a882
- (id)_activeConnections;	// IMP=0x001000000012a873
- (void)dealloc;	// IMP=0x001000000012a5e9
- (id)init;	// IMP=0x001000000012a5db
- (id)_init;	// IMP=0x001000000012a390

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

