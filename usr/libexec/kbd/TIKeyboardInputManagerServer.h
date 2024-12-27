//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSString, NSXPCListener;

@interface TIKeyboardInputManagerServer : NSObject
{
    NSXPCListener *_listener;	// 8 = 0x8
    NSDate *_lastFlush;	// 16 = 0x10
}

+ (id)sharedKeyboardInputManagerServer;	// IMP=0x002000000000569f
- (void).cxx_destruct;	// IMP=0x002000000000645c
- (void)prepareForActivity;	// IMP=0x0010000000006391
- (void)checkAndFlushDynamicCaches;	// IMP=0x0010000000006172
- (void)prepareForInactivity;	// IMP=0x001000000000608a
- (void)handleMemoryPressureLevel:(unsigned long long)arg1 excessMemoryInBytes:(unsigned long long)arg2;	// IMP=0x0010000000005fa3
- (void)keyboardActivityDidTransition:(id)arg1;	// IMP=0x0010000000005f38
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x0010000000005b8c
- (id)reduceCacheToSize:(int)arg1;	// IMP=0x0010000000005a88
- (void)appleKeyboardsSettingsChanged:(id)arg1;	// IMP=0x00100000000059ce
- (id)init;	// IMP=0x00100000000057f1
- (void)dealloc;	// IMP=0x0010000000005724

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

