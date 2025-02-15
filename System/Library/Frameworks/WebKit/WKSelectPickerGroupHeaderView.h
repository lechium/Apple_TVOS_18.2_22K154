//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

__attribute__((visibility("hidden")))
@interface WKSelectPickerGroupHeaderView : UIView
{
    struct RetainPtr<UILabel> _label;	// 8 = 0x8
    struct RetainPtr<UIImageView> _collapseIndicatorView;	// 16 = 0x10
    struct WeakObjCPtr<WKSelectPickerTableViewController> _tableViewController;	// 24 = 0x18
    _Bool _collapsed;	// 32 = 0x20
    _Bool _isCollapsible;	// 33 = 0x21
    long long _section;	// 40 = 0x28
}

+ (double)preferredHeight;	// IMP=0x00600000004aebc8
+ (double)preferredMargin;	// IMP=0x00600000004aebba
+ (id)preferredFont;	// IMP=0x00600000004aeaac
- (id).cxx_construct;	// IMP=0x00000000004aec8e
- (void).cxx_destruct;	// IMP=0x00000000004aec33
@property(readonly, nonatomic) _Bool isCollapsible; // @synthesize isCollapsible=_isCollapsible;
@property(readonly, nonatomic) long long section; // @synthesize section=_section;
- (void)didTapHeader:(id)arg1;	// IMP=0x00000000004aea54
- (void)setTableViewController:(id)arg1;	// IMP=0x00000000004aea40
- (void)setCollapsed:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x00000000004ae881
- (id)initWithGroupName:(id)arg1 section:(long long)arg2 isCollapsible:(_Bool)arg3;	// IMP=0x00000000004ae197

@end

