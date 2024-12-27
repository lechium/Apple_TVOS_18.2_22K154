//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class PXFeedViewModel, UIView;

@protocol PXFeedPlaceholderFactory
@property(readonly, nonatomic) _Bool supportsDynamicPlaceholderContentSize;
- (void)updatePlaceholderView:(UIView *)arg1 forFeedWithViewModel:(PXFeedViewModel *)arg2;
- (UIView *)createPlaceholderViewForFeedWithViewModel:(PXFeedViewModel *)arg1;
@end

