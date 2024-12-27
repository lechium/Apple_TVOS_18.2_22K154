//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ASCAdamID, NSArray, NSDictionary, NSNumber, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface ASCURLOffer : NSObject
{
    _Bool _isSensitive;	// 8 = 0x8
    ASCAdamID *_id;	// 16 = 0x10
    NSDictionary *_titles;	// 24 = 0x18
    NSDictionary *_subtitles;	// 32 = 0x20
    long long _flags;	// 40 = 0x28
    NSNumber *_ageRating;	// 48 = 0x30
    NSArray *_metrics;	// 56 = 0x38
    NSURL *_url;	// 64 = 0x40
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000054cb0
- (void).cxx_destruct;	// IMP=0x0000000000055b5e
@property(readonly, nonatomic) _Bool isSensitive; // @synthesize isSensitive=_isSensitive;
@property(readonly, nonatomic) NSURL *url; // @synthesize url=_url;
@property(readonly, nonatomic) NSArray *metrics; // @synthesize metrics=_metrics;
@property(readonly, nonatomic) NSNumber *ageRating; // @synthesize ageRating=_ageRating;
@property(readonly, nonatomic) long long flags; // @synthesize flags=_flags;
@property(readonly, copy, nonatomic) NSDictionary *subtitles; // @synthesize subtitles=_subtitles;
@property(readonly, copy, nonatomic) NSDictionary *titles; // @synthesize titles=_titles;
@property(readonly, copy, nonatomic) ASCAdamID *id; // @synthesize id=_id;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000055478
@property(readonly) unsigned long long hash;
- (id)offerWithMetrics:(id)arg1;	// IMP=0x0000000000055180
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000055175
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000054fad
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000054cb8
- (id)initWithID:(id)arg1 titles:(id)arg2 subtitles:(id)arg3 flags:(long long)arg4 ageRating:(id)arg5 metrics:(id)arg6 url:(id)arg7 isSensitive:(_Bool)arg8;	// IMP=0x0000000000054b42

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) Class superclass;

@end

