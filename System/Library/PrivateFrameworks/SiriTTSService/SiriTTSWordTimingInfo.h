//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSString;

@interface SiriTTSWordTimingInfo : NSObject
{
    MISSING_TYPE *startTime;	// 8 = 0x8
    MISSING_TYPE *textRange;	// 16 = 0x10
}

+ (void)setSupportsSecureCoding:(_Bool)arg1;	// IMP=0x0010000000015065
+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000015028
@property(nonatomic, readonly) NSString *description;
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000156c0
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000154e5
- (id)initWithStartTiming:(double)arg1 textRange:(struct _NSRange)arg2;	// IMP=0x00000000000153bd
- (id)init;	// IMP=0x00000000000152c0
@property(nonatomic) struct _NSRange textRange; // @synthesize textRange;
@property(nonatomic) double startTime; // @synthesize startTime;
@property(nonatomic, readonly) long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000015995

@end

