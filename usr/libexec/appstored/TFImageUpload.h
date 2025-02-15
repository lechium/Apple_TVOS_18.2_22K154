//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface TFImageUpload : PBCodable
{
    NSString *_uploadUrl;	// 8 = 0x8
    NSString *_xiCloudVersionIdHeader;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00200000000c6db0
- (void).cxx_destruct;	// IMP=0x002000000007f15d
- (unsigned long long)hash;	// IMP=0x001000000007f110
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000007f058
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000007efba
- (void)writeTo:(id)arg1;	// IMP=0x001000000007ef2f
- (_Bool)readFrom:(id)arg1;	// IMP=0x001000000007ef22
- (id)dictionaryRepresentation;	// IMP=0x001000000007ed35
- (id)description;	// IMP=0x001000000007ec86
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000000c6e33
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00100000000c6db8

@end

