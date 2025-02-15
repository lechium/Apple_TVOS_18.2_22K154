//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData;

@interface SDAutoUnlockRegistrationLockSession
{
    NSData *_requestData;	// 8 = 0x8
    long long _state;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000001966d2
@property(nonatomic) long long state; // @synthesize state=_state;
@property(retain, nonatomic) NSData *requestData; // @synthesize requestData=_requestData;
- (void)transport:(id)arg1 didReceiveMessageACKForIdentifier:(id)arg2;	// IMP=0x0010000000196685
- (void)transport:(id)arg1 didReceivePayload:(id)arg2 type:(unsigned short)arg3 deviceID:(id)arg4;	// IMP=0x00100000001964e3
- (void)handleFinalize:(id)arg1;	// IMP=0x0010000000196051
- (void)handleInitialResponse:(id)arg1;	// IMP=0x0010000000195a33
- (void)sendInitialRequest;	// IMP=0x00100000001957e5
- (void)onQueue_start;	// IMP=0x0010000000195724
- (void)start;	// IMP=0x001000000019569d
- (id)initWithDevice:(id)arg1 sessionID:(id)arg2;	// IMP=0x001000000019565a

@end

