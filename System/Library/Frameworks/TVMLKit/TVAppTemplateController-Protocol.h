//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TVMLKit/NSObject-Protocol.h>

@class UIViewController;

@protocol TVAppTemplateController <NSObject>

@optional
- (void)overrideVisualEffectDisablementNeeded:(_Bool *)arg1;
- (_Bool)supportsIdleModeVisualEffects;
- (void)loadFromViewController:(UIViewController *)arg1 completion:(void (^)(_Bool, _Bool))arg2;
@end

