//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/NSObject-Protocol.h>

@class UIColor, UIEvent, UIFont, UITableViewIndex, UITouch, UIView;

@protocol UITableViewIndexVisualStyle <NSObject>
@property(readonly, nonatomic) double minLineSpacing;
@property(readonly, nonatomic) double lineSpacing;
@property(readonly, nonatomic) double indexWidth;
@property(retain, nonatomic) UIFont *font;
@property(nonatomic) __weak UITableViewIndex *tableViewIndex;
- (id)initWithTableViewIndex:(UITableViewIndex *)arg1;

@optional
+ (UIView *)containerViewForTableViewIndex:(UITableViewIndex *)arg1;
- (void)didDrawEntryAtIndex:(long long)arg1 indexBounds:(struct CGRect)arg2 entryBounds:(struct CGRect)arg3 context:(struct CGContext *)arg4 originalColor:(UIColor *)arg5;
- (void)willDrawEntryAtIndex:(long long)arg1 indexBounds:(struct CGRect)arg2 entryBounds:(struct CGRect)arg3 context:(struct CGContext *)arg4 originalColor:(UIColor *)arg5;
- (void)drawRect:(struct CGRect)arg1;
- (void)handleTouch:(UITouch *)arg1 withEvent:(UIEvent *)arg2 touchedEntryIndex:(long long)arg3;
- (void)legibilityWeightOrPreferredContentSizeUpdated;
- (void)trackingDidEnd;
- (void)selectedSectionDidChange:(long long)arg1;
- (void)trackingDidBegin;
@end

