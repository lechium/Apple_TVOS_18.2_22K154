//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIScrollView, UIView;

@protocol _UIWebRotationDelegate
- (_Bool)considerHeightOfRectOfInterestForRotation;
- (struct CGRect)activeRectForRectOfInterest:(struct CGRect)arg1;
- (double)heightToKeepVisible;
- (double)minimumVerticalContentOffset;
- (struct CGRect)rectOfInterestForRotation;
- (double)minimumScaleForSize:(struct CGSize)arg1;
- (void)updateBoundariesOfScrollView:(UIScrollView *)arg1 withScales:(CDStruct_39925896)arg2;
- (CDStruct_39925896)scalesForContainerSize:(struct CGSize)arg1;
- (double)currentDocumentScale;
- (double)zoomedDocumentScale;
- (UIView *)contentView;
- (UIScrollView *)enclosingScrollView;

@optional
- (struct CGSize)contentSizeForScrollView:(UIScrollView *)arg1;
- (double)scaleForProposedNewScale:(double)arg1 andOldScale:(double)arg2;
@end

