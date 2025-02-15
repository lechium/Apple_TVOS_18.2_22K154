//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface _LTDConfigurationCache : NSObject
{
    NSMutableDictionary *_cache;	// 8 = 0x8
    NSMutableDictionary *_conditions;	// 16 = 0x10
    struct os_unfair_lock_s _lock;	// 24 = 0x18
}

+ (id)_errorForType:(long long)arg1 reason:(unsigned long long)arg2;	// IMP=0x0060000000012559
- (void).cxx_destruct;	// IMP=0x0000000000012eba
- (void)removeAllObjects;	// IMP=0x0000000000012cbb
- (void)removeObjectForType:(long long)arg1;	// IMP=0x0000000000012bb9
- (void)objectForType:(long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000012b1c
- (id)objectForType:(long long)arg1 error:(id *)arg2;	// IMP=0x0000000000012677
- (void)setObject:(id)arg1 forType:(long long)arg2;	// IMP=0x000000000001243d
- (id)init;	// IMP=0x000000000001237d

@end

