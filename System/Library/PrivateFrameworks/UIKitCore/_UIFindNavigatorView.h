//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIInputView.h"

@class UIAction, UIButton, UILabel, UIView, _UIFindNavigatorSearchTextField, _UIFindNavigatorViewLayout;
@protocol _UIFindNavigatorViewDelegate;

__attribute__((visibility("hidden")))
@interface _UIFindNavigatorView : UIInputView
{
    struct {
        UIView *left;
        UIView *right;
        UIView *bottom;
    } _separatorViews;	// 160 = 0xa0
    struct {
        _Bool initialized;
        UIAction *find;
        UIAction *replace;
        UIAction *matchCase;
        UIAction *wholeWords;
    } _searchMenu;	// 184 = 0xb8
    _UIFindNavigatorViewLayout *_layout;	// 224 = 0xe0
    _Bool _matchCase;	// 232 = 0xe8
    _Bool _wholeWords;	// 233 = 0xe9
    _Bool _usesOpaqueBackground;	// 234 = 0xea
    _Bool _replaceButtonEnabled;	// 235 = 0xeb
    _Bool _intrinsicHeightDerivedFromAssistantBar;	// 236 = 0xec
    id <_UIFindNavigatorViewDelegate> _findNavigatorDelegate;	// 240 = 0xf0
    long long _mode;	// 248 = 0xf8
    unsigned long long _visibleSeparatorEdges;	// 256 = 0x100
    UIButton *_doneButton;	// 264 = 0x108
    UIButton *_settingsButton;	// 272 = 0x110
    UILabel *_resultCountLabel;	// 280 = 0x118
    long long _assistantBarStyle;	// 288 = 0x120
    _UIFindNavigatorSearchTextField *_searchTextField;	// 296 = 0x128
    _UIFindNavigatorSearchTextField *_replaceTextField;	// 304 = 0x130
    UIButton *_nextResultButton;	// 312 = 0x138
    UIButton *_previousResultButton;	// 320 = 0x140
    UIButton *_replaceButton;	// 328 = 0x148
}

- (void).cxx_destruct;	// IMP=0x0000000000735dc5
@property(readonly, nonatomic) UIButton *replaceButton; // @synthesize replaceButton=_replaceButton;
@property(readonly, nonatomic) UIButton *previousResultButton; // @synthesize previousResultButton=_previousResultButton;
@property(readonly, nonatomic) UIButton *nextResultButton; // @synthesize nextResultButton=_nextResultButton;
@property(readonly, nonatomic) _UIFindNavigatorSearchTextField *replaceTextField; // @synthesize replaceTextField=_replaceTextField;
@property(readonly, nonatomic) _UIFindNavigatorSearchTextField *searchTextField; // @synthesize searchTextField=_searchTextField;
@property(nonatomic) long long assistantBarStyle; // @synthesize assistantBarStyle=_assistantBarStyle;
@property(nonatomic) _Bool intrinsicHeightDerivedFromAssistantBar; // @synthesize intrinsicHeightDerivedFromAssistantBar=_intrinsicHeightDerivedFromAssistantBar;
@property(nonatomic) _Bool replaceButtonEnabled; // @synthesize replaceButtonEnabled=_replaceButtonEnabled;
@property(readonly, nonatomic) UILabel *resultCountLabel; // @synthesize resultCountLabel=_resultCountLabel;
@property(readonly, nonatomic) UIButton *settingsButton; // @synthesize settingsButton=_settingsButton;
@property(readonly, nonatomic) UIButton *doneButton; // @synthesize doneButton=_doneButton;
@property(nonatomic) unsigned long long visibleSeparatorEdges; // @synthesize visibleSeparatorEdges=_visibleSeparatorEdges;
@property(nonatomic) _Bool usesOpaqueBackground; // @synthesize usesOpaqueBackground=_usesOpaqueBackground;
@property(nonatomic) _Bool wholeWords; // @synthesize wholeWords=_wholeWords;
@property(nonatomic) _Bool matchCase; // @synthesize matchCase=_matchCase;
@property(nonatomic) long long mode; // @synthesize mode=_mode;
@property(nonatomic) __weak id <_UIFindNavigatorViewDelegate> findNavigatorDelegate; // @synthesize findNavigatorDelegate=_findNavigatorDelegate;
- (void)layoutSubviews;	// IMP=0x0000000000735889
- (void)find:(id)arg1;	// IMP=0x000000000073583d
- (id)_linearFocusMovementSequences;	// IMP=0x000000000073574d
- (_Bool)_canResignIfContainsFirstResponder;	// IMP=0x0000000000735745
- (_Bool)resignFirstResponder;	// IMP=0x00000000007356ba
- (_Bool)becomeFirstResponder;	// IMP=0x0000000000735615
- (struct CGSize)intrinsicContentSize;	// IMP=0x000000000073555d
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000000073554b
- (void)_handleSearchMenuItem:(id)arg1;	// IMP=0x00000000007353e1
- (void)_invalidateSearchSession;	// IMP=0x00000000007353a5
- (id)suggestedFindMenuItems;	// IMP=0x0000000000734ed6
- (_Bool)_replacementEnabled;	// IMP=0x0000000000734dc0
- (void)_preferredBackgroundColorChanged;	// IMP=0x0000000000734c9f
- (void)_navigatorHostingTypeChanged;	// IMP=0x0000000000734c99
- (void)willMoveToWindow:(id)arg1;	// IMP=0x0000000000734c58
- (void)safeAreaInsetsDidChange;	// IMP=0x0000000000734c17
- (void)_preferredContentSizeDidChange;	// IMP=0x0000000000734c05
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0000000000734b7d
- (id)_createNavigatorLayoutForTraitCollection:(id)arg1;	// IMP=0x0000000000734ad7
- (void)_setNavigatorLayout:(id)arg1;	// IMP=0x0000000000734937
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000733b30

@end

