//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AccessibilityPhysicalInteraction/NSObject-Protocol.h>

@class UIColor;

@protocol AXPIFingerAppearanceDelegate <NSObject>
- (double)fingerWidth;
- (_Bool)showInnerCircle;
- (double)fingerInnerCircleInnerRadius;
- (double)fingerInnerRadius;
- (_Bool)showFingerOutlines;
- (double)innerCircleStrokeWidth;
- (double)strokeOutlineWidth;
- (double)strokeWidth;
- (UIColor *)pressedCircularProgressFillColor;
- (UIColor *)circularProgressFillColor;
- (UIColor *)strokeOutlineColor;
- (UIColor *)deselectedStrokeColor;
- (UIColor *)selectedStrokeColor;
- (UIColor *)deselectedFillColor;
- (UIColor *)selectedFillColor;
@end

