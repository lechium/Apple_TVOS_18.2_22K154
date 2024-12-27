//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString, SAErrorIndicatorStatus, SAHACurrentHome, SAHomeCommunicationAnnouncement, SALocalSearchGetNavigationStatusCompleted, SAMPQueueState, SANavStatus, SAPhoneCallState, SARemotePlaybackDeviceList, SAUserTokenStatus;

@interface ADBackgroundContextCache : NSObject
{
    SANavStatus *_navStatus;	// 8 = 0x8
    SALocalSearchGetNavigationStatusCompleted *_localSearchGetNavigationStatusCompleted;	// 16 = 0x10
    SAMPQueueState *_queueState;	// 24 = 0x18
    SAErrorIndicatorStatus *_errorIndicatorStatus;	// 32 = 0x20
    SAHACurrentHome *_currentHome;	// 40 = 0x28
    SAPhoneCallState *_phoneCallState;	// 48 = 0x30
    NSString *_musicPersonalizationToken;	// 56 = 0x38
    SAUserTokenStatus *_musicPersonalizationTokenStatus;	// 64 = 0x40
    NSDictionary *_allMusicPersonalizationTokens;	// 72 = 0x48
    NSDictionary *_allMusicPersonalizationTokenStatuses;	// 80 = 0x50
    NSString *_preferredMediaUserSharedUserID;	// 88 = 0x58
    NSString *_preferredMediaUserHomeUserID;	// 96 = 0x60
    SARemotePlaybackDeviceList *_playbackDeviceList;	// 104 = 0x68
    SAHomeCommunicationAnnouncement *_homeAnnouncement;	// 112 = 0x70
}

+ (id)_backgroundContextWithObjects:(id)arg1;	// IMP=0x0040000000252055
- (void).cxx_destruct;	// IMP=0x0020000000251d6e
@property(retain, nonatomic) SAHomeCommunicationAnnouncement *homeAnnouncement; // @synthesize homeAnnouncement=_homeAnnouncement;
@property(retain, nonatomic) SARemotePlaybackDeviceList *playbackDeviceList; // @synthesize playbackDeviceList=_playbackDeviceList;
@property(copy, nonatomic) NSString *preferredMediaUserHomeUserID; // @synthesize preferredMediaUserHomeUserID=_preferredMediaUserHomeUserID;
@property(copy, nonatomic) NSString *preferredMediaUserSharedUserID; // @synthesize preferredMediaUserSharedUserID=_preferredMediaUserSharedUserID;
@property(copy, nonatomic) NSDictionary *allMusicPersonalizationTokenStatuses; // @synthesize allMusicPersonalizationTokenStatuses=_allMusicPersonalizationTokenStatuses;
@property(copy, nonatomic) NSDictionary *allMusicPersonalizationTokens; // @synthesize allMusicPersonalizationTokens=_allMusicPersonalizationTokens;
@property(copy, nonatomic) SAUserTokenStatus *musicPersonalizationTokenStatus; // @synthesize musicPersonalizationTokenStatus=_musicPersonalizationTokenStatus;
@property(copy, nonatomic) NSString *musicPersonalizationToken; // @synthesize musicPersonalizationToken=_musicPersonalizationToken;
@property(retain, nonatomic) SAPhoneCallState *phoneCallState; // @synthesize phoneCallState=_phoneCallState;
@property(retain, nonatomic) SAHACurrentHome *currentHome; // @synthesize currentHome=_currentHome;
@property(retain, nonatomic) SAErrorIndicatorStatus *errorIndicatorStatus; // @synthesize errorIndicatorStatus=_errorIndicatorStatus;
@property(retain, nonatomic) SAMPQueueState *queueState; // @synthesize queueState=_queueState;
@property(retain, nonatomic) SALocalSearchGetNavigationStatusCompleted *localSearchGetNavigationStatusCompleted; // @synthesize localSearchGetNavigationStatusCompleted=_localSearchGetNavigationStatusCompleted;
@property(retain, nonatomic) SANavStatus *navStatus; // @synthesize navStatus=_navStatus;
- (id)backgroundContextWithCachedObjects;	// IMP=0x001000000025174f
- (void)_updateDefaultTokenInDynamiteClientState:(id)arg1;	// IMP=0x00100000002512c7
- (void)_setDefaultToken:(id)arg1 inDynamiteClientState:(id)arg2;	// IMP=0x00100000002511fb

@end

