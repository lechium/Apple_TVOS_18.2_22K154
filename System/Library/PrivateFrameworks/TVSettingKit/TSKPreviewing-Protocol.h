//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TVSettingKit/NSObject-Protocol.h>

@class NSIndexPath, UIView, UIViewController;
@protocol TSKPreviewingDelegate;

@protocol TSKPreviewing <NSObject>
@property(nonatomic) __weak id <TSKPreviewingDelegate> previewingDelegate;
- (NSIndexPath *)defaultIndexPathForPreview;
- (UIViewController *)previewForItemAtIndexPath:(NSIndexPath *)arg1;
- (UIView *)sourceViewForSlideTransition;
- (_Bool)hasFullscreenPreview;
@end

