//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class UILabel;

__attribute__((visibility("hidden")))
@interface _UISmartReplyFeedbackInputDashboardView : UIView
{
    UILabel *_feedbackLabel;	// 8 = 0x8
}

+ (id)makeBackgroundView;	// IMP=0x00600000012857fd
- (void).cxx_destruct;	// IMP=0x000000000128588c
@property(retain, nonatomic) UILabel *feedbackLabel; // @synthesize feedbackLabel=_feedbackLabel;
- (id)makeImageWithSystemImageNamed:(id)arg1;	// IMP=0x00000000012856df
- (id)makeFeedbackLabelWithText:(id)arg1;	// IMP=0x00000000012855e9
- (id)makeButtonWithSystemImageNamed:(id)arg1 action:(id)arg2;	// IMP=0x00000000012853c5
- (id)init;	// IMP=0x0000000001285396

@end

