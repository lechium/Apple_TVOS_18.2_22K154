//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIBarPositioningDelegate-Protocol.h>

@class UINavigationBar, UINavigationItem;

@protocol UINavigationBarDelegate <UIBarPositioningDelegate>

@optional
- (void)navigationBar:(UINavigationBar *)arg1 didPopItem:(UINavigationItem *)arg2;
- (_Bool)navigationBar:(UINavigationBar *)arg1 shouldPopItem:(UINavigationItem *)arg2;
- (void)navigationBar:(UINavigationBar *)arg1 didPushItem:(UINavigationItem *)arg2;
- (_Bool)navigationBar:(UINavigationBar *)arg1 shouldPushItem:(UINavigationItem *)arg2;
@end

