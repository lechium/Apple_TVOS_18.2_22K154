//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSDictionary, NSMutableDictionary, NSUUID;

__attribute__((visibility("hidden")))
@interface MNServerSessionStateInfo : NSObject
{
    NSData *_sessionState;	// 8 = 0x8
    NSUUID *_uniqueRouteID;	// 16 = 0x10
    NSData *_directionsResponseID;	// 24 = 0x18
    NSData *_etauResponseID;	// 32 = 0x20
    NSMutableDictionary *_displayedTrafficBanners;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00100000000125a5
- (void).cxx_destruct;	// IMP=0x0000000000012a68
@property(readonly, nonatomic) NSData *etauResponseID; // @synthesize etauResponseID=_etauResponseID;
@property(readonly, nonatomic) NSData *directionsResponseID; // @synthesize directionsResponseID=_directionsResponseID;
@property(readonly, nonatomic) NSUUID *uniqueRouteID; // @synthesize uniqueRouteID=_uniqueRouteID;
@property(readonly, nonatomic) NSData *sessionState; // @synthesize sessionState=_sessionState;
- (id)description;	// IMP=0x00000000000127cc
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000012723
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000125ad
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000124dc
- (void)updateWithSessionState:(id)arg1;	// IMP=0x0000000000012326
- (void)addDisplayedBannerID:(id)arg1 withEventInfo:(id)arg2;	// IMP=0x000000000001224a
- (void)updateWithETAUResponse:(id)arg1;	// IMP=0x0000000000011f73
- (void)updateWithRoute:(id)arg1;	// IMP=0x0000000000011c0f
@property(readonly, nonatomic) NSDictionary *displayedTrafficBanners;

@end

