//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_source;

@interface UADispatchWatchdog : NSObject
{
    _Bool _hasFired;	// 8 = 0x8
    NSString *_name;	// 16 = 0x10
    CDUnknownBlockType _handler;	// 24 = 0x18
    double _timeout;	// 32 = 0x20
    NSObject<OS_dispatch_source> *_source;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x002000000001c403
@property _Bool hasFired; // @synthesize hasFired=_hasFired;
@property(retain) NSObject<OS_dispatch_source> *source; // @synthesize source=_source;
@property double timeout; // @synthesize timeout=_timeout;
@property(copy) CDUnknownBlockType handler; // @synthesize handler=_handler;
@property(copy) NSString *name; // @synthesize name=_name;
- (void)_triggerWatchdog;	// IMP=0x001000000001c1cb
- (void)cancel;	// IMP=0x001000000001c0d7
- (void)poke;	// IMP=0x001000000001c04a
- (void)start;	// IMP=0x001000000001be34
- (void)dealloc;	// IMP=0x001000000001bdd1
- (id)initWithName:(id)arg1 timeout:(double)arg2 block:(CDUnknownBlockType)arg3;	// IMP=0x001000000001bd0d

@end

