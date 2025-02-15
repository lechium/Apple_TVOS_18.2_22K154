//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface UIInterfaceActionConcreteVisualStyle : NSObject
{
}

- (id)newRepresentationViewForAction:(id)arg1;	// IMP=0x000000000024a812
- (void)configureForDismissingGroupView:(id)arg1 alongsideTransitionCoordinator:(id)arg2;	// IMP=0x000000000024a80c
- (void)configureForPresentingGroupView:(id)arg1 alongsideTransitionCoordinator:(id)arg2;	// IMP=0x000000000024a806
- (void)configureAttributesForActionRepresentationView:(id)arg1 actionViewState:(id)arg2;	// IMP=0x000000000024a800
- (id)actionPropertiesAffectingActionRepresentationViewStyling;	// IMP=0x000000000024a7f3
- (void)configureAttributesForActionScrollView:(id)arg1 groupViewState:(id)arg2;	// IMP=0x000000000024a7ed
- (id)actionGroupPropertiesAffectingActionsScrollViewStyling;	// IMP=0x000000000024a7e0
- (void)configureAttributesForImageView:(id)arg1 imageProperty:(id)arg2 actionViewState:(id)arg3;	// IMP=0x000000000024a7da
- (id)actionPropertiesAffectingImageViewStyling;	// IMP=0x000000000024a7cd
- (void)configureAttributesForTitleLabel:(id)arg1 classificationLabel:(id)arg2 actionViewState:(id)arg3;	// IMP=0x000000000024a7c7
- (id)actionPropertiesAffectingLabelStyling;	// IMP=0x000000000024a7ba
- (double)actionSpacingForGroupViewState:(id)arg1;	// IMP=0x000000000024a7b1
- (id)actionImageViewTintColorForImageProperty:(id)arg1 actionViewState:(id)arg2;	// IMP=0x000000000024a7a9
- (id)actionClassificationLabelColorForViewState:(id)arg1;	// IMP=0x000000000024a797
- (id)actionClassificationLabelFontForViewState:(id)arg1;	// IMP=0x000000000024a785
- (id)actionTitleLabelCompositingFilterForViewState:(id)arg1;	// IMP=0x000000000024a77d
- (id)actionTitleLabelColorForViewState:(id)arg1;	// IMP=0x000000000024a764
- (id)actionTitleLabelFontForViewState:(id)arg1;	// IMP=0x000000000024a741
- (id)newActionBackgroundViewForViewState:(id)arg1;	// IMP=0x000000000024a739
- (id)newSectionSeparatorViewForGroupViewState:(id)arg1;	// IMP=0x000000000024a731
- (id)newActionSeparatorViewForGroupViewState:(id)arg1;	// IMP=0x000000000024a729
- (id)newGroupBackgroundViewWithGroupViewState:(id)arg1;	// IMP=0x000000000024a721
- (id)actionViewStateForAttachingToActionRepresentationView:(id)arg1;	// IMP=0x000000000024a719
- (double)actionTitleLabelMinimumScaleFactor;	// IMP=0x000000000024a70b
- (_Bool)selectionFeedbackEnabled;	// IMP=0x000000000024a703
- (_Bool)selectByPressGestureRequired;	// IMP=0x000000000024a6fb
- (struct UIEdgeInsets)actionSequenceEdgeInsets;	// IMP=0x000000000024a6e8
- (double)actionSectionSpacing;	// IMP=0x000000000024a6df
- (_Bool)allowsZeroSizedSectionSeparators;	// IMP=0x000000000024a6d7
- (double)verticalImageContentSpacing;	// IMP=0x000000000024a6ce
- (double)horizontalImageContentSpacing;	// IMP=0x000000000024a6c5
- (struct CGSize)minimumActionContentSize;	// IMP=0x000000000024a6af
- (struct UIEdgeInsets)contentMargin;	// IMP=0x000000000024a69c
- (double)contentCornerRadius;	// IMP=0x000000000024a693
- (struct CGSize)maximumActionGroupContentSize;	// IMP=0x000000000024a609
- (id)defaultScreen;	// IMP=0x000000000024a5f0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000024a5de

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

