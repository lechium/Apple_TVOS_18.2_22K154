//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface CCDDeviceIdentitySupport : NSObject
{
}

+ (id)requestWithPayload:(id)arg1 URL:(id)arg2 privateKey:(id)arg3 clientCertificates:(id)arg4 outError:(id *)arg5;	// IMP=0x00400000000021eb
+ (id)_signPayloadData:(id)arg1 withPrivateKey:(id)arg2 outError:(id *)arg3;	// IMP=0x0010000000001f8f
+ (void)retrieveClientCertificateWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000001ee5

@end

