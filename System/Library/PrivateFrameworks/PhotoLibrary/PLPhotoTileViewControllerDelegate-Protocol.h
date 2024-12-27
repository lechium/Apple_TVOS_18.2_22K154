//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotoLibrary/NSObject-Protocol.h>

@class PLPhotoTileViewController, UIView;
@protocol UILayoutSupport;

@protocol PLPhotoTileViewControllerDelegate <NSObject>
- (void)photoTileViewControllerDidEndGesture:(PLPhotoTileViewController *)arg1;
- (void)photoTileViewControllerWillBeginGesture:(PLPhotoTileViewController *)arg1;
- (void)photoTileViewControllerDoubleTap:(PLPhotoTileViewController *)arg1;
- (void)photoTileViewControllerSingleTap:(PLPhotoTileViewController *)arg1;
- (void)photoTileViewControllerCancelImageRequests:(PLPhotoTileViewController *)arg1;
- (void)photoTileViewControllerRequestsFullSizeImage:(PLPhotoTileViewController *)arg1;
- (void)photoTileViewControllerRequestsFullScreenImage:(PLPhotoTileViewController *)arg1;
- (void)photoTileViewController:(PLPhotoTileViewController *)arg1 didDisappear:(_Bool)arg2;
- (void)photoTileViewController:(PLPhotoTileViewController *)arg1 didAppear:(_Bool)arg2;
- (void)photoTileViewController:(PLPhotoTileViewController *)arg1 willAppear:(_Bool)arg2;

@optional
- (id <UILayoutSupport>)photoTileViewControllerTopLayoutGuide:(PLPhotoTileViewController *)arg1;
- (UIView *)photoTileViewControllerCustomCenterOverlay:(PLPhotoTileViewController *)arg1;
- (_Bool)photoTileViewControllerCanShowCenterOverlay:(PLPhotoTileViewController *)arg1;
- (_Bool)isPhotoTileParentPageControllerAnimating:(PLPhotoTileViewController *)arg1;
- (_Bool)photoTileViewControllerAllowsEditing:(PLPhotoTileViewController *)arg1;
@end

