//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class NSString, UIActivityIndicatorView, VUILabel, VUITextLayout;

__attribute__((visibility("hidden")))
@interface VUILoadingView : UIView
{
    double _delay;	// 8 = 0x8
    VUITextLayout *_titleTextLayout;	// 16 = 0x10
    VUITextLayout *_messageTextLayout;	// 24 = 0x18
    NSString *_loadingTitle;	// 32 = 0x20
    VUILabel *_loadingLabel;	// 40 = 0x28
    UIActivityIndicatorView *_indicatorView;	// 48 = 0x30
    VUILabel *_loadingMessageLabel;	// 56 = 0x38
    NSString *_loadingMessage;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00000000001a771a
@property(retain, nonatomic) NSString *loadingMessage; // @synthesize loadingMessage=_loadingMessage;
@property(retain, nonatomic) VUILabel *loadingMessageLabel; // @synthesize loadingMessageLabel=_loadingMessageLabel;
@property(retain, nonatomic) UIActivityIndicatorView *indicatorView; // @synthesize indicatorView=_indicatorView;
@property(retain, nonatomic) VUILabel *loadingLabel; // @synthesize loadingLabel=_loadingLabel;
@property(retain, nonatomic) NSString *loadingTitle; // @synthesize loadingTitle=_loadingTitle;
@property(retain, nonatomic) VUITextLayout *messageTextLayout; // @synthesize messageTextLayout=_messageTextLayout;
@property(retain, nonatomic) VUITextLayout *titleTextLayout; // @synthesize titleTextLayout=_titleTextLayout;
@property(nonatomic) double delay; // @synthesize delay=_delay;
- (void)configureMessageTextLayout:(id)arg1;	// IMP=0x00000000001a759e
- (void)configureTitleTextLayout:(id)arg1;	// IMP=0x00000000001a750f
- (void)layoutSubviews;	// IMP=0x00000000001a6e67
- (void)startTimer;	// IMP=0x00000000001a6c85
- (void)_setupLabels:(id)arg1 message:(id)arg2;	// IMP=0x00000000001a690a
- (id)initWithFrame:(struct CGRect)arg1 loadingTitle:(id)arg2 loadingMessage:(id)arg3;	// IMP=0x00000000001a67c5
- (id)initWithFrame:(struct CGRect)arg1 loadingTitle:(id)arg2;	// IMP=0x00000000001a67b1

@end

