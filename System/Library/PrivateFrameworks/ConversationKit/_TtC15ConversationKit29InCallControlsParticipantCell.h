//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE, UILabel, _TtC15ConversationKit19InCallControlButton;

@interface _TtC15ConversationKit29InCallControlsParticipantCell
{
    MISSING_TYPE *nameLabel;	// 40 = 0x28
    MISSING_TYPE *subtitleLabel;	// 48 = 0x30
    MISSING_TYPE *statusIcon;	// 56 = 0x38
    MISSING_TYPE *actionIcon;	// 64 = 0x40
    MISSING_TYPE *avatarView;	// 72 = 0x48
    MISSING_TYPE *actionButton;	// 80 = 0x50
    MISSING_TYPE *viewModel;	// 0 = 0x0
    MISSING_TYPE *cameraSymbolImage;	// 0 = 0x0
    MISSING_TYPE *copresenceSymbolImage;	// 0 = 0x0
    MISSING_TYPE *linkSymbolImage;	// 0 = 0x0
    MISSING_TYPE *messagesSymbolImage;	// 0 = 0x0
    MISSING_TYPE *$__lazy_storage_$_lmiApproveButton;	// 0 = 0x0
    MISSING_TYPE *$__lazy_storage_$_lmiRejectButton;	// 0 = 0x0
    MISSING_TYPE *$__lazy_storage_$_kickMemberButton;	// 0 = 0x0
    MISSING_TYPE *$__lazy_storage_$_contentViews;	// 0 = 0x0
    MISSING_TYPE *callDelegate;	// 0 = 0x0
    MISSING_TYPE *participantCellDelegate;	// 0 = 0x0
}

- (void).cxx_destruct;	// IMP=0x0000000000219b0f
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x0000000000219451
- (id)preferredLayoutAttributesFittingAttributes:(id)arg1;	// IMP=0x0000000000219220
- (void)layoutSubviews;	// IMP=0x0000000000219154
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000002175db
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000217007
@property(nonatomic, retain) _TtC15ConversationKit19InCallControlButton *kickMemberButton;
@property(nonatomic, retain) _TtC15ConversationKit19InCallControlButton *lmiRejectButton;
@property(nonatomic, retain) _TtC15ConversationKit19InCallControlButton *lmiApproveButton;
@property(nonatomic, readonly) _TtC15ConversationKit19InCallControlButton *actionButton; // @synthesize actionButton;
@property(nonatomic, readonly) UILabel *subtitleLabel; // @synthesize subtitleLabel;
@property(nonatomic, readonly) UILabel *nameLabel; // @synthesize nameLabel;

@end

