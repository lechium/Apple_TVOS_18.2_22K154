//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIResponder.h>

@class NSString, UIWindow;

@interface TVScreenSaverSceneDelegate : UIResponder
{
    UIWindow *_window;	// 8 = 0x8
    long long _state;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000001526
@property(nonatomic) long long state; // @synthesize state=_state;
@property(retain, nonatomic) UIWindow *window; // @synthesize window=_window;
- (void)_presentWindowIfNeeded;	// IMP=0x00100000000013aa
- (void)sceneDidEnterBackground:(id)arg1;	// IMP=0x0010000000001393
- (void)sceneWillEnterForeground:(id)arg1;	// IMP=0x0010000000001318
- (void)sceneWillResignActive:(id)arg1;	// IMP=0x0010000000001312
- (void)sceneDidBecomeActive:(id)arg1;	// IMP=0x001000000000130c
- (void)sceneDidDisconnect:(id)arg1;	// IMP=0x00100000000012f8
- (void)scene:(id)arg1 willConnectToSession:(id)arg2 options:(id)arg3;	// IMP=0x00100000000011a9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

