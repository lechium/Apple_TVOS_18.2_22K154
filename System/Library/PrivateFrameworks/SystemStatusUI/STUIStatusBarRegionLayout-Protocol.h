//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SystemStatusUI/NSObject-Protocol.h>

@class NSArray, STUIStatusBarRegion;
@protocol UILayoutItem;

@protocol STUIStatusBarRegionLayout <NSObject>
@property(readonly, nonatomic) _Bool canOverflowItems;
@property(readonly, nonatomic) _Bool fitsAllItems;
@property(copy, nonatomic) NSArray *displayItems;
@property(nonatomic) __weak STUIStatusBarRegion *region;
- (void)invalidate;

@optional
- (_Bool)mayFitDisplayItems:(NSArray *)arg1 inContainerItem:(id <UILayoutItem>)arg2;
@end

