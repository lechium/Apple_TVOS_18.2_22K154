//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface TLKAsyncCache : NSObject
{
    MISSING_TYPE *cache;	// 8 = 0x8
    MISSING_TYPE *lookaheadCache;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000004b690
- (void)clear;	// IMP=0x000000000004b580
- (void)getObjectsForKeys:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000004a5c0
- (void)getObjectForKey:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000004a3f0
- (id)getCachedObjectIfAvailableForKey:(id)arg1;	// IMP=0x000000000004a0a0
- (id)init;	// IMP=0x00000000000490d0
- (void)computeObjectForKey:(NSObject *)arg1 completionHandler:(void (^)(NSObject *))arg2;	// IMP=0x000000000004b750

@end

