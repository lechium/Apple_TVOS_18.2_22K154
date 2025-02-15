//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSDate;

@interface SDAutoUnlockCachedEscrowSecret : NSObject
{
    NSData *_escrowSecret;	// 8 = 0x8
    NSDate *_expireDate;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000000ba9a2
@property(retain, nonatomic) NSDate *expireDate; // @synthesize expireDate=_expireDate;
@property(retain) NSData *escrowSecret; // @synthesize escrowSecret=_escrowSecret;
- (id)getEscrowSecretCopyIfValid;	// IMP=0x00100000000ba8e3
- (_Bool)isValid;	// IMP=0x00100000000ba7fb
- (id)initWithEscrowSecret:(id)arg1;	// IMP=0x00100000000ba69b

@end

