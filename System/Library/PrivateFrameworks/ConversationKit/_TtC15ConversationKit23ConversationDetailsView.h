//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class MISSING_TYPE, UILabel, UIStackView;

@interface _TtC15ConversationKit23ConversationDetailsView : UIView
{
    MISSING_TYPE *recipe;	// 5036164 = 0x4cd884
    MISSING_TYPE *$__lazy_storage_$_conversationDetailsVStack;	// 0 = 0x0
    MISSING_TYPE *$__lazy_storage_$_conversationSubtitleHStack;	// 0 = 0x0
    MISSING_TYPE *leadingAccessoryView;	// 1640 = 0x668
    MISSING_TYPE *$__lazy_storage_$_conversationTitleLabel;	// 0 = 0x0
    MISSING_TYPE *$__lazy_storage_$_conversationSubtitleLabel;	// 0 = 0x0
    MISSING_TYPE *$__lazy_storage_$_chevronLabel;	// 0 = 0x0
    MISSING_TYPE *conversationSubtitleBadge;	// 5036164 = 0x4cd884
    MISSING_TYPE *presentationStyle;	// 0 = 0x0
    MISSING_TYPE *controlsManager;	// 0 = 0x0
}

- (void).cxx_destruct;	// IMP=0x0000000000050010
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000004ffdb
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x000000000004f5b9
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000004f3a2
@property(nonatomic) struct CGRect frame;
@property(nonatomic, retain) UILabel *chevronLabel;
@property(nonatomic, retain) UILabel *conversationSubtitleLabel;
@property(nonatomic, retain) UILabel *conversationTitleLabel;
@property(nonatomic, retain) UIStackView *conversationDetailsVStack;

@end

