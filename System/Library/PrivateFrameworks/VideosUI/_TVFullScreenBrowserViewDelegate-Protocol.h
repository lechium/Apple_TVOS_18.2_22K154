//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <VideosUI/NSObject-Protocol.h>

@class NSIndexPath, _TVFullScreenBrowserView, _TVFullScreenBrowserViewCell;

@protocol _TVFullScreenBrowserViewDelegate <NSObject>

@optional
- (void)paradeView:(_TVFullScreenBrowserView *)arg1 didEndDisplayingCell:(_TVFullScreenBrowserViewCell *)arg2 atIndexPath:(NSIndexPath *)arg3;
- (void)paradeView:(_TVFullScreenBrowserView *)arg1 willDisplayCell:(_TVFullScreenBrowserViewCell *)arg2 atIndexPath:(NSIndexPath *)arg3;
- (void)paradeView:(_TVFullScreenBrowserView *)arg1 didCenterCell:(_TVFullScreenBrowserViewCell *)arg2 atIndexPath:(NSIndexPath *)arg3;
- (void)paradeView:(_TVFullScreenBrowserView *)arg1 willCenterCell:(_TVFullScreenBrowserViewCell *)arg2 atIndexPath:(NSIndexPath *)arg3;
- (NSIndexPath *)indexPathForPreferredCenteredCellInParadeView:(_TVFullScreenBrowserView *)arg1;
- (_Bool)paradeView:(_TVFullScreenBrowserView *)arg1 shouldShowItemAtIndexPath:(NSIndexPath *)arg2;
@end

