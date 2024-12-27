//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSString;

@interface SiriTTSSynthesisVoice : NSObject
{
    MISSING_TYPE *language;	// 8 = 0x8
    MISSING_TYPE *name;	// 24 = 0x18
    MISSING_TYPE *footprint;	// 40 = 0x28
    MISSING_TYPE *type;	// 48 = 0x30
    MISSING_TYPE *gender;	// 56 = 0x38
    MISSING_TYPE *version;	// 64 = 0x40
}

+ (void)setSupportsSecureCoding:(_Bool)arg1;	// IMP=0x0010000000020b8b
+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000020b4e
+ (int)voiceEnumForName:(id)arg1;	// IMP=0x00100000000eb4a8
- (void).cxx_destruct;	// IMP=0x000000000002170e
- (id)init;	// IMP=0x00000000000216f4
@property(nonatomic, readonly) NSString *assetKey;
@property(nonatomic, readonly) NSString *description;
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000002121d
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000020e59
@property(nonatomic, readonly) long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000020902
- (id)initWithLanguage:(id)arg1 name:(id)arg2;	// IMP=0x000000000002066a
@property(nonatomic) long long version; // @synthesize version;
@property(nonatomic) long long gender; // @synthesize gender;
@property(nonatomic) long long type; // @synthesize type;
@property(nonatomic) long long footprint; // @synthesize footprint;
@property(nonatomic, copy) NSString *name;
@property(nonatomic, copy) NSString *language;

@end

