//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HMDActiveSiriSessionInfo, HMDSiriRemoteInputServer, HMDSiriStreamStartEvent, NSNumber, NSString;
@protocol HMMLogEventSubmitting, OS_os_log, OS_xpc_object;

__attribute__((visibility("hidden")))
@interface HMDSiriSession : NSObject
{
    NSObject<OS_os_log> *_logger;	// 8 = 0x8
    _Bool _isActivationPending;	// 16 = 0x10
    NSString *_identifier;	// 24 = 0x18
    id <HMMLogEventSubmitting> _logEventSubmitter;	// 32 = 0x20
    HMDSiriStreamStartEvent *_streamStartMetric;	// 40 = 0x28
    HMDSiriRemoteInputServer *_server;	// 48 = 0x30
    HMDActiveSiriSessionInfo *_activeSessionInfo;	// 56 = 0x38
    NSNumber *_deviceType;	// 64 = 0x40
    NSObject<OS_xpc_object> *_boostMessage;	// 72 = 0x48
}

+ (id)logCategory;	// IMP=0x001000000055a92f
+ (id)siriSessionForUI;	// IMP=0x001000000055a927
- (void).cxx_destruct;	// IMP=0x000000000055a8bf
@property(retain, nonatomic) NSObject<OS_xpc_object> *boostMessage; // @synthesize boostMessage=_boostMessage;
@property(nonatomic) _Bool isActivationPending; // @synthesize isActivationPending=_isActivationPending;
@property(retain, nonatomic) NSNumber *deviceType; // @synthesize deviceType=_deviceType;
@property(retain, nonatomic) HMDActiveSiriSessionInfo *activeSessionInfo; // @synthesize activeSessionInfo=_activeSessionInfo;
@property(nonatomic) __weak HMDSiriRemoteInputServer *server; // @synthesize server=_server;
@property(retain, nonatomic) HMDSiriStreamStartEvent *streamStartMetric; // @synthesize streamStartMetric=_streamStartMetric;
@property(readonly, nonatomic) id <HMMLogEventSubmitting> logEventSubmitter; // @synthesize logEventSubmitter=_logEventSubmitter;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)_createArgsDictionaryWithError:(id)arg1;	// IMP=0x000000000055a719
- (void)sendMsg:(const char *)arg1 args:(id)arg2;	// IMP=0x000000000055a61a
- (_Bool)_startStream;	// IMP=0x000000000055a58e
- (void)maybeSubmitStreamStartMetricWithError:(id)arg1;	// IMP=0x000000000055a4c3
- (void)beginTrackingStreamStartMetricWithActivationType:(unsigned long long)arg1;	// IMP=0x000000000055a266
- (void)stopStream;	// IMP=0x0000000000559e4c
- (void)activeSiriSession:(id)arg1 didReceiveFirstPassMetadata:(id)arg2;	// IMP=0x0000000000559e46
- (void)activeSiriSession:(id)arg1 didReceiveButtonUpWithDuration:(id)arg2;	// IMP=0x0000000000559e40
- (void)activeSiriSessionDidStop:(id)arg1;	// IMP=0x0000000000559cfa
- (void)handleResetStream;	// IMP=0x0000000000559bcd
- (void)handleStopStream;	// IMP=0x0000000000559a82
- (void)handleStartStream;	// IMP=0x0000000000559811
- (void)publish;	// IMP=0x0000000000559677
- (void)invalidate;	// IMP=0x000000000055953d
- (void)activeSiriSession:(id)arg1 didCreateAudioFrame:(id)arg2 sequenceNumber:(id)arg3 gain:(id)arg4;	// IMP=0x00000000005592fc
- (void)setActiveBulkSendSession:(id)arg1;	// IMP=0x0000000000559105
- (id)activeSessionToken;	// IMP=0x00000000005590f3
- (void)deactivate;	// IMP=0x00000000005590ed
- (_Bool)activateAfterHubInitiation;	// IMP=0x0000000000558fce
- (_Bool)activateWithAccessory:(id)arg1 metadata:(id)arg2;	// IMP=0x0000000000558fc6
- (id)initWithIdentifier:(id)arg1 deviceType:(id)arg2;	// IMP=0x0000000000558f2f
- (id)initWithIdentifier:(id)arg1 logEventSubmitter:(id)arg2 deviceType:(id)arg3;	// IMP=0x0000000000558e54

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

