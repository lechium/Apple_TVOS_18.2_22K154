//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PosterKit/PUISceneSettings-Protocol.h>

@class BSColor, PRPosterAmbientConfiguration, PRPosterConfigurableOptions, PRPosterConfiguredProperties, PRPosterTitleStyleConfiguration;

@protocol PRSceneSettings <PUISceneSettings>
@property(readonly, nonatomic) struct CGRect pr_verticalTitleBoundingRect;
@property(readonly, nonatomic) struct CGRect pr_horizontalTitleBoundingRect;
@property(readonly, nonatomic, getter=pr_isAlternateDateEnabled) _Bool pr_alternateDateEnabled;
@property(readonly, nonatomic, getter=pr_isParallaxEffectivelyEnabled) _Bool pr_parallaxEffectivelyEnabled;
@property(readonly, nonatomic, getter=pr_isParallaxDisallowed) _Bool pr_parallaxDisallowed;
@property(readonly, nonatomic, getter=pr_isParallaxEnabled) _Bool pr_parallaxEnabled;
@property(readonly, nonatomic, getter=pr_isDepthEffectDisallowed) _Bool pr_depthEffectDisallowed;
@property(readonly, nonatomic) PRPosterAmbientConfiguration *pr_posterAmbientConfiguration;
@property(readonly, nonatomic) PRPosterTitleStyleConfiguration *pr_posterTitleStyleConfiguration;
@property(readonly, nonatomic) PRPosterConfiguredProperties *pr_posterConfiguredProperties;
@property(readonly, nonatomic) PRPosterConfigurableOptions *pr_posterConfigurableOptions;
@property(readonly, nonatomic) BSColor *pr_caseColor;
@end

