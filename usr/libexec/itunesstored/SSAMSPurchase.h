//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AppleMediaServices/AMSPurchase.h>

@class NSNumber, NSString;

@interface SSAMSPurchase : AMSPurchase
{
    _Bool _preauthenticated;	// 8 = 0x8
    NSNumber *_accountIdentifier;	// 16 = 0x10
    NSString *_mediaType;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0020000000177241
- (void).cxx_destruct;	// IMP=0x002000000017757b
@property(nonatomic, getter=isPreauthenticated) _Bool preauthenticated; // @synthesize preauthenticated=_preauthenticated;
@property(copy, nonatomic) NSString *mediaType; // @synthesize mediaType=_mediaType;
@property(copy, nonatomic) NSNumber *accountIdentifier; // @synthesize accountIdentifier=_accountIdentifier;
- (_Bool)isEqualToPurchase:(id)arg1;	// IMP=0x001000000017737c
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000177310
- (unsigned long long)hash;	// IMP=0x0010000000177249
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000177133
- (void)encodeWithCoder:(id)arg1;	// IMP=0x001000000017703b

@end

