//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MPAVEndpointRoute, MPVolumeController, NSString, TVNPEndpointRouteConnection;
@protocol NSCopying;

@interface TVNPEndpointRoutingDestination
{
    MPAVEndpointRoute *_endpointRoute;	// 120 = 0x78
    TVNPEndpointRouteConnection *_routeConnection;	// 128 = 0x80
    MPVolumeController *_volumeController;	// 136 = 0x88
    id <NSCopying> _routeConnectionObserverToken;	// 144 = 0x90
    unsigned long long _connectionState;	// 152 = 0x98
}

+ (unsigned long long)_playbackStateForMPCPlaybackState:(long long)arg1;	// IMP=0x0010000000006b40
+ (id)keyPathsForValuesAffectingPaired;	// IMP=0x0010000000005b20
+ (id)keyPathsForValuesAffectingDisconnected;	// IMP=0x0010000000005ae0
+ (id)keyPathsForValuesAffectingConnected;	// IMP=0x0010000000005aa0
- (void).cxx_destruct;	// IMP=0x0000000000006ca0
@property(nonatomic) unsigned long long connectionState; // @synthesize connectionState=_connectionState;
@property(readonly, nonatomic) id <NSCopying> routeConnectionObserverToken; // @synthesize routeConnectionObserverToken=_routeConnectionObserverToken;
@property(readonly, nonatomic) MPVolumeController *volumeController; // @synthesize volumeController=_volumeController;
@property(readonly, nonatomic) TVNPEndpointRouteConnection *routeConnection; // @synthesize routeConnection=_routeConnection;
@property(readonly, nonatomic) MPAVEndpointRoute *endpointRoute; // @synthesize endpointRoute=_endpointRoute;
- (void)_metadataDidChange:(id)arg1 forKeys:(id)arg2;	// IMP=0x0000000000006680
- (void)_updateVolume;	// IMP=0x00000000000063e0
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x00000000000062b0
- (void)volumeController:(id)arg1 volumeValueDidChange:(float)arg2;	// IMP=0x00000000000061a0
- (void)volumeController:(id)arg1 volumeControlAvailableDidChange:(_Bool)arg2;	// IMP=0x00000000000060a0
- (void)connectAndPair;	// IMP=0x0000000000006060
- (void)togglePlayPause;	// IMP=0x0000000000006020
- (void)refreshPropertiesWithRoute:(id)arg1;	// IMP=0x0000000000005d10
- (void)setMuted:(_Bool)arg1;	// IMP=0x0000000000005c60
- (void)setVolumeLevel:(id)arg1;	// IMP=0x0000000000005b60
- (id)deviceImage;	// IMP=0x00000000000059d0
- (_Bool)isDisconnected;	// IMP=0x0000000000005990
- (_Bool)isConnecting;	// IMP=0x0000000000005950
- (_Bool)isConnected;	// IMP=0x0000000000005910
- (_Bool)isPaired;	// IMP=0x00000000000058d0
@property(nonatomic) _Bool isCurrentDestination; // @dynamic isCurrentDestination;
@property(readonly, copy) NSString *description;
- (void)dealloc;	// IMP=0x0000000000005730
- (id)initWithEndpointRoute:(id)arg1;	// IMP=0x0000000000005030

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

