//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMapTable, NSMutableDictionary;

@interface ContextManager : NSObject
{
    NSMapTable *_contextMap;	// 8 = 0x8
    NSMapTable *_contextProxyMap;	// 16 = 0x10
    NSMapTable *_contextByExternalizedContextMap;	// 24 = 0x18
    NSMutableDictionary *_modules;	// 32 = 0x20
}

+ (id)sharedInstance;	// IMP=0x004000000001296b
- (void).cxx_destruct;	// IMP=0x0020000000013adc
- (id)_proxiesForContext:(id)arg1;	// IMP=0x0010000000013824
- (id)dumpStatus;	// IMP=0x001000000001345c
- (id)loadModule:(long long)arg1 error:(id *)arg2;	// IMP=0x0010000000012fca
- (void)_logClass:(Class)arg1 tag:(id)arg2 level:(int)arg3;	// IMP=0x0010000000012d84
- (void)_logClass:(Class)arg1 tag:(id)arg2;	// IMP=0x0010000000012ced
- (id)_pathForModule:(long long)arg1 error:(id *)arg2;	// IMP=0x0010000000012baf
- (void)registerExternalizedContext:(id)arg1 forContext:(id)arg2;	// IMP=0x0010000000012b90
- (void)addContext:(id)arg1;	// IMP=0x0010000000012b24
- (void)addContextProxy:(id)arg1;	// IMP=0x0010000000012ac4
- (id)findContextForExternalizedContext:(id)arg1;	// IMP=0x0010000000012aae
- (id)contextForUUID:(id)arg1;	// IMP=0x0010000000012a98
- (id)init;	// IMP=0x00100000000129c0

@end

