//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class VSFontCenter;

__attribute__((visibility("hidden")))
@interface VSOnscreenCodeWrapperView : UIView
{
    VSFontCenter *_fontCenter;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000018d23
@property(retain, nonatomic) VSFontCenter *fontCenter; // @synthesize fontCenter=_fontCenter;
- (id)createDetailsLabelWithTextColor:(id)arg1 withBoldWeight:(_Bool)arg2;	// IMP=0x0000000000018b92
- (id)createDescriptionLabel;	// IMP=0x0000000000018a16
- (id)createTitleLabel;	// IMP=0x00000000000188cf
- (void)updateUIWithViewModel:(id)arg1;	// IMP=0x00000000000188c9
- (id)init;	// IMP=0x0000000000018738

@end

