//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class TKHostTokenDriverCache, TKHostTokenRegistry, TKSlotServer, TKSlotWatcher, TKTokenServer;
@protocol OS_dispatch_source;

@interface TKCtkdRunner : NSObject
{
    TKHostTokenDriverCache *_tokenDriverCache;	// 8 = 0x8
    TKHostTokenRegistry *_tokenRegistry;	// 16 = 0x10
    TKTokenServer *_tokenServer;	// 24 = 0x18
    TKSlotServer *_slotServer;	// 32 = 0x20
    TKSlotWatcher *_slotWatcher;	// 40 = 0x28
    NSObject<OS_dispatch_source> *_sigTermSource;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00200000000038f4
@property(readonly, nonatomic) NSObject<OS_dispatch_source> *sigTermSource; // @synthesize sigTermSource=_sigTermSource;
@property(readonly, nonatomic) TKSlotWatcher *slotWatcher; // @synthesize slotWatcher=_slotWatcher;
@property(readonly, nonatomic) TKSlotServer *slotServer; // @synthesize slotServer=_slotServer;
@property(readonly, nonatomic) TKTokenServer *tokenServer; // @synthesize tokenServer=_tokenServer;
- (void)run;	// IMP=0x00100000000031ae
- (void)ensureSlotWatcherIsRunning;	// IMP=0x0010000000003128
- (id)initWithArgc:(int)arg1 argv:(const char **)arg2;	// IMP=0x0010000000002f14
@property(readonly, nonatomic) _Bool hasRegistry;
@property(readonly, nonatomic) TKHostTokenRegistry *tokenRegistry;
@property(readonly, nonatomic) TKHostTokenDriverCache *tokenDriverCache;
- (void)initializeSandBox;	// IMP=0x0010000000002dfa

@end

