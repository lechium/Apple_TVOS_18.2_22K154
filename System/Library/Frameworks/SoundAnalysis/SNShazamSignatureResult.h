//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSString, SHSignature;

@interface SNShazamSignatureResult : NSObject
{
    MISSING_TYPE *impl;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00100000000e5fc2
- (void).cxx_destruct;	// IMP=0x00000000000e62ab
- (id)init;	// IMP=0x00000000000e6275
@property(nonatomic, readonly) NSString *description;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000e5f77
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000e5ea2
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000e5cba
@property(nonatomic, readonly) long long hash;
- (id)copyWithZone:(void *)arg1;	// IMP=0x00000000000e59c7
- (id)initWithSignature:(id)arg1 sequenceNum:(unsigned long long)arg2;	// IMP=0x00000000000e58a7
@property(nonatomic) unsigned long long sequenceNum;
@property(nonatomic, retain) SHSignature *signature;
@property(nonatomic) CDStruct_3c1748cc timeRange;

@end

