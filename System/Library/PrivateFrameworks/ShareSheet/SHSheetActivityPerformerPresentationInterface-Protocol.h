//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ShareSheet/NSObject-Protocol.h>

@class SHSheetActivityPerformer, SHSheetActivityPresentationContext, UIViewController;

@protocol SHSheetActivityPerformerPresentationInterface <NSObject>
- (void)activityPerformerStopListeningForDismissalTransition:(SHSheetActivityPerformer *)arg1;
- (void)activityPerformer:(SHSheetActivityPerformer *)arg1 startListeningForDismissalTransitionWithCompletion:(void (^)(void))arg2;
- (void)activityPerformCleanUpPresentation:(SHSheetActivityPerformer *)arg1;
- (void)activityPerformer:(SHSheetActivityPerformer *)arg1 presentViewController:(UIViewController *)arg2 completion:(void (^)(void))arg3;
- (void)activityPerformer:(SHSheetActivityPerformer *)arg1 preparePresentationWithContext:(SHSheetActivityPresentationContext *)arg2 completion:(void (^)(UIViewController *))arg3;
- (_Bool)activityPerformer:(SHSheetActivityPerformer *)arg1 presentPopoverContentViewController:(UIViewController *)arg2;
- (_Bool)activityPerformerCanPresent:(SHSheetActivityPerformer *)arg1;
@end

