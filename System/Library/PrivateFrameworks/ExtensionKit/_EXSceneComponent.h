//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UIScene;

__attribute__((visibility("hidden")))
@interface _EXSceneComponent : NSObject
{
    UIScene *_scene;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000000b41a
@property(nonatomic, getter=_scene, setter=_setScene:) __weak UIScene *_scene; // @synthesize _scene;
- (void)_sceneWillInvalidate:(id)arg1;	// IMP=0x000000000000b331
- (id)initWithScene:(id)arg1;	// IMP=0x000000000000b173

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

