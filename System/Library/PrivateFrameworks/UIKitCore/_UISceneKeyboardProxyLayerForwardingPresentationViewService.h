//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FBSSceneIdentityToken, NSHashTable, NSString, _UIRemoteViewController;

__attribute__((visibility("hidden")))
@interface _UISceneKeyboardProxyLayerForwardingPresentationViewService : NSObject
{
    NSHashTable *_observers;	// 8 = 0x8
    _UIRemoteViewController *_remoteViewController;	// 16 = 0x10
}

+ (_Bool)forwardsLayersToRootSystemShell;	// IMP=0x00100000014b3b21
- (void).cxx_destruct;	// IMP=0x00000000014b3cfc
@property(readonly, copy) NSString *description;
- (void)removeObserver:(id)arg1;	// IMP=0x00000000014b3c1a
- (void)addObserver:(id)arg1;	// IMP=0x00000000014b3b29
- (id)keyboardLayers;	// IMP=0x00000000014b3ade
@property(readonly, nonatomic) FBSSceneIdentityToken *keyboardOwnerIdentityToken;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

