//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIResponder.h>

@class NSString, UIWindow;

@interface AppDelegate : UIResponder
{
    long long _defaultSceneAttemptCount;	// 8 = 0x8
    long long _preferredSceneAttemptCount;	// 16 = 0x10
}

@property(nonatomic) long long preferredSceneAttemptCount; // @synthesize preferredSceneAttemptCount=_preferredSceneAttemptCount;
@property(nonatomic) long long defaultSceneAttemptCount; // @synthesize defaultSceneAttemptCount=_defaultSceneAttemptCount;
- (_Bool)destroyScene:(id)arg1;	// IMP=0x0010000000002daf
- (void)requestSceneForSceneClientIdentifier:(id)arg1 scenePreferredLevel:(double)arg2 spatialConfiguration:(id)arg3;	// IMP=0x00100000000025c6
- (void)application:(id)arg1 didDiscardSceneSessions:(id)arg2;	// IMP=0x00100000000025c0
- (id)application:(id)arg1 configurationForConnectingSceneSession:(id)arg2 options:(id)arg3;	// IMP=0x00100000000023ff
- (_Bool)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;	// IMP=0x001000000000236f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) UIWindow *window;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"UIWindow",?,&,N


@end

