//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionViewLayoutAttributes.h>

__attribute__((visibility("hidden")))
@interface _TVCollectionViewFullScreenBrowserLayoutAttributes : UICollectionViewLayoutAttributes
{
    double _cornerRadius;	// 8 = 0x8
    double _parallaxOffset;	// 16 = 0x10
    double _normalizedPosition;	// 24 = 0x18
    double _maskAmount;	// 32 = 0x20
    struct UIEdgeInsets _contentBleed;	// 40 = 0x28
}

@property(nonatomic) double maskAmount; // @synthesize maskAmount=_maskAmount;
@property(nonatomic) double normalizedPosition; // @synthesize normalizedPosition=_normalizedPosition;
@property(nonatomic) double parallaxOffset; // @synthesize parallaxOffset=_parallaxOffset;
@property(nonatomic) struct UIEdgeInsets contentBleed; // @synthesize contentBleed=_contentBleed;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
- (id)description;	// IMP=0x0000000000001bdc
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000001a1b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000001934

@end

