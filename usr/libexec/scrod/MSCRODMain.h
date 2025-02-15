//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ScreenReaderCore/SCRCArgumentParser.h>

@class NSString, SCROHandler;

@interface MSCRODMain : SCRCArgumentParser
{
    SCROHandler *_handlers[3];	// 8 = 0x8
    struct __CFRunLoop **_runLoops;	// 32 = 0x20
    struct __CFRunLoop *_mainRunLoop;	// 40 = 0x28
    _Bool _stop;	// 48 = 0x30
}

+ (id)commandPath;	// IMP=0x0020000000002511
+ (id)versionString;	// IMP=0x0010000000002504
+ (id)processIdentifier;	// IMP=0x00100000000024f7
- (void).cxx_destruct;	// IMP=0x00200000000030a1
- (int)performActionForKey:(int)arg1 handlerType:(int)arg2 trusted:(_Bool)arg3;	// IMP=0x0010000000002fab
- (int)getValue:(id *)arg1 forKey:(int)arg2 withObject:(id)arg3 handlerType:(int)arg4 trusted:(_Bool)arg5;	// IMP=0x0010000000002e85
- (int)getValue:(id *)arg1 forKey:(int)arg2 handlerType:(int)arg3 trusted:(_Bool)arg4;	// IMP=0x0010000000002d81
- (int)setValue:(id)arg1 forKey:(int)arg2 handlerType:(int)arg3 trusted:(_Bool)arg4;	// IMP=0x0010000000002c5f
- (int)registerCallbackForKey:(int)arg1 forClientIdentifier:(unsigned int)arg2 handlerType:(int)arg3 trusted:(_Bool)arg4;	// IMP=0x0010000000002b68
- (int)handleEvent:(id)arg1 handlerType:(int)arg2 trusted:(_Bool)arg3;	// IMP=0x0010000000002a5a
- (void)handleCallback:(id)arg1;	// IMP=0x0010000000002a41
- (void)_serverTimeoutNotificationHandler:(id)arg1;	// IMP=0x0010000000002a2f
- (void)stop;	// IMP=0x0010000000002934
- (void)_goDogGo:(id)arg1;	// IMP=0x00100000000027f3
- (int)run;	// IMP=0x0010000000002542
- (id)_safeHandlerForType:(int *)arg1;	// IMP=0x001000000000251e
- (void)dealloc;	// IMP=0x0010000000002410
- (id)initWithArgc:(int)arg1 argv:(const char **)arg2;	// IMP=0x00100000000022c4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

