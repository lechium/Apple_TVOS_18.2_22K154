//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UICollectionViewCell.h>

@class MISSING_TYPE, NSArray;

__attribute__((visibility("hidden")))
@interface _TtC9SeymourUI15TVQueueListCell : UICollectionViewCell
{
    MISSING_TYPE *state;	// 8 = 0x8
    MISSING_TYPE *delegate;	// 16 = 0x10
    MISSING_TYPE *itemInfo;	// 1651076143 = 0x62696c2f
    MISSING_TYPE *preferredOperation;	// 0 = 0x0
    MISSING_TYPE *layout;	// 0 = 0x0
    MISSING_TYPE *horizontalStackView;	// 0 = 0x0
    MISSING_TYPE *lockupView;	// 0 = 0x0
    MISSING_TYPE *deleteButton;	// 0 = 0x0
    MISSING_TYPE *grabButton;	// 0 = 0x0
    MISSING_TYPE *focusGuide;	// 0 = 0x0
}

- (void).cxx_destruct;	// IMP=0x00000000002ba540
- (void)prepareForReuse;	// IMP=0x00000000002ba4e0
- (void)handleDelete;	// IMP=0x00000000002ba310
- (void)handleGrab;	// IMP=0x00000000002ba220
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000002ba050
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000002ba020
@property(nonatomic, readonly) NSArray *preferredFocusEnvironments;
@property(nonatomic, readonly) _Bool canBecomeFocused;

@end

