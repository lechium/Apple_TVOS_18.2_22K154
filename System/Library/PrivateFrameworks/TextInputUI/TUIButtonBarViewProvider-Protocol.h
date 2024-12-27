//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TextInputUI/NSObject-Protocol.h>

@class TUIButtonBarItemView, UIBarButtonItem, UIBarButtonItemGroup;

@protocol TUIButtonBarViewProvider <NSObject>
- (void)preferredSizeDidChangeForGroup:(UIBarButtonItemGroup *)arg1;
- (void)preferredSizeDidChangeForButtonBarItem:(UIBarButtonItem *)arg1;
- (struct CGSize)preferredSizeForButtonBarItem:(UIBarButtonItem *)arg1;
- (void)configureButtonBarItemView:(TUIButtonBarItemView *)arg1 forItem:(UIBarButtonItem *)arg2 group:(UIBarButtonItemGroup *)arg3;
@end

