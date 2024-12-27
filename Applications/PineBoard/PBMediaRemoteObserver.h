//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MRPlayerPath, NSNumber, NSString, PBApplicationInfo, PBBulletinService, PBDistributedAssertion, PBMRMetadataUpdateTransaction, PBMRPictureInPicturePlayerTransaction, PBMRSupportedCommandsTransaction, PBPlaybackRateList, PBSBulletin;
@protocol PBMediaRemoteObserverDelegate;

@interface PBMediaRemoteObserver : NSObject
{
    PBBulletinService *_bulletinService;	// 8 = 0x8
    NSNumber *_lastNotificationPID;	// 16 = 0x10
    struct atomic_flag _metadataUpdateRunning;	// 24 = 0x18
    _Bool _playing;	// 25 = 0x19
    _Bool _playingMusic;	// 26 = 0x1a
    _Bool _isMusicAppPlaying;	// 27 = 0x1b
    _Bool _isPodcastsAppPlaying;	// 28 = 0x1c
    int _nowPlayingProcessPID;	// 32 = 0x20
    NSNumber *_playbackRate;	// 40 = 0x28
    NSNumber *_defaultPlaybackRate;	// 48 = 0x30
    PBPlaybackRateList *_supportedPlaybackRates;	// 56 = 0x38
    PBApplicationInfo *_nowPlayingApplicationInfo;	// 64 = 0x40
    MRPlayerPath *_nowPlayingPlayerPath;	// 72 = 0x48
    MRPlayerPath *_pictureInPicturePlayerPath;	// 80 = 0x50
    PBSBulletin *_currentBulletin;	// 88 = 0x58
    id <PBMediaRemoteObserverDelegate> _delegate;	// 96 = 0x60
    NSNumber *_trackIdentifier;	// 104 = 0x68
    NSString *_mediaType;	// 112 = 0x70
    PBMRMetadataUpdateTransaction *_metadataUpdateTransaction;	// 120 = 0x78
    PBMRPictureInPicturePlayerTransaction *_pictureInPicturePlayerTransaction;	// 128 = 0x80
    PBMRSupportedCommandsTransaction *_supportedCommandsTransaction;	// 136 = 0x88
    PBDistributedAssertion *_suppressNowPlayingBulletinAssertion;	// 144 = 0x90
}

