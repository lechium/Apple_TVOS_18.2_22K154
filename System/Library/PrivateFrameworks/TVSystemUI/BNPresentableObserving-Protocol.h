//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TVSystemUI/NSObject-Protocol.h>

@class NSString;
@protocol BNPresentable;

@protocol BNPresentableObserving <NSObject>

@optional
- (void)userInteractionDidEndForBannerForPresentable:(id <BNPresentable>)arg1;
- (void)userInteractionWillBeginForBannerForPresentable:(id <BNPresentable>)arg1;
- (void)presentableWillNotAppearAsBanner:(id <BNPresentable>)arg1 withReason:(NSString *)arg2;
- (void)presentableDidDisappearAsBanner:(id <BNPresentable>)arg1 withReason:(NSString *)arg2;
- (void)presentableWillDisappearAsBanner:(id <BNPresentable>)arg1 withReason:(NSString *)arg2;
- (void)presentableDidAppearAsBanner:(id <BNPresentable>)arg1;
- (void)presentableWillAppearAsBanner:(id <BNPresentable>)arg1;
@end

