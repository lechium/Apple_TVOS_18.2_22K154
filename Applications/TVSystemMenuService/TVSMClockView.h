//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class UILabel;

@interface TVSMClockView : UIView
{
    UILabel *_dateLabel;	// 8 = 0x8
    UILabel *_timeLabel;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000002d1b0
@property(readonly, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(readonly, nonatomic) UILabel *dateLabel; // @synthesize dateLabel=_dateLabel;
- (void)_updateEffect;	// IMP=0x001000000002ce30
- (id)viewForLastBaselineLayout;	// IMP=0x001000000002ce00
- (id)viewForFirstBaselineLayout;	// IMP=0x001000000002cdd0
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x001000000002ccf0
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x001000000002c630

@end

