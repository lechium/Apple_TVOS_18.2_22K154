//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface SDSmartCoverMonitor : NSObject
{
    _Bool _smartCoverIsClosed;	// 8 = 0x8
    _Bool _flap1StateIsEngaged;	// 9 = 0x9
    _Bool _openStateIsEngaged;	// 10 = 0xa
    struct os_unfair_lock_s _lock;	// 12 = 0xc
    struct __IOHIDEventSystemClient *_mHIDClient;	// 16 = 0x10
}

@property(readonly) _Bool smartCoverIsClosed; // @synthesize smartCoverIsClosed=_smartCoverIsClosed;
- (unsigned int)getSmartCoverState:(struct __CFArray *)arg1 usage:(unsigned int)arg2;	// IMP=0x001000000000d3ef
- (_Bool)isSmartCoverClosed:(struct __IOHIDEventSystemClient *)arg1;	// IMP=0x001000000000d2b0
- (void)handleEvent:(struct __IOHIDEvent *)arg1;	// IMP=0x001000000000d206
- (void)handleButtonEvent:(struct __IOHIDEvent *)arg1;	// IMP=0x001000000000d03c
- (void)updateSmartCoverIsClosed:(_Bool)arg1;	// IMP=0x001000000000cf6a
- (id)description;	// IMP=0x001000000000ceca
- (void)installSmartCoverMonitor;	// IMP=0x001000000000ce6e
- (void)dealloc;	// IMP=0x001000000000ce2f
- (id)init;	// IMP=0x001000000000cdca
- (void)postNotification:(id)arg1;	// IMP=0x001000000000cd58

@end

