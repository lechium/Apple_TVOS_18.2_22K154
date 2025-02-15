//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray;

__attribute__((visibility("hidden")))
@interface SIBCEndpointStateManager : NSObject
{
    NSMutableArray *_objects;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000000b53d
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;	// IMP=0x000000000000b527
@property(readonly, copy, nonatomic) NSArray *allObjects;
- (id)objectForEndpointId:(id)arg1;	// IMP=0x000000000000b4b6
- (unsigned long long)_indexForEndpointId:(id)arg1;	// IMP=0x000000000000b3c4
- (void)_removeObjectForEndpointId:(id)arg1;	// IMP=0x000000000000b37e
- (void)removeObjectForEndpointId:(id)arg1;	// IMP=0x000000000000b36c
- (void)removeObject:(id)arg1;	// IMP=0x000000000000b31d
- (void)addObject:(id)arg1;	// IMP=0x000000000000b24a
- (id)init;	// IMP=0x000000000000b1f4

@end

