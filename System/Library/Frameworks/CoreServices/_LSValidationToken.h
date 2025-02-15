//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData;

__attribute__((visibility("hidden")))
@interface _LSValidationToken : NSObject
{
    NSData *_payload;	// 8 = 0x8
    NSData *_nonce;	// 16 = 0x10
    NSData *_HMAC;	// 24 = 0x18
    id _owner;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000154bbc
- (void).cxx_destruct;	// IMP=0x0000000000154f08
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000154c50
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000154bc4
- (id)initWithPayload:(id)arg1;	// IMP=0x0000000000154606

@end

