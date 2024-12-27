//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UITableViewCell, UITableViewCellEditControl, UITableViewCellReorderControl, UIView;

__attribute__((visibility("hidden")))
@interface UITableViewCellEditingData : NSObject
{
    UITableViewCell *_cell;	// 8 = 0x8
    long long _editingStyle;	// 16 = 0x10
    UITableViewCellEditControl *_editControl;	// 24 = 0x18
    UITableViewCellReorderControl *_reorderControl;	// 32 = 0x20
    UIView *_reorderSeparatorView;	// 40 = 0x28
    struct {
        unsigned int addedEditControlAsSubview:1;
        unsigned int addedReorderControlAsSubview:1;
        unsigned int addedReorderSeparatorViewAsSubview:1;
    } _flags;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000012df4d9
- (id)reorderSeparatorView:(_Bool)arg1;	// IMP=0x00000000012df3d5
- (id)reorderControl:(_Bool)arg1;	// IMP=0x00000000012df331
- (id)editControl:(_Bool)arg1;	// IMP=0x00000000012df216
@property(readonly, nonatomic) _Bool wantsMaskingWhileAnimatingDisabled;
- (void)dealloc;	// IMP=0x00000000012df163
- (id)initWithTableViewCell:(id)arg1 editingStyle:(long long)arg2;	// IMP=0x00000000012df0f4

@end

