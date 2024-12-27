//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface HMDDataStreamControlProtocol : NSObject
{
    _Bool _helloMessageResponseReceived;	// 8 = 0x8
    _Bool _controlHandshakeComplete;	// 9 = 0x9
    NSNumber *_peerDataStreamProtocolVersion;	// 16 = 0x10
    NSString *_logIdentifier;	// 24 = 0x18
    NSNumber *_pendingHelloMessageIdentifier;	// 32 = 0x20
}

+ (id)logCategory;	// IMP=0x0010000000eacdac
- (void).cxx_destruct;	// IMP=0x0000000000eacb4f
@property(nonatomic) _Bool controlHandshakeComplete; // @synthesize controlHandshakeComplete=_controlHandshakeComplete;
@property(retain, nonatomic) NSNumber *pendingHelloMessageIdentifier; // @synthesize pendingHelloMessageIdentifier=_pendingHelloMessageIdentifier;
@property(readonly, copy) NSString *logIdentifier; // @synthesize logIdentifier=_logIdentifier;
@property(retain, nonatomic) NSNumber *peerDataStreamProtocolVersion; // @synthesize peerDataStreamProtocolVersion=_peerDataStreamProtocolVersion;
@property(nonatomic) _Bool helloMessageResponseReceived; // @synthesize helloMessageResponseReceived=_helloMessageResponseReceived;
- (void)_sendVersionRequestOnDataStream:(id)arg1;	// IMP=0x0000000000eac9d9
- (void)_sendHelloMessageOnDataStream:(id)arg1;	// IMP=0x0000000000eac8fc
- (void)dataStream:(id)arg1 didReceiveResponse:(id)arg2 header:(id)arg3 payload:(id)arg4;	// IMP=0x0000000000eac559
- (_Bool)isExpectedHelloControlMessage:(id)arg1 header:(id)arg2;	// IMP=0x0000000000eac41f
- (void)dataStream:(id)arg1 didReceiveRequest:(id)arg2 header:(id)arg3 payload:(id)arg4;	// IMP=0x0000000000eac073
- (void)dataStream:(id)arg1 didReceiveEvent:(id)arg2 header:(id)arg3 payload:(id)arg4;	// IMP=0x0000000000eac06d
- (void)dataStream:(id)arg1 didFailWithError:(id)arg2;	// IMP=0x0000000000eac067
- (void)dataStreamDidClose:(id)arg1;	// IMP=0x0000000000eac061
- (void)dataStreamInitiatedClose:(id)arg1;	// IMP=0x0000000000eac05b
- (void)dataStreamDidOpen:(id)arg1;	// IMP=0x0000000000eabf50
@property(readonly, nonatomic, getter=isActive) _Bool active;
- (id)initWithLogIdentifier:(id)arg1;	// IMP=0x0000000000eabea5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

