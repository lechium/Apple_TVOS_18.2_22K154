//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <FrontBoardServices/FBSMutableSceneSettings.h>

@class BSColor, NSArray, NSDate, NSString, PFServerPosterPath, PRPosterAmbientConfiguration, PRPosterConfigurableOptions, PRPosterConfiguredProperties, PRPosterTitleStyleConfiguration;

@interface FBSMutableSceneSettings (PREditingScene)
@property(nonatomic, setter=pr_setFocusedQuickActionElementPosition:) long long pr_focusedQuickActionElementPosition;
@property(retain, nonatomic, setter=pr_setOverrideDate:) NSDate *pr_overrideDate;
@property(copy, nonatomic, setter=pr_setTitleString:) NSString *pr_titleString;
@property(nonatomic, getter=pr_areComplicationsDisallowed, setter=pr_setComplicationsDisallowed:) _Bool pr_complicationsDisallowed;
@property(nonatomic, getter=pr_areControlsHidden, setter=pr_setControlsHidden:) _Bool pr_controlsHidden;
@property(nonatomic, setter=pr_setUsesEditingLayout:) _Bool pr_usesEditingLayout;
@property(nonatomic, setter=pr_setTrailingTopButtonFrame:) struct CGRect pr_trailingTopButtonFrame;
@property(nonatomic, setter=pr_setLeadingTopButtonFrame:) struct CGRect pr_leadingTopButtonFrame;
@property(nonatomic, setter=pr_setEditingContext:) long long pr_editingContext;
@property(nonatomic, setter=pr_setEditingAcceptButtonType:) long long pr_editingAcceptButtonType;
@property(nonatomic, setter=pr_setEditingVariant:) long long pr_editingVariant;
@property(nonatomic, getter=pr_isCoveredByModalPresentation, setter=pr_setCoveredByModalPresentation:) _Bool pr_coveredByModalPresentation;
@property(nonatomic, setter=pr_setAdjustedLuminance:) long long pr_adjustedLuminance;
@property(nonatomic, setter=pr_setTitleAlignment:) unsigned long long pr_titleAlignment;
@property(nonatomic, setter=pr_setUnlockProgress:) double pr_unlockProgress;
@property(nonatomic, setter=pr_setVerticalTitleBoundingRect:) struct CGRect pr_verticalTitleBoundingRect;
@property(nonatomic, setter=pr_setHorizontalTitleBoundingRect:) struct CGRect pr_horizontalTitleBoundingRect;
@property(nonatomic, getter=pr_isAlternateDateEnabled, setter=pr_setAlternateDateEnabled:) _Bool pr_alternateDateEnabled;
@property(nonatomic, getter=pr_isParallaxDisallowed, setter=pr_setParallaxDisallowed:) _Bool pr_parallaxDisallowed;
@property(nonatomic, getter=pr_isParallaxEnabled, setter=pr_setParallaxEnabled:) _Bool pr_parallaxEnabled;
@property(nonatomic, getter=pr_isDepthEffectDisallowed, setter=pr_setDepthEffectDisallowed:) _Bool pr_depthEffectDisallowed;
@property(retain, nonatomic, setter=pr_setPosterAmbientConfiguration:) PRPosterAmbientConfiguration *pr_posterAmbientConfiguration;
@property(retain, nonatomic, setter=pr_setPosterTitleStyleConfiguration:) PRPosterTitleStyleConfiguration *pr_posterTitleStyleConfiguration;
@property(retain, nonatomic, setter=pr_setPosterConfiguredProperties:) PRPosterConfiguredProperties *pr_posterConfiguredProperties;
@property(retain, nonatomic, setter=pr_setPosterConfigurableOptions:) PRPosterConfigurableOptions *pr_posterConfigurableOptions;
@property(retain, nonatomic, setter=pr_setCaseColor:) BSColor *pr_caseColor;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic, getter=pr_isParallaxEffectivelyEnabled) _Bool pr_parallaxEffectivelyEnabled;
@property(readonly, nonatomic, getter=pui_isComplicationRowConfigured) _Bool pui_complicationRowConfigured;
@property(readonly, nonatomic, getter=pui_isComplicationSidebarConfigured) _Bool pui_complicationSidebarConfigured;
@property(readonly, nonatomic) long long pui_content;
@property(readonly, nonatomic) long long pui_deviceOrientation;
@property(readonly, nonatomic, getter=pui_isExtensionUserInteractionEnabled) _Bool pui_extensionUserInteractionEnabled;
@property(readonly, nonatomic, getter=pui_isFloatingLayerSnapshot) _Bool pui_floatingLayerSnapshot;
@property(readonly, nonatomic, getter=pui_isInlineComplicationConfigured) _Bool pui_inlineComplicationConfigured;
@property(readonly, nonatomic) _Bool pui_isInvalidated;
@property(readonly, nonatomic) long long pui_mode;
@property(readonly, nonatomic) long long pui_posterBoundingShape;
@property(readonly, nonatomic) PFServerPosterPath *pui_posterContents;
@property(readonly, nonatomic) unsigned long long pui_previewContent;
@property(readonly, copy, nonatomic) NSString *pui_previewIdentifier;
@property(readonly, copy, nonatomic) NSString *pui_provider;
@property(readonly, copy, nonatomic) NSString *pui_role;
@property(readonly, nonatomic) NSArray *pui_sceneAttachments;
@property(readonly, nonatomic) _Bool pui_showsComplications;
@property(readonly, nonatomic) _Bool pui_showsHeaderElements;
@property(readonly, nonatomic) unsigned long long pui_significantEventsCounter;
@property(readonly, nonatomic, getter=pui_isSnapshot) _Bool pui_snapshot;
@property(readonly, nonatomic) long long pui_userInterfaceStyle;
@property(readonly, nonatomic) unsigned long long pui_userTapEventsCounter;
@property(readonly, nonatomic) struct CGPoint pui_userTapLocation;
@property(readonly, nonatomic, getter=pui_isWallpaperObscured) _Bool pui_wallpaperObscured;
@property(readonly) Class superclass;
@end

