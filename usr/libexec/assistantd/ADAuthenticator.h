//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData;
@protocol ADDeviceAuthenticationSession, OS_dispatch_queue;

@interface ADAuthenticator : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSData *_requestData;	// 16 = 0x10
    double _duration;	// 24 = 0x18
    unsigned long long _authStrategyVersion;	// 32 = 0x20
    id <ADDeviceAuthenticationSession> _deviceAuthSession;	// 40 = 0x28
    unsigned long long _deviceAuthSessionState;	// 48 = 0x30
}

+ (_Bool)authenticationAvailable;	// IMP=0x0040000000252a8e
- (void).cxx_destruct;	// IMP=0x0020000000252a5b
@property(retain, nonatomic, setter=_setRequestData:) NSData *_requestData; // @synthesize _requestData;
- (id)_createDeviceAuthenticationSessionForVersion:(unsigned long long)arg1;	// IMP=0x0010000000252a09
- (void)reset;	// IMP=0x0010000000252956
- (double)sessionInfoDuration;	// IMP=0x001000000025294b
- (id)signedDataForData:(id)arg1;	// IMP=0x00100000002527a0
- (void)setSessionInfo:(id)arg1 duration:(double)arg2;	// IMP=0x00100000002525c0
- (id)requestData;	// IMP=0x00100000002525ae
- (void)prepareWithCertificateData:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000002522d0
- (unsigned long long)authenticationStrategyVersion;	// IMP=0x00100000002522c6
- (int)state;	// IMP=0x0010000000252254
- (id)deviceAuthSession;	// IMP=0x0010000000252162
- (id)initWithTargetQueue:(id)arg1 authenticationStrategyVersion:(id)arg2;	// IMP=0x00100000002520b4

@end

