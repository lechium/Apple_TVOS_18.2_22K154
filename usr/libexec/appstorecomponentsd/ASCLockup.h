//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ASCAdamID, ASCArtwork, ASCLockupDisplayContext, ASCScreenshots, ASCTrailers, ASCViewMetrics, NSArray, NSSet, NSString;
@protocol ASCOffer;

@interface ASCLockup : NSObject
{
    ASCAdamID *_id;	// 8 = 0x8
    NSString *_kind;	// 16 = 0x10
    ASCViewMetrics *_metrics;	// 24 = 0x18
    ASCArtwork *_icon;	// 32 = 0x20
    NSString *_heading;	// 40 = 0x28
    NSString *_title;	// 48 = 0x30
    NSString *_subtitle;	// 56 = 0x38
    NSString *_ageRating;	// 64 = 0x40
    id <ASCOffer> _offer;	// 72 = 0x48
    NSArray *_features;	// 80 = 0x50
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0020000000010add
- (void).cxx_destruct;	// IMP=0x002000000001224a
@property(readonly, copy, nonatomic) NSArray *features; // @synthesize features=_features;
@property(readonly, copy, nonatomic) id <ASCOffer> offer; // @synthesize offer=_offer;
@property(readonly, copy, nonatomic) NSString *ageRating; // @synthesize ageRating=_ageRating;
@property(readonly, copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, copy, nonatomic) NSString *heading; // @synthesize heading=_heading;
@property(readonly, copy, nonatomic) ASCArtwork *icon; // @synthesize icon=_icon;
@property(readonly, copy, nonatomic) ASCViewMetrics *metrics; // @synthesize metrics=_metrics;
@property(readonly, copy, nonatomic) NSString *kind; // @synthesize kind=_kind;
@property(readonly, copy, nonatomic) ASCAdamID *id; // @synthesize id=_id;
- (id)lockupWithOffer:(id)arg1;	// IMP=0x001000000001202d
- (id)lockupByAddingFeature:(id)arg1;	// IMP=0x0010000000011d77
- (id)featureWithClass:(Class)arg1;	// IMP=0x0010000000011c2d
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000001124a
@property(readonly) unsigned long long hash;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000011012
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0010000000010dc2
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000010ae5
- (id)initWithID:(id)arg1 kind:(id)arg2 metrics:(id)arg3 icon:(id)arg4 heading:(id)arg5 title:(id)arg6 subtitle:(id)arg7 ageRating:(id)arg8 offer:(id)arg9;	// IMP=0x0010000000010a9c
- (id)initWithID:(id)arg1 kind:(id)arg2 metrics:(id)arg3 icon:(id)arg4 heading:(id)arg5 title:(id)arg6 subtitle:(id)arg7 ageRating:(id)arg8 offer:(id)arg9 features:(id)arg10;	// IMP=0x0010000000010899
- (id)initWithID:(id)arg1 kind:(id)arg2 icon:(id)arg3 heading:(id)arg4 title:(id)arg5 subtitle:(id)arg6 ageRating:(id)arg7 offer:(id)arg8;	// IMP=0x00100000000122ca
@property(readonly, copy, nonatomic) NSString *productDescription;
@property(readonly, copy, nonatomic) NSString *productRatingBadge;
@property(readonly, nonatomic) float productRating;
@property(readonly, nonatomic) _Bool isEditorsChoice;
@property(readonly, copy, nonatomic) NSString *bundleID;
- (void)_buyParamsWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x0010000000013074
@property(readonly, copy, nonatomic) NSString *developerName;
@property(readonly, copy, nonatomic) ASCLockupDisplayContext *displayContext;
@property(readonly, copy, nonatomic) NSString *eula;
@property(readonly, copy, nonatomic) NSString *privacyPolicyUrl;
@property(readonly, copy, nonatomic) NSArray *subgenres;
@property(readonly, copy, nonatomic) NSString *genreID;
@property(readonly, copy, nonatomic) NSString *genreName;
@property(readonly, nonatomic) _Bool hasMedia;
@property(readonly, copy, nonatomic) ASCTrailers *trailers;
@property(readonly, copy, nonatomic) ASCScreenshots *screenshots;
@property(readonly, copy, nonatomic) NSString *productPageDescription;
@property(readonly, copy, nonatomic) NSString *productPageMetadata;
@property(readonly, copy, nonatomic) NSString *productVariantID;
@property(readonly, copy, nonatomic) NSString *contentProviderTeamID;
@property(readonly, copy, nonatomic) NSString *shortName;
- (id)lockupWithSignpostTags:(id)arg1;	// IMP=0x0010000000016c9a
@property(readonly, copy, nonatomic) NSSet *signpostTags;
@property(readonly, nonatomic) _Bool requiresSSOEntitlement;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) Class superclass;

@end

