//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString, TVNPDataImageLoader, TVNPEndpointRouteConnection, TVNPMetadataPlayer;
@protocol NSCopying;

@interface TVNPMediaRemoteObserver : NSObject
{
    _Bool _isObserving;	// 8 = 0x8
    _Bool _airtunesIsPlaying;	// 9 = 0x9
    NSDictionary *_airtunesTimeData;	// 16 = 0x10
    NSString *_lastTrackIdentifier;	// 24 = 0x18
    TVNPDataImageLoader *_imageLoader;	// 32 = 0x20
    TVNPEndpointRouteConnection *_routeConnection;	// 40 = 0x28
    id <NSCopying> _routeConnectionObserverToken;	// 48 = 0x30
    TVNPMetadataPlayer *_player;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x002000000003c390
@property(retain, nonatomic) TVNPMetadataPlayer *player; // @synthesize player=_player;
- (void)_updateTimeStampFromAirtunesd:(id)arg1;	// IMP=0x001000000003c290
- (void)_updateMediaItemMetadata:(id)arg1 routeConnection:(id)arg2;	// IMP=0x001000000003b9b0
- (void)_deregisterAsObserver;	// IMP=0x001000000003b930
- (void)_registerAsObserver;	// IMP=0x001000000003b8b0
- (void)_nowPlayingInfoDidChange:(id)arg1;	// IMP=0x001000000003b1c0
- (void)metadataPlayerSentCommand:(unsigned int)arg1 withOptions:(id)arg2;	// IMP=0x001000000003b160
- (void)reset;	// IMP=0x001000000003b070
- (void)prepareForPlaybackWithEndpoint:(id)arg1;	// IMP=0x001000000003abe0
- (void)prepareForPlayback;	// IMP=0x001000000003ab80
- (id)init;	// IMP=0x001000000003aad0

@end

