//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class NSString, UIFont;

__attribute__((visibility("hidden")))
@interface UIAutocorrectTextView : UIView
{
    NSString *m_string;	// 160 = 0xa0
    int m_type;	// 168 = 0xa8
    int m_edgeType;	// 172 = 0xac
    UIFont *m_textFont;	// 176 = 0xb0
    _Bool m_animating;	// 184 = 0xb8
    _Bool m_isLongString;	// 185 = 0xb9
}

- (void).cxx_destruct;	// IMP=0x0000000000be5cd0
@property(nonatomic) _Bool isLongString; // @synthesize isLongString=m_isLongString;
@property(nonatomic) _Bool animating; // @synthesize animating=m_animating;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x0000000000be5c41
- (_Bool)pointInside:(struct CGPoint)arg1 forEvent:(struct __GSEvent *)arg2;	// IMP=0x0000000000be5bc1
- (struct CGRect)_calculateRectForExpandedHitRegion;	// IMP=0x0000000000be5ae4
- (void)drawRect:(struct CGRect)arg1;	// IMP=0x0000000000be5385
- (void)setEdgeType:(int)arg1;	// IMP=0x0000000000be5283
- (id)initWithFrame:(struct CGRect)arg1 string:(id)arg2 type:(int)arg3 edgeType:(int)arg4;	// IMP=0x0000000000be4ff0

@end

