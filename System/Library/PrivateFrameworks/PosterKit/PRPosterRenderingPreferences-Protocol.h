//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PosterKit/PRPosterPreferences-Protocol.h>

@class NSDate, PRPosterLegibilitySettings, UIColor;

@protocol PRPosterRenderingPreferences <PRPosterPreferences>
@property(readonly, nonatomic) NSDate *nextWakeDate;
@property(readonly, nonatomic) _Bool hideDimmingLayer;
@property(readonly, nonatomic) _Bool hideChrome;
@property(readonly, nonatomic) _Bool handlesWakeAnimation;
@property(readonly, nonatomic) UIColor *preferredProminentColor;
@property(readonly, nonatomic) PRPosterLegibilitySettings *desiredLegibilitySettings;
@property(readonly, nonatomic) _Bool userTapEventsRequested;
@property(readonly, nonatomic) unsigned long long significantEventOptions;
@property(readonly, nonatomic) unsigned long long significantEventTime;
@property(readonly, nonatomic) UIColor *averageColor;
@end

