//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UICollectionViewListCell, UIView;

__attribute__((visibility("hidden")))
@interface _UICollectionViewListCellVisualProvider : NSObject
{
    UICollectionViewListCell *_cell;	// 8 = 0x8
}

- (void)configureFocusedFloatingContentView:(id)arg1;	// IMP=0x000000000059821b
@property(readonly, nonatomic) UIView *accessoryManagerContainerView;
@property(readonly, nonatomic) _Bool canFocusProgrammatically;
@property(readonly, nonatomic) long long defaultFocusStyle;
- (id)initWithListCell:(id)arg1;	// IMP=0x0000000000598127

@end

