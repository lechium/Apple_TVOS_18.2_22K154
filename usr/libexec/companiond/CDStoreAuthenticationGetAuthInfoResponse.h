//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AMSDelegateAuthenticateRequest, NSString;

@interface CDStoreAuthenticationGetAuthInfoResponse : NSObject
{
    NSString *_deviceClass;	// 8 = 0x8
    NSString *_deviceName;	// 16 = 0x10
    AMSDelegateAuthenticateRequest *_authenticationRequest;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x002000000001e434
@property(retain, nonatomic) AMSDelegateAuthenticateRequest *authenticationRequest; // @synthesize authenticationRequest=_authenticationRequest;
@property(copy, nonatomic) NSString *deviceName; // @synthesize deviceName=_deviceName;
@property(copy, nonatomic) NSString *deviceClass; // @synthesize deviceClass=_deviceClass;
@property(readonly, copy) NSString *description;
- (id)makeRapportDictionary;	// IMP=0x001000000001e267
- (id)initWithRapportDictionary:(id)arg1;	// IMP=0x001000000001e151

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

