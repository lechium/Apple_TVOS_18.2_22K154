//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PosterBoard/NSObject-Protocol.h>

@class PREditingSceneViewController, PRMutablePosterConfiguration, PRPosterConfiguredProperties, UIViewController;

@protocol PREditingSceneViewControllerDelegate <NSObject>

@optional
- (void)editingSceneViewController:(PREditingSceneViewController *)arg1 wantsRemotePresentationOfViewController:(UIViewController *)arg2 contentScreenRect:(struct CGRect)arg3;
- (void)editingSceneViewController:(PREditingSceneViewController *)arg1 userDidDismissWithAction:(long long)arg2 updatedConfiguration:(PRMutablePosterConfiguration *)arg3 updatedConfiguredProperties:(PRPosterConfiguredProperties *)arg4 completion:(void (^)(NSError *))arg5;
- (struct PREditingSceneViewControllerTopButtonLayout)topButtonLayoutForEditingSceneViewController:(PREditingSceneViewController *)arg1;
@end

