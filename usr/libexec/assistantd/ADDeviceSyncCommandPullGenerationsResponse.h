//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface ADDeviceSyncCommandPullGenerationsResponse : NSObject
{
    NSDictionary *_generationsByDataType;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00200000003819e0
+ (id)newWithBuilder:(CDUnknownBlockType)arg1;	// IMP=0x0010000000381993
- (void).cxx_destruct;	// IMP=0x0020000000381871
@property(readonly, copy, nonatomic) NSDictionary *generationsByDataType; // @synthesize generationsByDataType=_generationsByDataType;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0010000000381844
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000381767
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000038175c
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000003816b9
- (unsigned long long)hash;	// IMP=0x00100000003816a3
- (id)_descriptionWithIndent:(unsigned long long)arg1;	// IMP=0x001000000038161d
- (id)description;	// IMP=0x0010000000381609
- (id)initWithGenerationsByDataType:(id)arg1;	// IMP=0x0010000000381573
- (id)init;	// IMP=0x001000000038155f
- (id)initWithBuilder:(CDUnknownBlockType)arg1;	// IMP=0x001000000038146c
- (id)mutatedCopyWithMutator:(CDUnknownBlockType)arg1;	// IMP=0x00100000003819e8

@end

