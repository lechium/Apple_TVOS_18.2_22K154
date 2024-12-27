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

+ (unsigned long long)_playbackStateForMPCPlaybackState:(long long)arg1;	// IMP=0x002000000000df00
+ (id)keyPathsForValuesAffectingPaired;	// IMP=0x001000000000cee0
+ (id)keyPathsForValuesAffectingDisconnected;	// IMP=0x001000000000cea0
+ (id)keyPathsForValuesAffectingConnected;	// IMP=0x001000000000ce60
- (void).cxx_destruct;	// IMP=0x002000000000e060
@property(nonatomic) unsigned long long connectionState; // @synthesize connectionState=_connectionState;
@property(readonly, nonatomic) id <NSCopying> routeConnectionObserverToken; // @synthesize routeConnectionObserverToken=_routeConnectionObserverToken;
@property(readonly, nonatomic) MPVolumeController *volumeController; // @synthesize volumeController=_volumeController;
@property(readonly, nonatomic) TVNPEndpointRouteConnection *routeConnection; // @synthesize routeConnection=_routeConnection;
@property(readonly, nonatomic) MPAVEndpointRoute *endpointRoute; // @synthesize endpointRoute=_endpointRoute;
- (void)_metadataDidChange:(id)arg1 forKeys:(id)arg2;	// IMP=0x001000000000da40
- (void)_updateVolume;	// IMP=0x001000000000d7a0
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x001000000000d670
- (void)volumeController:(id)arg1 volumeValueDidChange:(float)arg2;	// IMP=0x001000000000d560
- (void)volumeController:(id)arg1 volumeControlAvailableDidChange:(_Bool)arg2;	// IMP=0x001000000000d460
- (void)connectAndPair;	// IMP=0x001000000000d420
- (void)togglePlayPause;	// IMP=0x001000000000d3e0
- (void)refreshPropertiesWithRoute:(id)arg1;	// IMP=0x001000000000d0d0
- (void)setMuted:(_Bool)arg1;	// IMP=0x001000000000d020
- (void)setVolumeLevel:(id)arg1;	// IMP=0x001000000000cf20
- (id)deviceImage;	// IMP=0x001000000000cd90
- (_Bool)isDisconnected;	// IMP=0x001000000000cd50
- (_Bool)isConnecting;	// IMP=0x001000000000cd10
- (_Bool)isConnected;	// IMP=0x001000000000ccd0
- (_Bool)isPaired;	// IMP=0x001000000000cc90
@property(nonatomic) _Bool isCurrentDestination; // @dynamic isCurrentDestination;
@property(readonly, copy) NSString *description;
- (void)dealloc;	// IMP=0x001000000000caf0
- (id)initWithEndpointRoute:(id)arg1;	// IMP=0x001000000000c440

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

