//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;
@protocol HMDCameraRemoteStreamReceiverProtocol, HMDCameraRemoteStreamSenderProtocol;

__attribute__((visibility("hidden")))
@interface HMDCameraRemoteStreamSession
{
    id <HMDCameraRemoteStreamSenderProtocol> _streamSender;	// 8 = 0x8
    id <HMDCameraRemoteStreamReceiverProtocol> _streamReceiver;	// 16 = 0x10
    unsigned long long _streamState;	// 24 = 0x18
}

+ (id)logCategory;	// IMP=0x00000000008994c5
- (void).cxx_destruct;	// IMP=0x000000000089943d
@property unsigned long long streamState; // @synthesize streamState=_streamState;
@property(readonly) id <HMDCameraRemoteStreamReceiverProtocol> streamReceiver; // @synthesize streamReceiver=_streamReceiver;
@property(readonly) id <HMDCameraRemoteStreamSenderProtocol> streamSender; // @synthesize streamSender=_streamSender;
- (id)logIdentifier;	// IMP=0x000000000089939f
@property(readonly, copy) NSString *stateDescription;
- (_Bool)containsState:(long long)arg1;	// IMP=0x0000000000899299
- (void)updateState:(long long)arg1;	// IMP=0x0000000000899132
- (id)initWithSessionID:(id)arg1 reachabilityPath:(unsigned long long)arg2 streamSender:(id)arg3 streamReceiver:(id)arg4 remoteCapabilities:(id)arg5 streamPreference:(id)arg6;	// IMP=0x0000000000899005

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

