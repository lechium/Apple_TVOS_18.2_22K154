//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/NSObject-Protocol.h>

@class FBSSceneIdentityToken, NSSet;
@protocol _UISceneKeyboardProxyLayerForwardingPresentationEnvironmentObserver;

@protocol _UISceneKeyboardProxyLayerForwardingPresentationEnvironment <NSObject>
+ (_Bool)forwardsLayersToRootSystemShell;
@property(readonly, nonatomic) FBSSceneIdentityToken *keyboardOwnerIdentityToken;
- (void)removeObserver:(id <_UISceneKeyboardProxyLayerForwardingPresentationEnvironmentObserver>)arg1;
- (void)addObserver:(id <_UISceneKeyboardProxyLayerForwardingPresentationEnvironmentObserver>)arg1;
- (NSSet *)keyboardLayers;
@end

