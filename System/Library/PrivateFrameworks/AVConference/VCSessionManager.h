//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface VCSessionManager : NSObject
{
    NSMutableDictionary *_sessions;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_xpcCommandQueue;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_sessionQueue;	// 24 = 0x18
    _Bool _sharingEnabled;	// 32 = 0x20
    _Bool _screenAndCameraMixingEnabled;	// 33 = 0x21
}

+ (void)addNSError:(id)arg1 toXPCArgumentDictionary:(id)arg2;	// IMP=0x0010000000162f3f
+ (id)sharedInstance;	// IMP=0x0010000000162ef0
@property(nonatomic) _Bool screenAndCameraMixingEnabled; // @synthesize screenAndCameraMixingEnabled=_screenAndCameraMixingEnabled;
@property(nonatomic) _Bool sharingEnabled; // @synthesize sharingEnabled=_sharingEnabled;
@property(readonly, nonatomic) NSMutableDictionary *sessions; // @synthesize sessions=_sessions;
- (void)releaseSession:(id)arg1;	// IMP=0x0000000000167ca1
- (id)participantConfigFromXPCDictionary:(id)arg1;	// IMP=0x0000000000167995
- (void)deregisterBlocksForService;	// IMP=0x0000000000167760
- (void)registerBlocksForService;	// IMP=0x0000000000165401
- (void)vcSession:(id)arg1 participantID:(id)arg2 didDetectError:(id)arg3;	// IMP=0x0000000000165377
- (void)vcSession:(id)arg1 participantDidStopReacting:(id)arg2;	// IMP=0x00000000001652da
- (void)vcSession:(id)arg1 participantID:(id)arg2 reactionDidStart:(id)arg3;	// IMP=0x000000000016522a
- (void)vcSession:(id)arg1 participantID:(id)arg2 didChangeMediaPriority:(unsigned char)arg3 description:(id)arg4;	// IMP=0x000000000016513e
- (void)vcSessionShouldReconnect:(id)arg1;	// IMP=0x00000000001650f8
- (void)vcSession:(id)arg1 participantID:(id)arg2 mixingDidChangeForMediaType:(unsigned int)arg3 mixingMediaType:(unsigned int)arg4;	// IMP=0x0000000000164ff0
- (void)vcSession:(id)arg1 participantID:(id)arg2 remoteMediaStateDidChange:(unsigned int)arg3 forMediaType:(unsigned int)arg4;	// IMP=0x0000000000164f13
- (void)vcSession:(id)arg1 participantID:(id)arg2 mediaStateDidChange:(unsigned int)arg3 forMediaType:(unsigned int)arg4 didSucceed:(_Bool)arg5 error:(id)arg6;	// IMP=0x0000000000164dee
- (void)vcSession:(id)arg1 participantID:(id)arg2 remoteVideoPausedDidChange:(_Bool)arg3;	// IMP=0x0000000000164d44
- (void)vcSession:(id)arg1 participantID:(id)arg2 remoteAudioPausedDidChange:(_Bool)arg3;	// IMP=0x0000000000164c9a
- (void)vcSession:(id)arg1 participantID:(id)arg2 videoPaused:(_Bool)arg3 didSucceed:(_Bool)arg4 error:(id)arg5;	// IMP=0x0000000000164b9c
- (void)vcSession:(id)arg1 participantID:(id)arg2 audioPaused:(_Bool)arg3 didSucceed:(_Bool)arg4 error:(id)arg5;	// IMP=0x0000000000164a9e
- (void)vcSession:(id)arg1 participantID:(id)arg2 remoteScreenEnabledDidChange:(_Bool)arg3;	// IMP=0x00000000001649f4
- (void)vcSession:(id)arg1 participantID:(id)arg2 remoteVideoEnabledDidChange:(_Bool)arg3;	// IMP=0x000000000016494a
- (void)vcSession:(id)arg1 participantID:(id)arg2 remoteAudioEnabledDidChange:(_Bool)arg3;	// IMP=0x00000000001648a0
- (void)vcSession:(id)arg1 participantID:(id)arg2 screenEnabled:(_Bool)arg3 didSucceed:(_Bool)arg4 error:(id)arg5;	// IMP=0x00000000001647a2
- (void)vcSession:(id)arg1 participantID:(id)arg2 videoEnabled:(_Bool)arg3 didSucceed:(_Bool)arg4 error:(id)arg5;	// IMP=0x00000000001646a4
- (void)vcSession:(id)arg1 participantID:(id)arg2 audioEnabled:(_Bool)arg3 didSucceed:(_Bool)arg4 error:(id)arg5;	// IMP=0x00000000001645a6
- (void)vcSession:(id)arg1 oneToOneModeEnabled:(_Bool)arg2 didSucceed:(_Bool)arg3 error:(id)arg4;	// IMP=0x00000000001644d0
- (void)vcSession:(id)arg1 updateConfiguration:(id)arg2 didSucceed:(_Bool)arg3 error:(id)arg4;	// IMP=0x0000000000164417
- (void)vcSession:(id)arg1 removeParticipantWithID:(id)arg2 didSucceed:(_Bool)arg3 error:(id)arg4;	// IMP=0x000000000016435e
- (void)vcSession:(id)arg1 addParticipantWithID:(id)arg2 didSucceed:(_Bool)arg3 error:(id)arg4;	// IMP=0x0000000000164189
- (void)vcSession:(id)arg1 downlinkRateAdaptationDidChangeWithInfo:(id)arg2;	// IMP=0x0000000000164118
- (void)vcSession:(id)arg1 uplinkRateAdaptationDidChangeWithInfo:(id)arg2;	// IMP=0x00000000001640a7
- (void)vcSession:(id)arg1 didStopWithError:(id)arg2;	// IMP=0x0000000000163fe7
- (void)vcSession:(id)arg1 didStart:(_Bool)arg2 error:(id)arg3;	// IMP=0x0000000000163f25
- (id)sessionForStreamToken:(unsigned int)arg1;	// IMP=0x00000000001632cb
- (id)sessionForUUID:(id)arg1;	// IMP=0x00000000001631a3
- (void)dealloc;	// IMP=0x000000000016310c
- (id)init;	// IMP=0x000000000016305d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

