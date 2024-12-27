//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue, OS_dispatch_source, RPMessageable;

@interface RPMediaControlDaemon : NSObject
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 8 = 0x8
    unsigned int _movementCommand;	// 16 = 0x10
    unsigned int _movementEndCommand;	// 20 = 0x14
    NSObject<OS_dispatch_source> *_movementEndTimer;	// 24 = 0x18
    unsigned long long _mediaControlFlags;	// 32 = 0x20
    _Bool _mediaControlInterest;	// 40 = 0x28
    _Bool _mediaRemoteCommandGetting;	// 41 = 0x29
    _Bool _mediaRemoteCommandObserving;	// 42 = 0x2a
    unsigned int _mediaRemoteVolumeCaps;	// 44 = 0x2c
    _Bool _mediaRemoteVolumeObserving;	// 48 = 0x30
    _Bool _volumeControlEnabledPB;	// 49 = 0x31
    int _volumeControlNotifyToken;	// 52 = 0x34
    id <RPMessageable> _messenger;	// 56 = 0x38
    CDUnknownBlockType _sendInterestEventHandler;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x002000000007cf93
@property(copy, nonatomic) CDUnknownBlockType sendInterestEventHandler; // @synthesize sendInterestEventHandler=_sendInterestEventHandler;
@property(retain, nonatomic) id <RPMessageable> messenger; // @synthesize messenger=_messenger;
- (void)_handleSetVolume:(id)arg1 responseHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000007cc2c
- (void)_handleGetVolume:(id)arg1 responseHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000007ca69
- (void)_handleSkipByRequest:(id)arg1 responseHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000007c958
- (void)_handleMovementCommand:(unsigned int)arg1 endCommand:(unsigned int)arg2;	// IMP=0x001000000007c7b4
- (void)_handleMediaCaptionSet:(id)arg1 responseHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000007c5d7
- (void)_handleMediaCaptionGet:(id)arg1 responseHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000007c4ac
- (void)_handleCommand:(id)arg1 responseHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000007c1f8
- (void)_mediaRemoteVolumeControlUpdate;	// IMP=0x001000000007c1ce
- (void)_mediaRemoteVolumeControlChanged:(id)arg1;	// IMP=0x001000000007c028
- (void)_mediaRemoteSupportedCommandsGet;	// IMP=0x001000000007bd53
- (void)_mediaRemoteSupportedCommandsChanged;	// IMP=0x001000000007bc8f
- (void)_mediaControlFlagsUpdate:(unsigned long long)arg1 mask:(unsigned long long)arg2;	// IMP=0x001000000007bb31
- (void)_mediaControlEnsureStopped;	// IMP=0x001000000007ba04
- (void)_mediaControlEnsureStarted;	// IMP=0x001000000007b494
- (void)_update;	// IMP=0x001000000007b470
- (void)deregisteredEventID:(id)arg1;	// IMP=0x001000000007b428
- (void)registeredEventID:(id)arg1;	// IMP=0x001000000007b3e0
- (void)invalidate;	// IMP=0x001000000007b29d
- (_Bool)activateAndReturnError:(id *)arg1;	// IMP=0x001000000007b064
- (id)init;	// IMP=0x001000000007affc

@end

