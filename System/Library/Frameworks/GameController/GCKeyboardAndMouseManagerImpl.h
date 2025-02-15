//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "GCKeyboardAndMouseManager.h"

@class GCKeyboard, GCMouse, NSMutableDictionary, NSObject, NSSet;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface GCKeyboardAndMouseManagerImpl : GCKeyboardAndMouseManager
{
    NSObject<OS_dispatch_queue> *_devicesQueue;	// 8 = 0x8
    NSMutableDictionary *_hidServiceSubjects;	// 16 = 0x10
    NSMutableDictionary *_mice;	// 24 = 0x18
    GCMouse *_currentMouse;	// 32 = 0x20
    NSSet *_keyboardHIDServices;	// 40 = 0x28
    GCKeyboard *_coalescedKeyboard;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000000e418
@property(readonly) GCKeyboard *coalescedKeyboard; // @synthesize coalescedKeyboard=_coalescedKeyboard;
- (_Bool)handleHIDEvent:(struct __IOHIDEvent *)arg1;	// IMP=0x000000000000e25d
- (void)removeDeviceWithServiceRef:(struct __IOHIDServiceClient *)arg1;	// IMP=0x000000000000dc26
- (_Bool)addDeviceWithServiceRef:(struct __IOHIDServiceClient *)arg1;	// IMP=0x000000000000d74f
- (void)setCurrentMouse:(id)arg1;	// IMP=0x000000000000cb90
@property(readonly) GCMouse *currentMouse;
- (id)mice;	// IMP=0x000000000000caa0
- (void)_onqueue_refreshKeyboards;	// IMP=0x000000000000c4c1
- (id)initWithQueue:(id)arg1;	// IMP=0x000000000000c3db

@end

