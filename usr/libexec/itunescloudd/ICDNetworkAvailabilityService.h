//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSString;

@interface ICDNetworkAvailabilityService : NSObject
{
}

- (void)_isCellularDataRestrictedDidChangeNotification:(id)arg1;	// IMP=0x00200000000440de
- (void)_canShowCloudTracksDidChangeNotification:(id)arg1;	// IMP=0x00100000000440b8
- (void)_canShowCloudDownloadButtonsDidChangeNotification:(id)arg1;	// IMP=0x0010000000044092
- (void)_setupNotifications;	// IMP=0x0010000000043f94
- (MISSING_TYPE *)canShowCloudVideoWithCompletion: /* Error: Ran out of types for this method. */;	// IMP=0x0010000000043f16
- (void)canShowCloudMusicWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000043e98
- (void)canShowCloudDownloadButtonsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000043e1a
- (void)shouldProhibitStoreAppsActionForCurrentNetworkConditionsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000043d9c
- (void)isCellularDataRestrictedForStoreAppsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000043d1e
- (void)shouldProhibitVideosActionForCurrentNetworkConditionsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000043ca0
- (void)isCellularDataRestrictedForVideosWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000043c22
- (void)shouldProhibitMusicActionForCurrentNetworkConditionsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000043ba4
- (void)isCellularDataRestrictedForMusicWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000043b26
- (void)hasProperNetworkConditionsToShowCloudMediaWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000043aa8
- (void)hasProperNetworkConditionsToPlayMediaWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000043a2a
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x0010000000043870
- (void)dealloc;	// IMP=0x001000000004382f
- (id)init;	// IMP=0x00100000000437e3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

