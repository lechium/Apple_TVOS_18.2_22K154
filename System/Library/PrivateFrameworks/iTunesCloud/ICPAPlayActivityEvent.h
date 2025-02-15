//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class ICPAAudioQualityDictionary, ICPAPlayActivityEnqueuerProperties, ICPAPlayModeDictionary, NSData, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface ICPAPlayActivityEvent : PBCodable
{
    long long _characterDisplayedCount;	// 8 = 0x8
    unsigned long long _cloudPlaylistID;	// 16 = 0x10
    long long _containerAdamID;	// 24 = 0x18
    long long _equivalencySourceAdamID;	// 32 = 0x20
    double _eventDateTimestamp;	// 40 = 0x28
    double _eventSecondsFromGMT;	// 48 = 0x30
    unsigned long long _itemCloudID;	// 56 = 0x38
    double _itemDuration;	// 64 = 0x40
    double _itemEndTime;	// 72 = 0x48
    double _itemStartTime;	// 80 = 0x50
    long long _persistentID;	// 88 = 0x58
    long long _purchasedAdamID;	// 96 = 0x60
    long long _radioAdamID;	// 104 = 0x68
    long long _reportingAdamID;	// 112 = 0x70
    long long _sharedActivityGroupSizeCurrent;	// 120 = 0x78
    long long _sharedActivityGroupSizeMax;	// 128 = 0x80
    long long _stationID;	// 136 = 0x88
    unsigned long long _storeAccountID;	// 144 = 0x90
    long long _subscriptionAdamID;	// 152 = 0x98
    long long _tvShowPurchasedAdamID;	// 160 = 0xa0
    long long _tvShowSubscriptionAdamID;	// 168 = 0xa8
    double _vocalAttenuationDuration;	// 176 = 0xb0
    int _audioQualityPreference;	// 184 = 0xb8
    NSMutableArray *_buildFeatures;	// 192 = 0xc0
    NSString *_buildVersion;	// 200 = 0xc8
    NSString *_cloudAlbumID;	// 208 = 0xd0
    NSString *_containerID;	// 216 = 0xd8
    int _containerType;	// 224 = 0xe0
    NSString *_deviceName;	// 232 = 0xe8
    int _displayType;	// 240 = 0xf0
    int _endReasonType;	// 244 = 0xf4
    ICPAPlayActivityEnqueuerProperties *_enqueuerProperties;	// 248 = 0xf8
    NSString *_eventTimeZoneName;	// 256 = 0x100
    int _eventType;	// 264 = 0x108
    NSString *_externalID;	// 272 = 0x110
    NSString *_featureName;	// 280 = 0x118
    NSString *_globalPlaylistID;	// 288 = 0x120
    NSString *_householdID;	// 296 = 0x128
    int _itemType;	// 304 = 0x130
    NSString *_lyricLanguage;	// 312 = 0x138
    NSString *_lyricsID;	// 320 = 0x140
    int _mediaType;	// 328 = 0x148
    NSString *_personalizedContainerID;	// 336 = 0x150
    ICPAPlayModeDictionary *_playMode;	// 344 = 0x158
    int _playbackFormatPreference;	// 352 = 0x160
    NSString *_playlistVersionHash;	// 360 = 0x168
    ICPAAudioQualityDictionary *_providedAudioQuality;	// 368 = 0x170
    NSString *_queueGroupingID;	// 376 = 0x178
    int _reasonHintType;	// 384 = 0x180
    NSData *_recommendationData;	// 392 = 0x188
    NSString *_requestingBundleIdentifier;	// 400 = 0x190
    NSString *_requestingBundleVersion;	// 408 = 0x198
    int _sharedActivityType;	// 416 = 0x1a0
    int _sourceType;	// 420 = 0x1a4
    NSString *_stationHash;	// 424 = 0x1a8
    NSString *_stationStringID;	// 432 = 0x1b0
    NSString *_storeFrontID;	// 440 = 0x1b8
    NSString *_storeID;	// 448 = 0x1c0
    int _systemReleaseType;	// 456 = 0x1c8
    ICPAAudioQualityDictionary *_targetedAudioQuality;	// 464 = 0x1d0
    NSData *_timedMetadata;	// 472 = 0x1d8
    NSData *_trackInfo;	// 480 = 0x1e0
    int _vocalAttenuationAvailibility;	// 488 = 0x1e8
    _Bool _continuityCameraUsed;	// 492 = 0x1ec
    _Bool _internalBuild;	// 493 = 0x1ed
    _Bool _isCollaborativePlaylist;	// 494 = 0x1ee
    _Bool _offline;	// 495 = 0x1ef
    _Bool _privateListeningEnabled;	// 496 = 0x1f0
    _Bool _sBEnabled;	// 497 = 0x1f1
    _Bool _siriInitiated;	// 498 = 0x1f2
    struct {
        unsigned int characterDisplayedCount:1;
        unsigned int cloudPlaylistID:1;
        unsigned int containerAdamID:1;
        unsigned int equivalencySourceAdamID:1;
        unsigned int eventDateTimestamp:1;
        unsigned int eventSecondsFromGMT:1;
        unsigned int itemCloudID:1;
        unsigned int itemDuration:1;
        unsigned int itemEndTime:1;
        unsigned int itemStartTime:1;
        unsigned int persistentID:1;
        unsigned int purchasedAdamID:1;
        unsigned int radioAdamID:1;
        unsigned int reportingAdamID:1;
        unsigned int sharedActivityGroupSizeCurrent:1;
        unsigned int sharedActivityGroupSizeMax:1;
        unsigned int stationID:1;
        unsigned int storeAccountID:1;
        unsigned int subscriptionAdamID:1;
        unsigned int tvShowPurchasedAdamID:1;
        unsigned int tvShowSubscriptionAdamID:1;
        unsigned int vocalAttenuationDuration:1;
        unsigned int audioQualityPreference:1;
        unsigned int containerType:1;
        unsigned int displayType:1;
        unsigned int endReasonType:1;
        unsigned int eventType:1;
        unsigned int itemType:1;
        unsigned int mediaType:1;
        unsigned int playbackFormatPreference:1;
        unsigned int reasonHintType:1;
        unsigned int sharedActivityType:1;
        unsigned int sourceType:1;
        unsigned int systemReleaseType:1;
        unsigned int vocalAttenuationAvailibility:1;
        unsigned int continuityCameraUsed:1;
        unsigned int internalBuild:1;
        unsigned int isCollaborativePlaylist:1;
        unsigned int offline:1;
        unsigned int privateListeningEnabled:1;
        unsigned int sBEnabled:1;
        unsigned int siriInitiated:1;
    } _has;	// 500 = 0x1f4
}

- (void).cxx_destruct;	// IMP=0x000000000013ca2c
- (unsigned long long)hash;	// IMP=0x000000000013b9cc
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000013abbc
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000139fc0
- (void)writeTo:(id)arg1;	// IMP=0x00000000001395c8
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000001378f1
- (id)dictionaryRepresentation;	// IMP=0x0000000000136547
- (id)description;	// IMP=0x0000000000136498

@end

