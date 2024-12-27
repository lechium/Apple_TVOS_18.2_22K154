//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <swiftCore/_TtCs12_SwiftObject.h>

@class MISSING_TYPE, NSDictionary, NSString;

@interface _TtC17MediaPlaybackCore23PlaybackStackController : _TtCs12_SwiftObject
{
    MISSING_TYPE *queueController;	// 16 = 0x10
    MISSING_TYPE *playerController;	// 24 = 0x18
    MISSING_TYPE *reporter;	// 32 = 0x20
    MISSING_TYPE *assetQueueController;	// 40 = 0x28
    MISSING_TYPE *errorController;	// 56 = 0x38
    MISSING_TYPE *backgroundTaskController;	// 64 = 0x40
    MISSING_TYPE *currentSetQueueIdentifier;	// 72 = 0x48
}

@property(nonatomic, readonly) NSDictionary *stateDictionary;
- (void)resetWithReason:(id)arg1;	// IMP=0x00000000000e696f
- (void)setInhibitSpeechDetection:(_Bool)arg1;	// IMP=0x00000000000e6cc1
- (void)deactivateAudioSessionIfIdle:(long long)arg1;	// IMP=0x00000000000e6c69
- (void)activateAudioSessionWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000e6bb6
- (void)updateAudioSessionWithConfiguration:(id)arg1;	// IMP=0x00000000000e6b68
@property(nonatomic, readonly) long long renderingMode;
- (void)setupForManagedSessionWithAudioSession:(id)arg1;	// IMP=0x00000000000e6feb
- (void)setupForShared;	// IMP=0x00000000000e6f66
- (void)setupForSolo;	// IMP=0x00000000000e6ed9
@property(nonatomic, readonly) _Bool isModeManagedSession;
@property(nonatomic, readonly) _Bool isModeShared;
@property(nonatomic, readonly) _Bool isModeSolo;
@property(nonatomic, readonly) NSString *modeDescription;
- (void)setApplicationMusicPlayerTransitionType:(long long)arg1 duration:(double)arg2;	// IMP=0x00000000000e7121
@property(nonatomic) float relativeVolume;
- (void)setSpatializationFormat:(long long)arg1;	// IMP=0x00000000000e7058

@end

