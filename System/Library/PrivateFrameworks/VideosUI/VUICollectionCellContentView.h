//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

__attribute__((visibility("hidden")))
@interface VUICollectionCellContentView : UIView
{
    UIView *_containerView;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000c9ff1
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
- (void)vui_sendSubviewToBack:(id)arg1;	// IMP=0x00000000000c9f63
- (void)vui_bringSubviewToFront:(id)arg1;	// IMP=0x00000000000c9efa
- (_Bool)vui_insertSubview:(id)arg1 aboveSubview:(id)arg2 oldView:(id)arg3;	// IMP=0x00000000000c9e58
- (_Bool)vui_addSubview:(id)arg1 oldView:(id)arg2;	// IMP=0x00000000000c9dc8
- (id)contentSubViews;	// IMP=0x00000000000c9d78
- (void)addSubview:(id)arg1;	// IMP=0x00000000000c9d0f
- (void)adjustContentPeekingWithTransform:(struct CGAffineTransform)arg1;	// IMP=0x00000000000c9cb0
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000000c9bbd

@end

