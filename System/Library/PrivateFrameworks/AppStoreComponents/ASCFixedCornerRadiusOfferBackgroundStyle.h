//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface ASCFixedCornerRadiusOfferBackgroundStyle
{
    double _cornerRadius;	// 8 = 0x8
}

@property(readonly, nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
- (double)cornerRadiusForImageSize:(struct CGSize)arg1 stretchableArea:(double)arg2;	// IMP=0x000000000003f258
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000003f18e
- (unsigned long long)hash;	// IMP=0x000000000003f12a
- (id)initWithCornerRadius:(double)arg1;	// IMP=0x000000000003f0e0

@end

