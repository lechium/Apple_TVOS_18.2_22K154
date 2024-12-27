//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface TVSettingsCertificateTrustItem : NSObject
{
    _Bool _restricted;	// 8 = 0x8
    NSString *_displayName;	// 16 = 0x10
    struct __SecCertificate *_cert;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x002000000003ba96
@property(nonatomic, getter=isRestricted) _Bool restricted; // @synthesize restricted=_restricted;
@property(nonatomic) struct __SecCertificate *cert; // @synthesize cert=_cert;
@property(copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(nonatomic, getter=isTrusted) _Bool trusted;

@end

