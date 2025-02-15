//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface PAMediaConversionServiceAddPFMetadataPolicy
{
    NSString *_key;	// 8 = 0x8
    id _value;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0040000000003323
+ (id)policyWithKey:(id)arg1 value:(id)arg2;	// IMP=0x001000000000329b
- (void).cxx_destruct;	// IMP=0x0020000000003671
@property(retain) id value; // @synthesize value=_value;
@property(retain) NSString *key; // @synthesize key=_key;
- (id)processMetadata:(id)arg1;	// IMP=0x00100000000034cc
- (_Bool)metadataNeedsProcessing:(id)arg1;	// IMP=0x00100000000034c4
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0010000000003416
- (id)initWithCoder:(id)arg1;	// IMP=0x001000000000332b

@end

