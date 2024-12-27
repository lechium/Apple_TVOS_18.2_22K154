//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GeoServices/GEOComposedWaypoint.h>

@interface GEOComposedWaypoint (MNExtras)
+ (id)appleParkWaypointFromLatLng;	// IMP=0x00500000000652b8
+ (id)appleParkWaypointFromAddress;	// IMP=0x0050000000065245
+ (id)appleParkWaypointFromMuid;	// IMP=0x00500000000651d2
- (id)humanDescriptionWithAddressAndLatLng;	// IMP=0x0010000000062f41
- (id)humanDescriptionWithLatLng;	// IMP=0x0010000000062e10
- (id)humanDescription;	// IMP=0x0010000000062ced
- (id)_spokenPlaceName;	// IMP=0x0010000000062bdf
- (id)navAnnouncementAddressAndSubstituteType:(int *)arg1;	// IMP=0x0010000000062a5e
- (id)navAnnouncementAddress;	// IMP=0x0010000000062a4a
- (id)navAnnouncementNameAndSubstituteType:(int *)arg1;	// IMP=0x001000000006294c
- (id)navAnnouncementName;	// IMP=0x0010000000062938
- (id)localeIdentifier;	// IMP=0x0010000000062876
- (id)navDisplayNameWithSpecialContacts:(_Bool)arg1 substituteType:(int *)arg2;	// IMP=0x00100000000627c9
- (id)navDisplayNameWithSpecialContacts:(_Bool)arg1;	// IMP=0x001000000006277c
- (id)navDisplayNameAndSubstituteType:(int *)arg1;	// IMP=0x00100000000626fa
- (id)navDisplayAddressAndSubstituteType:(int *)arg1;	// IMP=0x00100000000626ad
- (id)navDisplayName;	// IMP=0x0010000000062694
- (id)navDisplayAddress;	// IMP=0x0010000000062613
- (id)directionsListAddress;	// IMP=0x0010000000062568
- (id)bestSpokenName;	// IMP=0x00100000000623c0
- (id)bestDisplayName:(_Bool)arg1;	// IMP=0x0010000000062244
@end

