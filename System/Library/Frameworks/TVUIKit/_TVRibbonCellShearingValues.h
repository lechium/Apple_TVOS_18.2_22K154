//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _TVRibbonCellShearingValues : NSObject
{
    struct CGPoint _shearedMaskingViewCenter;	// 8 = 0x8
    struct CGPoint _maskedContentViewCenter;	// 24 = 0x18
    struct CGRect _shearedMaskingViewBounds;	// 40 = 0x28
    struct CGRect _maskedContentViewBounds;	// 72 = 0x48
}

@property(nonatomic) struct CGPoint maskedContentViewCenter; // @synthesize maskedContentViewCenter=_maskedContentViewCenter;
@property(nonatomic) struct CGRect maskedContentViewBounds; // @synthesize maskedContentViewBounds=_maskedContentViewBounds;
@property(nonatomic) struct CGPoint shearedMaskingViewCenter; // @synthesize shearedMaskingViewCenter=_shearedMaskingViewCenter;
@property(nonatomic) struct CGRect shearedMaskingViewBounds; // @synthesize shearedMaskingViewBounds=_shearedMaskingViewBounds;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000036518

@end