+ (id)_allAudioMediaTypes;	// IMP=0x00200000001e60cf
+ (id)_bulletinInfoForNowPlayingInfo:(id)arg1;	// IMP=0x00100000001e5d83
+ (id)sharedInstance;	// IMP=0x00100000001e2ced
+ (id)dependencyDescription;	// IMP=0x00100000001e2c5e
- (void).cxx_destruct;	// IMP=0x00200000001e61ec
@property(readonly, nonatomic) PBDistributedAssertion *suppressNowPlayingBulletinAssertion; // @synthesize suppressNowPlayingBulletinAssertion=_suppressNowPlayingBulletinAssertion;
@property(readonly, nonatomic) PBMRSupportedCommandsTransaction *supportedCommandsTransaction; // @synthesize supportedCommandsTransaction=_supportedCommandsTransaction;
@property(readonly, nonatomic) PBMRPictureInPicturePlayerTransaction *pictureInPicturePlayerTransaction; // @synthesize pictureInPicturePlayerTransaction=_pictureInPicturePlayerTransaction;
@property(readonly, nonatomic) PBMRMetadataUpdateTransaction *metadataUpdateTransaction; // @synthesize metadataUpdateTransaction=_metadataUpdateTransaction;
@property(readonly, copy, nonatomic) NSString *mediaType; // @synthesize mediaType=_mediaType;
@property(readonly, copy, nonatomic) NSNumber *trackIdentifier; // @synthesize trackIdentifier=_trackIdentifier;
@property(nonatomic) __weak id <PBMediaRemoteObserverDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_notifyAttentionMonitorPlaybackStateChanged;	// IMP=0x00100000001e5d62
- (void)_updatePictureInPictureStateWithActivePlayerPath:(id)arg1;	// IMP=0x00100000001e5bbb
- (void)_updateSupportedPlaybackRates:(id)arg1;	// IMP=0x00100000001e5aaf
- (void)_updateWithNowPlayingInfoDictionary:(id)arg1 playbackState:(unsigned int)arg2 nowPlayingPID:(int)arg3 nowPlayingPlayerPath:(id)arg4;	// IMP=0x00100000001e4ca7
- (void)_performPictureInPicturePlayerStateUpdate;	// IMP=0x00100000001e47fd
- (void)_performSupportedCommandsUpdateWithPlayerPath:(void *)arg1;	// IMP=0x00100000001e4292
- (void)_performMetadataUpdate;	// IMP=0x00100000001e3c6f
- (void)_setNeedsMetadataUpdate;	// IMP=0x00100000001e3b1c
- (void)_presentTrackChangeBulletinWithInfo:(id)arg1;	// IMP=0x00100000001e38db
- (void)bulletinService:(id)arg1 didDismissBulletin:(id)arg2 withReason:(unsigned long long)arg3;	// IMP=0x00100000001e3850
- (void)_pictureInPictureStateDidChange:(id)arg1;	// IMP=0x00100000001e3794
- (void)_nowPlayingAppDidChange:(id)arg1;	// IMP=0x00100000001e364e
- (void)_nowPlayingAppPlaybackStateDidChange:(id)arg1;	// IMP=0x00100000001e3592
- (void)_nowPlayingInfoDidChange:(id)arg1;	// IMP=0x00100000001e34d6
- (void)_remotePlayerPlaybackStateDidChange:(id)arg1;	// IMP=0x00100000001e33f1
@property(readonly, nonatomic) MRPlayerPath *pictureInPicturePlayerPath; // @synthesize pictureInPicturePlayerPath=_pictureInPicturePlayerPath;
@property(readonly, nonatomic) MRPlayerPath *nowPlayingPlayerPath; // @synthesize nowPlayingPlayerPath=_nowPlayingPlayerPath;
@property(readonly, nonatomic) PBApplicationInfo *nowPlayingApplicationInfo; // @synthesize nowPlayingApplicationInfo=_nowPlayingApplicationInfo;
@property(readonly, nonatomic) int nowPlayingProcessPID; // @synthesize nowPlayingProcessPID=_nowPlayingProcessPID;
@property(retain, nonatomic) PBSBulletin *currentBulletin; // @synthesize currentBulletin=_currentBulletin;
@property(readonly, nonatomic) _Bool isPodcastsAppPlaying; // @synthesize isPodcastsAppPlaying=_isPodcastsAppPlaying;
@property(readonly, nonatomic) _Bool isMusicAppPlaying; // @synthesize isMusicAppPlaying=_isMusicAppPlaying;
@property(readonly, nonatomic) _Bool playingMusic; // @synthesize playingMusic=_playingMusic;
@property(readonly, nonatomic) _Bool playing; // @synthesize playing=_playing;
@property(readonly, copy, nonatomic) PBPlaybackRateList *supportedPlaybackRates; // @synthesize supportedPlaybackRates=_supportedPlaybackRates;
@property(readonly, copy, nonatomic) NSNumber *defaultPlaybackRate; // @synthesize defaultPlaybackRate=_defaultPlaybackRate;
@property(readonly, copy, nonatomic) NSNumber *playbackRate; // @synthesize playbackRate=_playbackRate;
- (_Bool)nowPlayingMediaTypeAudioOnly;	// IMP=0x00100000001e2fbe
- (void);	// IMP=0x00100000001e2f65
- (void)startObserving;	// IMP=0x00100000001e2dea
- (void)dealloc;	// IMP=0x00100000001e2dac
- (id)init;	// IMP=0x00100000001e2d74

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

