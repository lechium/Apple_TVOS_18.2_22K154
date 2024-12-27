//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CSAudioRecordContext, CSAudioStream, CSClientXPCConnection, NSString;
@protocol CSAudioStreamProviding, CSTriggerInfoProviding;

@interface CSAudioStreamProvidingProxy : NSObject
{
    _Bool _clientRequestedSkipMonitorUpdate;	// 8 = 0x8
    id <CSAudioStreamProviding> _audioStreamProviding;	// 16 = 0x10
    id <CSTriggerInfoProviding> _triggerInfoProviding;	// 24 = 0x18
    CSClientXPCConnection *_xpcConnection;	// 32 = 0x20
    unsigned long long _streamClientType;	// 40 = 0x28
    CSAudioStream *_audioStream;	// 48 = 0x30
    CSAudioRecordContext *_recordContext;	// 56 = 0x38
    NSString *_recordEventUUID;	// 64 = 0x40
    NSString *_accessoryId;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x002000000000eee1
@property(nonatomic) _Bool clientRequestedSkipMonitorUpdate; // @synthesize clientRequestedSkipMonitorUpdate=_clientRequestedSkipMonitorUpdate;
@property(retain, nonatomic) NSString *accessoryId; // @synthesize accessoryId=_accessoryId;
@property(retain, nonatomic) NSString *recordEventUUID; // @synthesize recordEventUUID=_recordEventUUID;
@property(retain, nonatomic) CSAudioRecordContext *recordContext; // @synthesize recordContext=_recordContext;
@property(retain, nonatomic) CSAudioStream *audioStream; // @synthesize audioStream=_audioStream;
@property(nonatomic) unsigned long long streamClientType; // @synthesize streamClientType=_streamClientType;
@property(nonatomic) __weak CSClientXPCConnection *xpcConnection; // @synthesize xpcConnection=_xpcConnection;
@property(nonatomic) __weak id <CSTriggerInfoProviding> triggerInfoProviding; // @synthesize triggerInfoProviding=_triggerInfoProviding;
@property(nonatomic, setter=setAudioStreamProvidingForProxy:) __weak id <CSAudioStreamProviding> audioStreamProviding; // @synthesize audioStreamProviding=_audioStreamProviding;
- (void)_setAllowMixableAudioWhileRecordingIfNeeded:(_Bool)arg1;	// IMP=0x001000000000ec16
- (void)_sendDelegateMessageToClient:(id)arg1;	// IMP=0x001000000000eb2c
- (void)audioStreamProvider:(id)arg1 didHardwareConfigurationChange:(long long)arg2;	// IMP=0x001000000000ea1e
- (void)audioStreamProvider:(id)arg1 audioChunkForTVAvailable:(id)arg2;	// IMP=0x001000000000e92f
- (void)audioStreamProvider:(id)arg1 audioBufferAvailable:(id)arg2;	// IMP=0x001000000000e840
- (void)audioStreamProvider:(id)arg1 didStopStreamUnexpectedly:(long long)arg2;	// IMP=0x001000000000e5b5
- (void)_handlePlaybackRouteMessage:(id)arg1 messageBody:(id)arg2 client:(id)arg3;	// IMP=0x001000000000e40e
- (void)_handleIsNarrowband:(id)arg1 messageBody:(id)arg2 client:(id)arg3;	// IMP=0x001000000000e265
- (void)_handleRecordSettings:(id)arg1 messageBody:(id)arg2 client:(id)arg3;	// IMP=0x001000000000e0b2
- (void)_handleAudioDeviceInfo:(id)arg1 messageBody:(id)arg2 client:(id)arg3;	// IMP=0x001000000000de8a
- (void)_handleRecordDeviceInfo:(id)arg1 messageBody:(id)arg2 client:(id)arg3;	// IMP=0x001000000000dcd7
- (void)_handleRecordRouteMessage:(id)arg1 messageBody:(id)arg2 client:(id)arg3;	// IMP=0x001000000000db30
- (void)_handleIsRecordingMessage:(id)arg1 messageBody:(id)arg2 client:(id)arg3;	// IMP=0x001000000000d987
- (void)_handleVoiceTriggerInfoMessage:(id)arg1 messageBody:(id)arg2 client:(id)arg3;	// IMP=0x001000000000d728
- (void)_handleStopAudioStreamMessage:(id)arg1 messageBody:(id)arg2 client:(id)arg3;	// IMP=0x001000000000d2a8
- (void)_handleStartAudioStreamMessage:(id)arg1 messageBody:(id)arg2 client:(id)arg3;	// IMP=0x001000000000cc86
- (void)_handleAudioStreamPrepareMessage:(id)arg1 messageBody:(id)arg2 client:(id)arg3;	// IMP=0x001000000000c70d
- (void)_handleAudioStreamRequestMessage:(id)arg1 messageBody:(id)arg2 client:(id)arg3;	// IMP=0x001000000000c297
- (void)_handleSetCurrentConextMessage:(id)arg1 messageBody:(id)arg2 client:(id)arg3;	// IMP=0x001000000000bf95
- (void)_handleSupportsDuckingWithStreamHandleID:(id)arg1 messageBody:(id)arg2 client:(id)arg3;	// IMP=0x001000000000bdd4
- (void)handleXPCMessage:(id)arg1 messageBody:(id)arg2 client:(id)arg3;	// IMP=0x001000000000bbec
- (void)CSClientXPCConnectionReceivedClientError:(id)arg1 clientError:(id)arg2 client:(id)arg3;	// IMP=0x001000000000b799
- (void)_sendReply:(id)arg1 client:(id)arg2 result:(_Bool)arg3 error:(id)arg4;	// IMP=0x001000000000b6a5
- (_Bool)_isHubRequest;	// IMP=0x001000000000b697
- (void)setInitialContext:(id)arg1;	// IMP=0x001000000000b602
- (id)initWithXPCConnection:(id)arg1;	// IMP=0x001000000000b39b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

