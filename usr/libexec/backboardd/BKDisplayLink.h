//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CADisplay, CADisplayLink, NSRunLoop, NSString, NSThread;

@interface BKDisplayLink : NSObject
{
    Class _displayLinkClass;	// 8 = 0x8
    CADisplay *_display;	// 16 = 0x10
    id _target;	// 24 = 0x18
    SEL _action;	// 32 = 0x20
    NSRunLoop *_runLoop;	// 40 = 0x28
    NSThread *_thread;	// 48 = 0x30
    CADisplayLink *_thread_displayLink;	// 56 = 0x38
    _Bool _thread_invalid;	// 64 = 0x40
    _Bool _paused;	// 65 = 0x41
    NSString *_displayUUID;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x0020000000003123
@property(copy, nonatomic) NSString *displayUUID; // @synthesize displayUUID=_displayUUID;
- (void)_thread_startRunLoop;	// IMP=0x0010000000002fcf
- (void)_thread_displayLinkFired;	// IMP=0x0010000000002fb1
- (void)_thread_invalidate;	// IMP=0x0010000000002e77
- (void)_thread_setPaused:(id)arg1;	// IMP=0x0010000000002e42
@property(nonatomic, getter=isPaused) _Bool paused;
- (void)invalidate;	// IMP=0x0010000000002cc4
- (void)dealloc;	// IMP=0x0010000000002b3e
- (id)initWithDisplayLinkClass:(Class)arg1 display:(id)arg2 target:(id)arg3 action:(SEL)arg4;	// IMP=0x0010000000002871

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

