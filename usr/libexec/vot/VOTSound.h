//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVAudioPlayer, NSString, SCRCTargetSelectorTimer, SCRCThread, VOTOutputAction;
@protocol OS_dispatch_queue;

@interface VOTSound : NSObject
{
    VOTOutputAction *_action;	// 8 = 0x8
    struct OpaqueAudioFileID *_audioFileID;	// 16 = 0x10
    struct OpaqueAudioComponentInstance *_audioUnit;	// 24 = 0x18
    unsigned int _soundID;	// 32 = 0x20
    id _delegate;	// 40 = 0x28
    id _owner;	// 48 = 0x30
    CDUnknownBlockType _completionBlock;	// 56 = 0x38
    double _volume;	// 64 = 0x40
    NSString *_soundPath;	// 72 = 0x48
    AVAudioPlayer *_player;	// 80 = 0x50
    struct os_unfair_lock_s _completionBlockLock;	// 88 = 0x58
    long long _soundChannels;	// 96 = 0x60
    _Bool _hearingAidStreamSelected;	// 104 = 0x68
    NSObject<OS_dispatch_queue> *_hearingAidStreamSerialQueue;	// 112 = 0x70
    unsigned long long _soundPlayGeneration;	// 120 = 0x78
    SCRCTargetSelectorTimer *_cancelHelperTimer;	// 128 = 0x80
    _Bool _isPlaying;	// 136 = 0x88
    _Bool _isVolumeSound;	// 137 = 0x89
    SCRCThread *_soundThread;	// 144 = 0x90
    NSString *_resolvedSoundPath;	// 152 = 0x98
}

- (void).cxx_destruct;	// IMP=0x0020000000016e21
@property(copy, nonatomic) NSString *resolvedSoundPath; // @synthesize resolvedSoundPath=_resolvedSoundPath;
@property(nonatomic) _Bool isVolumeSound; // @synthesize isVolumeSound=_isVolumeSound;
@property(retain, nonatomic) SCRCThread *soundThread; // @synthesize soundThread=_soundThread;
@property(nonatomic) _Bool isPlaying; // @synthesize isPlaying=_isPlaying;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
- (void)audioPlayerDidFinishPlaying:(id)arg1 successfully:(_Bool)arg2;	// IMP=0x0010000000016d35
- (void)audioPlayerDecodeErrorDidOccur:(id)arg1 error:(id)arg2;	// IMP=0x0010000000016cb7
- (void)playAvoidingSSS;	// IMP=0x0010000000016ca0
- (void)play;	// IMP=0x0010000000016c8c
- (void)playAvoidingSSS:(_Bool)arg1;	// IMP=0x0010000000016807
- (void)_cancelHelperFired:(unsigned long long)arg1;	// IMP=0x001000000001672c
- (void)_sendFinishPlayingNotificationsWithCompletionBlock:(CDUnknownBlockType)arg1 delegate:(id)arg2;	// IMP=0x00100000000166a7
- (void)_finishedPlaying;	// IMP=0x0010000000016507
- (id)action;	// IMP=0x00100000000164f9
- (void)setAction:(id)arg1;	// IMP=0x00100000000164e8
- (id)owner;	// IMP=0x00100000000164da
- (void)setOwner:(id)arg1;	// IMP=0x00100000000164c9
- (id)delegate;	// IMP=0x00100000000164bb
- (void)setDelegate:(id)arg1;	// IMP=0x00100000000164aa
- (void)dealloc;	// IMP=0x00100000000163af
- (void)setVolume:(float)arg1;	// IMP=0x0010000000016390
- (id)soundPath;	// IMP=0x0010000000016382
- (void)_updateAudioSessionProperties;	// IMP=0x0010000000016327
- (void)__updateAudioSessionProperties;	// IMP=0x0010000000016078
- (void)_updatePlayerWithAudioFile:(_Bool)arg1;	// IMP=0x0010000000015e20
- (_Bool)shouldUseAVAudioPlayer;	// IMP=0x0010000000015ba7
- (void)resetSoundForLostMediaSession;	// IMP=0x0010000000015b3f
- (void)_hearingAidRouteChange:(id)arg1;	// IMP=0x0010000000015b39
- (id)initWithSoundPath:(id)arg1 thread:(id)arg2;	// IMP=0x00100000000156d1

@end

