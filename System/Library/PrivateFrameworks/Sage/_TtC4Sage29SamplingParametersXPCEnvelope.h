//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSData;

@interface _TtC4Sage29SamplingParametersXPCEnvelope : NSObject
{
    MISSING_TYPE *_parameters;	// 8 = 0x8
}

+ (void)setSupportsSecureCoding:(_Bool)arg1;	// IMP=0x001000000001e848
+ (_Bool)supportsSecureCoding;	// IMP=0x001000000001e80b
- (void).cxx_destruct;	// IMP=0x000000000001e9fb
- (id)init;	// IMP=0x000000000001e9e8
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000001e97b
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000001e8ca
@property(nonatomic, readonly) NSData *_parameters;

@end

