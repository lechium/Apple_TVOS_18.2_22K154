//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVAudioSession;
@protocol OS_dispatch_queue, SHAudioSessionManagerDelegate;

@interface SHAudioSessionManager : NSObject
{
    _Bool _audioSessionIsActive;	// 8 = 0x8
    _Bool _isAudioSessionInterrupted;	// 9 = 0x9
    _Bool _hasStartedSafetynetException;	// 10 = 0xa
    struct os_unfair_lock_s _mediaSafetyNetLock;	// 12 = 0xc
    id <SHAudioSessionManagerDelegate> _delegate;	// 16 = 0x10
    AVAudioSession *_audioSession;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_audioManagerDispatchQueue;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x002000000004ec5b
@property(nonatomic) _Bool hasStartedSafetynetException; // @synthesize hasStartedSafetynetException=_hasStartedSafetynetException;
@property(nonatomic) struct os_unfair_lock_s mediaSafetyNetLock; // @synthesize mediaSafetyNetLock=_mediaSafetyNetLock;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *audioManagerDispatchQueue; // @synthesize audioManagerDispatchQueue=_audioManagerDispatchQueue;
@property(retain, nonatomic) AVAudioSession *audioSession; // @synthesize audioSession=_audioSession;
@property(nonatomic) _Bool isAudioSessionInterrupted; // @synthesize isAudioSessionInterrupted=_isAudioSessionInterrupted;
@property(nonatomic) _Bool audioSessionIsActive; // @synthesize audioSessionIsActive=_audioSessionIsActive;
@property(nonatomic) __weak id <SHAudioSessionManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)handleAudioSessionRouteChange:(id)arg1;	// IMP=0x001000000004eb11
- (void)handleMediaServicesWereReset:(id)arg1;	// IMP=0x001000000004ea74
- (void)handleMediaServicesWereLost:(id)arg1;	// IMP=0x001000000004ea18
- (void)handleAudioSessionInterruption:(id)arg1;	// IMP=0x001000000004e802
- (void)deactivateAudioSession;	// IMP=0x001000000004e65c
- (void)configureAudioSessionForAssistantService:(id)arg1;	// IMP=0x001000000004e479
- (void)configureAudioSessionForStandardClient:(id)arg1;	// IMP=0x001000000004e16a
- (void)activateAudioSessionForClient:(long long)arg1;	// IMP=0x001000000004df86
- (void)unregisterAudioSessionObservers;	// IMP=0x001000000004de0d
- (void)registerAudioSessionObservers;	// IMP=0x001000000004dc78
- (id)init;	// IMP=0x001000000004dc19
- (void)dealloc;	// IMP=0x001000000004db8f
- (void)updateMediaSafetyNetExemptionToRunning:(_Bool)arg1;	// IMP=0x001000000004db4a

@end

