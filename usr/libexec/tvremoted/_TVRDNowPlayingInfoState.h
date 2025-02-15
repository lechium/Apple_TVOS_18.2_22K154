//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MRContentItem, MRLanguageOption, NSData, NSNumber, NSString, NSXPCConnection, TVRCNowPlayingInfo, TVRCNowPlayingMetadata, TVRCTimedMetadata;
@protocol WLKConnectionServerProtocol;

__attribute__((visibility("hidden")))
@interface _TVRDNowPlayingInfoState : NSObject
{
    NSXPCConnection *_connection;	// 8 = 0x8
    id <WLKConnectionServerProtocol> _proxy;	// 16 = 0x10
    _Bool _hasUpdatedImageData;	// 24 = 0x18
    _Bool _imageDataIsPlaceholder;	// 25 = 0x19
    NSString *_identifier;	// 32 = 0x20
    NSNumber *_playbackRate;	// 40 = 0x28
    NSNumber *_playbackState;	// 48 = 0x30
    NSString *_playerIdentifier;	// 56 = 0x38
    MRContentItem *_contentItem;	// 64 = 0x40
    MRLanguageOption *_currentCaptionTrack;	// 72 = 0x48
    MRLanguageOption *_preferredCaptionTrack;	// 80 = 0x50
    MRLanguageOption *_preferredOnlyForcedCaptionTrack;	// 88 = 0x58
    TVRCNowPlayingMetadata *_metadata;	// 96 = 0x60
    TVRCTimedMetadata *_timedMetadata;	// 104 = 0x68
    NSData *_imageData;	// 112 = 0x70
    NSString *_canonicalID;	// 120 = 0x78
    NSString *_bundleID;	// 128 = 0x80
    CDUnknownBlockType _updateHandler;	// 136 = 0x88
}

- (void).cxx_destruct;	// IMP=0x0020000000007547
@property(readonly, copy, nonatomic) CDUnknownBlockType updateHandler; // @synthesize updateHandler=_updateHandler;
@property(retain, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(retain, nonatomic) NSString *canonicalID; // @synthesize canonicalID=_canonicalID;
@property(nonatomic) _Bool imageDataIsPlaceholder; // @synthesize imageDataIsPlaceholder=_imageDataIsPlaceholder;
@property(nonatomic) _Bool hasUpdatedImageData; // @synthesize hasUpdatedImageData=_hasUpdatedImageData;
@property(retain, nonatomic) NSData *imageData; // @synthesize imageData=_imageData;
@property(retain, nonatomic) TVRCTimedMetadata *timedMetadata; // @synthesize timedMetadata=_timedMetadata;
@property(retain, nonatomic) TVRCNowPlayingMetadata *metadata; // @synthesize metadata=_metadata;
@property(retain, nonatomic) MRLanguageOption *preferredOnlyForcedCaptionTrack; // @synthesize preferredOnlyForcedCaptionTrack=_preferredOnlyForcedCaptionTrack;
@property(retain, nonatomic) MRLanguageOption *preferredCaptionTrack; // @synthesize preferredCaptionTrack=_preferredCaptionTrack;
@property(retain, nonatomic) MRLanguageOption *currentCaptionTrack; // @synthesize currentCaptionTrack=_currentCaptionTrack;
@property(retain, nonatomic) MRContentItem *contentItem; // @synthesize contentItem=_contentItem;
@property(retain, nonatomic) NSString *playerIdentifier; // @synthesize playerIdentifier=_playerIdentifier;
@property(retain, nonatomic) NSNumber *playbackState; // @synthesize playbackState=_playbackState;
@property(retain, nonatomic) NSNumber *playbackRate; // @synthesize playbackRate=_playbackRate;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) id <WLKConnectionServerProtocol> proxy;
@property(readonly, nonatomic) NSXPCConnection *connection;
- (void)__performUpdateForCaptionMetadata;	// IMP=0x0010000000006f42
- (void)requestCanonicalIDForIdentifier:(id)arg1;	// IMP=0x001000000000690d
- (void)requestCanonicalIDForIdentifier:(id)arg1 shouldExpectPlaybackSummaries:(_Bool)arg2;	// IMP=0x0010000000006687
- (void)_requestImageData;	// IMP=0x001000000000645a
@property(readonly, nonatomic) TVRCNowPlayingInfo *nowPlayingInfoForCurrentState;
- (_Bool)_isPaused;	// IMP=0x0010000000005d68
- (void)_invokeUpdateHandlerWithNowPlayingInfo:(id)arg1;	// IMP=0x0010000000005bf2
- (void)_invokeUpdateHandlerIfNeeded;	// IMP=0x0010000000005b7d
- (_Bool)_shouldUpdate;	// IMP=0x0010000000005a5f
- (void)_reset;	// IMP=0x00100000000059b5
- (id)_preferredLanguageCodeFromLanguageCodes:(id)arg1 preferredLanguageCode:(id)arg2 systemLanguageCode:(id)arg3;	// IMP=0x001000000000558a
- (id)_preferredLegibleTrackFromGroups:(id)arg1 containsOnlyForcedCharacteristic:(_Bool)arg2;	// IMP=0x0010000000004ad1
- (id)_currentLegibleTrackFromOptions:(id)arg1;	// IMP=0x0010000000004a28
- (void)triggerUpdateForCaptionMetadata;	// IMP=0x00100000000049cd
- (void)updateCanonicalIdentifier:(id)arg1 bundleID:(id)arg2;	// IMP=0x0010000000004899
- (void)updateImageData:(id)arg1 isPlaceholder:(_Bool)arg2;	// IMP=0x0010000000004734
- (void)updateTimedMetadata:(id)arg1;	// IMP=0x00100000000044f5
- (void)updateMetadata:(id)arg1;	// IMP=0x0010000000004425
- (void)updateContentItem:(id)arg1;	// IMP=0x0010000000004226
- (void)updatePlayerIdentifier:(id)arg1;	// IMP=0x00100000000041e6
- (void)updatePlaybackState:(unsigned long long)arg1;	// IMP=0x0010000000004132
- (void)updatePlaybackStateWithPreviousMRPlaybackState:(unsigned int)arg1 to:(unsigned int)arg2;	// IMP=0x00100000000040f9
@property(readonly, nonatomic) _Bool hasEffectiveCanonicalID;
@property(readonly, nonatomic) _Bool isPlaying;
@property(readonly, nonatomic) _Bool hasValidCaptionOptions;
@property(readonly, nonatomic) _Bool captionsEnabled;
- (void)updateCaptionOptionsWithCurrentLanguageOptions:(id)arg1 availableLanguageGroups:(id)arg2;	// IMP=0x0010000000003e28
- (void)updatePlaybackRate:(id)arg1;	// IMP=0x0010000000003da3
- (id)initWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000003d10

@end

