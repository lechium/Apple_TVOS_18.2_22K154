//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ASCAdamID, NSArray, NSDictionary, NSNumber, NSString;
@protocol ASCOffer;

@interface ASCAlertOffer : NSObject
{
    ASCAdamID *_id;	// 8 = 0x8
    NSDictionary *_titles;	// 16 = 0x10
    NSDictionary *_subtitles;	// 24 = 0x18
    long long _flags;	// 32 = 0x20
    NSNumber *_ageRating;	// 40 = 0x28
    NSArray *_metrics;	// 48 = 0x30
    NSString *_alertTitle;	// 56 = 0x38
    NSString *_alertMessage;	// 64 = 0x40
    id <ASCOffer> _alertButtonOffer;	// 72 = 0x48
    NSString *_alertButtonTitle;	// 80 = 0x50
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0020000000003378
- (void).cxx_destruct;	// IMP=0x00200000000045fb
@property(readonly, copy, nonatomic) NSString *alertButtonTitle; // @synthesize alertButtonTitle=_alertButtonTitle;
@property(readonly, copy, nonatomic) id <ASCOffer> alertButtonOffer; // @synthesize alertButtonOffer=_alertButtonOffer;
@property(readonly, copy, nonatomic) NSString *alertMessage; // @synthesize alertMessage=_alertMessage;
@property(readonly, copy, nonatomic) NSString *alertTitle; // @synthesize alertTitle=_alertTitle;
@property(readonly, nonatomic) NSArray *metrics; // @synthesize metrics=_metrics;
@property(readonly, nonatomic) NSNumber *ageRating; // @synthesize ageRating=_ageRating;
@property(readonly, nonatomic) long long flags; // @synthesize flags=_flags;
@property(readonly, copy, nonatomic) NSDictionary *subtitles; // @synthesize subtitles=_subtitles;
@property(readonly, copy, nonatomic) NSDictionary *titles; // @synthesize titles=_titles;
@property(readonly, copy, nonatomic) ASCAdamID *id; // @synthesize id=_id;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000003ca5
@property(readonly) unsigned long long hash;
- (id)offerWithMetrics:(id)arg1;	// IMP=0x00100000000038f0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000038e5
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00100000000036a5
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000003380
- (id)initWithID:(id)arg1 titles:(id)arg2 subtitles:(id)arg3 flags:(long long)arg4 ageRating:(id)arg5 metrics:(id)arg6 alertTitle:(id)arg7 alertMessage:(id)arg8 alertButtonOffer:(id)arg9 alertButtonTitle:(id)arg10;	// IMP=0x0010000000003190

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) Class superclass;

@end

