//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Metal/_MTLObjectWithLabel.h>

@class IOSurfaceSharedEvent, MTLSimDevice, NSString;
@protocol MTLDevice;

__attribute__((visibility("hidden")))
@interface MTLSimSharedEvent : _MTLObjectWithLabel
{
    MTLSimDevice *_device;	// 24 = 0x18
    unsigned int _reference;	// 32 = 0x20
    unsigned long long _signaledValue;	// 40 = 0x28
}

@property(readonly) _Bool supportsRollback;
@property(readonly, nonatomic) IOSurfaceSharedEvent *IOSurfaceSharedEvent;
- (_Bool)waitUntilSignaledValue:(unsigned long long)arg1 timeoutMS:(unsigned long long)arg2;	// IMP=0x000000000000266a
@property unsigned long long signaledValue; // @dynamic signaledValue;
- (void)notifyListener:(id)arg1 atValue:(unsigned long long)arg2 block:(CDUnknownBlockType)arg3;	// IMP=0x000000000000236f
- (id)newSharedEventHandle;	// IMP=0x0000000000002218
- (unsigned int)eventRef;	// IMP=0x0000000000002208
@property(readonly) id <MTLDevice> device;
- (void)dealloc;	// IMP=0x000000000000211c
- (id)initWithDevice:(id)arg1 reference:(unsigned int)arg2;	// IMP=0x00000000000020b4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy) NSString *label;
@property(readonly) Class superclass;

@end

