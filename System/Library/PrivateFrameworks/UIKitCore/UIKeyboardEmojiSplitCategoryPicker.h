//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface UIKeyboardEmojiSplitCategoryPicker
{
    _Bool _whiteText;	// 16 = 0x10
    unsigned long long _currentSelected;	// 24 = 0x18
    long long _lastUsedCategory;	// 32 = 0x20
}

@property _Bool whiteText; // @synthesize whiteText=_whiteText;
- (void)setRenderConfig:(id)arg1;	// IMP=0x0000000000dd46a8
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x0000000000dd45cf
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x0000000000dd40b8
- (id)symbolForRow:(long long)arg1;	// IMP=0x0000000000dd4013
- (id)titleForRow:(long long)arg1 fallback:(_Bool)arg2;	// IMP=0x0000000000dd3da1
- (void)updateCategorySelectedIndicator:(long long)arg1;	// IMP=0x0000000000dd3961
- (void)updateToCategory:(long long)arg1;	// IMP=0x0000000000dd3907
- (void)didMoveToWindow;	// IMP=0x0000000000dd36da
- (void)dealloc;	// IMP=0x0000000000dd3658
- (id)initWithFrame:(struct CGRect)arg1 keyplane:(id)arg2 key:(id)arg3;	// IMP=0x0000000000dd33f3

@end

