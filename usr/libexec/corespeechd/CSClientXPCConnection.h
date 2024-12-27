//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CSAudioAlertProvidingProxy, CSAudioMeterProvidingProxy, CSAudioMetricProvidingProxy, CSAudioSessionInfoProvidingProxy, CSAudioSessionProvidingProxy, CSAudioStreamProvidingProxy, CSFallbackAudioSessionReleaseProvidingProxy;
@protocol CSClientXPCConnectionDelegate, OS_dispatch_queue, OS_xpc_object;

@interface CSClientXPCConnection : NSObject
{
    id <CSClientXPCConnectionDelegate> _delegate;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    NSObject<OS_xpc_object> *_connection;	// 24 = 0x18
    CSAudioSessionProvidingProxy *_audioSessionProvidingProxy;	// 32 = 0x20
    CSFallbackAudioSessionReleaseProvidingProxy *_fallbackAudioSessionProvidingProxy;	// 40 = 0x28
    CSAudioSessionInfoProvidingProxy *_audioSessionInfoProvidingProxy;	// 48 = 0x30
    CSAudioStreamProvidingProxy *_audioStreamProvidingProxy;	// 56 = 0x38
    CSAudioAlertProvidingProxy *_audioAlertProvidingProxy;	// 64 = 0x40
    CSAudioMeterProvidingProxy *_audioMeterProvidingProxy;	// 72 = 0x48
    CSAudioMetricProvidingProxy *_audioMetricProvidingProxy;	// 80 = 0x50
    unsigned long long _clientType;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x00200000000f15b9
@property(nonatomic) unsigned long long clientType; // @synthesize clientType=_clientType;
@property(retain, nonatomic) CSAudioMetricProvidingProxy *audioMetricProvidingProxy; // @synthesize audioMetricProvidingProxy=_audioMetricProvidingProxy;
@property(retain, nonatomic) CSAudioMeterProvidingProxy *audioMeterProvidingProxy; // @synthesize audioMeterProvidingProxy=_audioMeterProvidingProxy;
@property(retain, nonatomic) CSAudioAlertProvidingProxy *audioAlertProvidingProxy; // @synthesize audioAlertProvidingProxy=_audioAlertProvidingProxy;
@property(retain, nonatomic) CSAudioStreamProvidingProxy *audioStreamProvidingProxy; // @synthesize audioStreamProvidingProxy=_audioStreamProvidingProxy;
@property(retain, nonatomic) CSAudioSessionInfoProvidingProxy *audioSessionInfoProvidingProxy; // @synthesize audioSessionInfoProvidingProxy=_audioSessionInfoProvidingProxy;
@property(retain, nonatomic) CSFallbackAudioSessionReleaseProvidingProxy *fallbackAudioSessionProvidingProxy; // @synthesize fallbackAudioSessionProvidingProxy=_fallbackAudioSessionProvidingProxy;
@property(retain, nonatomic) CSAudioSessionProvidingProxy *audioSessionProvidingProxy; // @synthesize audioSessionProvidingProxy=_audioSessionProvidingProxy;
@property(retain, nonatomic) NSObject<OS_xpc_object> *connection; // @synthesize connection=_connection;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) __weak id <CSClientXPCConnectionDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_handlePingPongMessage:(id)arg1 client:(id)arg2;	// IMP=0x00100000000f13a1
- (void)_notifyXPCDisconnectionToProxy:(id)arg1;	// IMP=0x00100000000f1346
- (void)_notifyXPCDisconnectionToProxies;	// IMP=0x00100000000f129c
- (void)_handleClientError:(id)arg1 client:(id)arg2;	// IMP=0x00100000000f10a1
- (void)_handleSetXPCClientTypeMessage:(id)arg1 messageBody:(id)arg2 client:(id)arg3;	// IMP=0x00100000000f0f47
- (void)_handleAudioProvidingRequestTypeSwitchMessage:(id)arg1 messageBody:(id)arg2 client:(id)arg3;	// IMP=0x00100000000f0daa
- (void)_handleAudioProvidingMessage:(id)arg1 messageBody:(id)arg2 client:(id)arg3;	// IMP=0x00100000000f0bc8
- (void)_handleClientMessage:(id)arg1 client:(id)arg2;	// IMP=0x00100000000f08a2
- (void)_handleClientEvent:(id)arg1;	// IMP=0x00100000000f073c
- (void)sendMessageToClient:(id)arg1;	// IMP=0x00100000000f0607
- (void)activateConnection;	// IMP=0x00100000000f0558
- (_Bool)_getAudioProvideWithContext:(id)arg1 streamClientType:(unsigned long long)arg2;	// IMP=0x00100000000f0311
- (id)initWithConnection:(id)arg1;	// IMP=0x00100000000f00fc

@end

