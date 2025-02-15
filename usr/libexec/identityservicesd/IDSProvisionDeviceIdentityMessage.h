//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <FTServices/FTIDSMessage.h>

@class NSArray, NSData, NSString;
@protocol IDSBaseMessageSigningSession;

@interface IDSProvisionDeviceIdentityMessage : FTIDSMessage
{
    NSData *_csr;	// 232 = 0xe8
    NSData *_validationData;	// 240 = 0xf0
    NSData *_responseCert;	// 248 = 0xf8
    NSString *_responseUserID;	// 256 = 0x100
    NSArray *_responseHandles;	// 264 = 0x108
}

- (void).cxx_destruct;	// IMP=0x00200000001e5797
@property(retain) NSArray *responseHandles; // @synthesize responseHandles=_responseHandles;
@property(retain) NSString *responseUserID; // @synthesize responseUserID=_responseUserID;
@property(retain) NSData *responseCert; // @synthesize responseCert=_responseCert;
@property(copy) NSData *validationData; // @synthesize validationData=_validationData;
@property(copy) NSData *csr; // @synthesize csr=_csr;
- (void)handleResponseDictionary:(id)arg1;	// IMP=0x00100000001e549d
- (id)messageBody;	// IMP=0x00100000001e53be
- (id)requiredKeys;	// IMP=0x00000000001e5384
- (_Bool)requiresPushTokenKeys;	// IMP=0x00100000001e537c
- (double)anisetteHeadersTimeout;	// IMP=0x00100000001e536e
- (_Bool)wantsBinaryPush;	// IMP=0x00100000001e5366
- (_Bool)wantsCompressedBody;	// IMP=0x00100000001e535e
- (_Bool)wantsHTTPHeaders;	// IMP=0x00100000001e5356
- (_Bool)wantsBagKey;	// IMP=0x00100000001e534e
- (_Bool)wantsBodySignature;	// IMP=0x00100000001e5346
- (_Bool)wantsBodySigningOnly;	// IMP=0x00100000001e533e
- (id)bagKey;	// IMP=0x00100000001e5331
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000001e520e

// Remaining properties
@property(copy) id <IDSBaseMessageSigningSession> signingSession;

@end

