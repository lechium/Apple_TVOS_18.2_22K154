//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CSDRouteManager, NSArray, NSString, TURoute;

@interface CSDAudioRouteCollection : NSObject
{
    NSString *_category;	// 8 = 0x8
    NSString *_mode;	// 16 = 0x10
    NSArray *_routes;	// 24 = 0x18
    CSDRouteManager *_routeManager;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0020000000149dbe
@property(readonly, nonatomic) __weak CSDRouteManager *routeManager; // @synthesize routeManager=_routeManager;
@property(copy, nonatomic) NSArray *routes; // @synthesize routes=_routes;
@property(retain, nonatomic) NSString *mode; // @synthesize mode=_mode;
- (id);	// IMP=0x0010000000149d74
@property(retain, nonatomic) NSString *category; // @synthesize category=_category;
- (_Bool)_setRoutesFromRouteDictionaries:(id)arg1;	// IMP=0x0010000000149a30
- (_Bool)updatePickableRoutes;	// IMP=0x0010000000149a28
- (_Bool)_anyRoutePassesTest:(CDUnknownBlockType)arg1;	// IMP=0x0010000000149950
- (id)_routePassingTest:(CDUnknownBlockType)arg1;	// IMP=0x00100000001497fe
- (void)enumerateRoutesInvokingBlock:(CDUnknownBlockType)arg1 forRoutesPassingTest:(CDUnknownBlockType)arg2;	// IMP=0x001000000014968a
@property(readonly, nonatomic) _Bool hasInEarRouteInTipiWithAndSmartRoutedToCompanionWatch;
@property(readonly, nonatomic) _Bool hasInEarRouteInTipiWithCompanionWatch;
@property(readonly, nonatomic, getter=isInEarAudioRouteAvailable) _Bool inEarAudioRouteAvailable;
@property(readonly, nonatomic) _Bool isAnyPreferredRouteAvailableAndActive;
- (_Bool)isAnyRouteAvailableWithUniqueIdentifier:(id)arg1;	// IMP=0x001000000014943b
- (_Bool)isAnyRouteAvailableWithBluetoothEndpointType:(long long)arg1;	// IMP=0x00100000001493c2
@property(readonly, nonatomic, getter=isBluetoothRouteAvailable) _Bool bluetoothRouteAvailable;
@property(readonly, nonatomic, getter=isCarAudioRouteAvailable) _Bool carAudioRouteAvailable;
@property(readonly, nonatomic, getter=isAirTunesRouteAvailable) _Bool airTunesRouteAvailable;
@property(readonly, nonatomic, getter=isWirelessHeadsetRouteAvailable) _Bool wirelessHeadsetAvailable;
@property(readonly, nonatomic, getter=isSpeakerRouteAvailable) _Bool speakerRouteAvailable;
@property(readonly, nonatomic, getter=isReceiverRouteAvailable) _Bool receiverRouteAvailable;
@property(readonly, nonatomic) TURoute *preferredAndActiveRoute;
@property(readonly, nonatomic) TURoute *preferredRoute;
- (id)description;	// IMP=0x0010000000149179
- (id)initWithCategory:(id)arg1 mode:(id)arg2;	// IMP=0x0010000000149164
- (id)initWithCategory:(id)arg1 mode:(id)arg2 routeManager:(id)arg3;	// IMP=0x00100000001490a1

@end

