//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/_UISceneUIWindowHosting-Protocol.h>

@class UIScene;
@protocol _UISceneUIWindowEventRouting;

@protocol _UISceneUIWindowEventRouting <_UISceneUIWindowHosting>
+ (_Bool)_supportsEventUIWindowRouting;
@property(readonly, nonatomic) UIScene<_UISceneUIWindowEventRouting> *_sceneForKeyboardDisplay;
@property(readonly, nonatomic) _Bool _allowsEventUIWindowRouting;
@end

