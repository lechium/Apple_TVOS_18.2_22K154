//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC12DrawingBoard19HostedSceneObserver : NSObject
{
    MISSING_TYPE *scene;	// 8 = 0x8
    MISSING_TYPE *_hostHandle;	// 16 = 0x10
    MISSING_TYPE *_displayConfiguration;	// 32 = 0x20
    MISSING_TYPE *_level;	// 40 = 0x28
    MISSING_TYPE *_isForeground;	// 48 = 0x30
    MISSING_TYPE *_frame;	// 56 = 0x38
    MISSING_TYPE *_interfaceOrientation;	// 88 = 0x58
    MISSING_TYPE *_userInterfaceStyle;	// 96 = 0x60
    MISSING_TYPE *_deviceOrientation;	// 104 = 0x68
    MISSING_TYPE *_$observationRegistrar;	// 0 = 0x0
}

- (void).cxx_destruct;	// IMP=0x000000000001a690
- (id)init;	// IMP=0x000000000001a5d0
- (void)sceneWillInvalidate:(id)arg1;	// IMP=0x000000000001aaf0
- (id)scene:(id)arg1 handleActions:(id)arg2;	// IMP=0x000000000001aaa0
- (void)scene:(id)arg1 didUpdateClientSettings:(id)arg2;	// IMP=0x000000000001aa90
- (void)scene:(id)arg1 didUpdateSettings:(id)arg2;	// IMP=0x000000000001aa20
- (void)scene:(id)arg1 didUpdateHostHandle:(id)arg2;	// IMP=0x000000000001a9b0

@end

