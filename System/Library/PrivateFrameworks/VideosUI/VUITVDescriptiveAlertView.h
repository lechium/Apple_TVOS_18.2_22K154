//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class UITextView, VUILabel;

__attribute__((visibility("hidden")))
@interface VUITVDescriptiveAlertView : UIView
{
    VUILabel *_titleLabel;	// 8 = 0x8
    UITextView *_descriptionTextView;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000001290c3
@property(retain, nonatomic) UITextView *descriptionTextView; // @synthesize descriptionTextView=_descriptionTextView;
@property(retain, nonatomic) VUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void)_updateDescriptionTextViewProperties:(_Bool)arg1;	// IMP=0x0000000000128f9f
- (void)layoutSubviews;	// IMP=0x0000000000128874
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000000001287f6

@end

