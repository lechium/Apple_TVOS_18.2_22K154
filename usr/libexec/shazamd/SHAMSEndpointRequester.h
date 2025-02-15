//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AMSMediaRequestEncoder, AMSURLSession, NSString;

@interface SHAMSEndpointRequester : NSObject
{
    AMSMediaRequestEncoder *_encoder;	// 8 = 0x8
    NSString *_clientIdentifier;	// 16 = 0x10
    long long _clientType;	// 24 = 0x18
    AMSURLSession *_session;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0020000000011e76
@property(retain, nonatomic) AMSURLSession *session; // @synthesize session=_session;
@property(nonatomic) long long clientType; // @synthesize clientType=_clientType;
@property(copy, nonatomic) NSString *clientIdentifier; // @synthesize clientIdentifier=_clientIdentifier;
@property(readonly, nonatomic) AMSMediaRequestEncoder *encoder; // @synthesize encoder=_encoder;
- (id)buildEncoderForSession:(id)arg1 clientType:(long long)arg2 clientIdentifier:(id)arg3;	// IMP=0x0010000000011c69
- (id)sessionConfiguration;	// IMP=0x0010000000011c00
- (void)performDownloadRequest:(id)arg1 filename:(id)arg2 fileType:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x0010000000011659
- (void)performRequest:(id)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000011203
- (_Bool)isTokenFailureError:(id)arg1;	// IMP=0x0010000000011174
- (void)handleResultData:(id)arg1 forResponse:(id)arg2 callback:(CDUnknownBlockType)arg3 error:(id)arg4;	// IMP=0x0010000000010f06
- (void)invalidate;	// IMP=0x0010000000010ec9
- (id)initWithClientIdentifier:(id)arg1 clientType:(long long)arg2;	// IMP=0x0010000000010dc9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

