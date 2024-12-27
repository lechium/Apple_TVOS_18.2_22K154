//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, NSString;

@protocol GKViceroyVoiceChatService
@property float remoteParticipantVolume;
@property(readonly, nonatomic) float outputMeterLevel;
@property(getter=isOutputMeteringEnabled) _Bool outputMeteringEnabled;
@property(getter=isMicrophoneMuted) _Bool microphoneMuted;
@property(readonly, nonatomic) float inputMeterLevel;
@property(getter=isInputMeteringEnabled) _Bool inputMeteringEnabled;
- (void)stopVoiceChatWithParticipantID:(NSString *)arg1;
- (_Bool)startVoiceChatWithParticipantID:(NSString *)arg1 error:(id *)arg2;
- (void)setClient:(id)arg1 gkVoiceChatService:(id)arg2;
- (void)receivedData:(NSData *)arg1 fromParticipantID:(NSString *)arg2;
- (id)getClient;
- (void)denyCallID:(long long)arg1;
- (_Bool)acceptCallID:(long long)arg1 error:(id *)arg2;
@end

