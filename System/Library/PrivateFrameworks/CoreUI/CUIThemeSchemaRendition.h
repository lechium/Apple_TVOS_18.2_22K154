//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CUIPSDGradient, NSDictionary;

@interface CUIThemeSchemaRendition
{
    NSDictionary *cuiInfo;	// 216 = 0xd8
    unsigned long long _nimages;	// 224 = 0xe0
    struct CGImage *_image[9];	// 232 = 0xe8
    struct CGRect _layoutRects[9];	// 304 = 0x130
    struct CGSize _intrinsicSize;	// 592 = 0x250
    struct CGRect _elementRect;	// 608 = 0x260
    long long _columnSlices;	// 640 = 0x280
    long long _rowSlices;	// 648 = 0x288
    CDStruct_3c058996 _contentInsets;	// 656 = 0x290
    CUIPSDGradient *_gradient;	// 688 = 0x2b0
}

- (id)scaleLocalizedString;	// IMP=0x000000000004b628
- (id)drawingLayerLocalizedString;	// IMP=0x000000000004b5be
- (id)dimension2LocalizedString;	// IMP=0x000000000004b564
- (id)dimension1LocalizedString;	// IMP=0x000000000004b50a
- (id)presentationStateLocalizedString;	// IMP=0x000000000004b4a0
- (id)sizeLocalizedString;	// IMP=0x000000000004b436
- (id)previousValueLocalizedString;	// IMP=0x000000000004b405
- (id)valueLocalizedString;	// IMP=0x000000000004b3d4
- (id)stringForValue:(unsigned short)arg1;	// IMP=0x000000000004b377
- (id)directionLocalizedString;	// IMP=0x000000000004b30d
- (id)previousStateLocalizedString;	// IMP=0x000000000004b2dc
- (id)stateLocalizedString;	// IMP=0x000000000004b2ab
- (id)stringForState:(unsigned short)arg1;	// IMP=0x000000000004b24e
- (id)typeLocalizedString;	// IMP=0x000000000004b209
- (id)description;	// IMP=0x000000000004b0db
- (unsigned short)localization;	// IMP=0x000000000004b0c4
- (unsigned short)appearance;	// IMP=0x000000000004b0ad
- (unsigned short)layer;	// IMP=0x000000000004b096
- (unsigned short)identifier;	// IMP=0x000000000004b07f
- (unsigned short)keyScale;	// IMP=0x000000000004b068
- (unsigned short)drawingLayer;	// IMP=0x000000000004b051
- (unsigned short)dimension2;	// IMP=0x000000000004b03a
- (unsigned short)dimension1;	// IMP=0x000000000004b023
- (unsigned short)size;	// IMP=0x000000000004b00c
- (unsigned short)previousValue;	// IMP=0x000000000004aff5
- (unsigned short)value;	// IMP=0x000000000004afde
- (unsigned short)direction;	// IMP=0x000000000004afc7
- (unsigned short)presentationState;	// IMP=0x000000000004afb0
- (unsigned short)previousState;	// IMP=0x000000000004af99
- (unsigned short)state;	// IMP=0x000000000004af82
- (struct CGPoint)renditionCoordinatesForPartFeatures:(long long)arg1;	// IMP=0x000000000004aeaa
- (long long)rowSlices;	// IMP=0x000000000004ae44
- (long long)columnSlices;	// IMP=0x000000000004adc5
- (id)defaultTemplateName;	// IMP=0x000000000004ad3a
- (id)referenceImage;	// IMP=0x000000000004ad32
- (id)coreUIOptions;	// IMP=0x000000000004ad21
- (CDStruct_3c058996)contentInsets;	// IMP=0x000000000004ad01
- (struct CGRect)edgeInsets:(_Bool)arg1;	// IMP=0x000000000004abbc
- (struct CGRect)alignmentRectangle;	// IMP=0x000000000004ab9c
- (id)slices;	// IMP=0x000000000004aad8
- (double)scale;	// IMP=0x000000000004aaa5
- (void)dealloc;	// IMP=0x000000000004aa11
- (id)initWithCoreUIOptions:(id)arg1 forKey:(const struct _renditionkeytoken *)arg2;	// IMP=0x000000000004a93e
@property(readonly, nonatomic) CUIPSDGradient *gradient;
@property(readonly, nonatomic) struct CGRect *sliceRects;
@property(readonly, nonatomic) unsigned long long numberOfSlices;

@end

