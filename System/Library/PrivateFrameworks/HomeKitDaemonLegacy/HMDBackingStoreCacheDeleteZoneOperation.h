//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMDBackingStoreCacheZone;

__attribute__((visibility("hidden")))
@interface HMDBackingStoreCacheDeleteZoneOperation
{
    CDUnknownBlockType _creationBlock;	// 8 = 0x8
    HMDBackingStoreCacheZone *_zone;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000023c6c0
@property(retain, nonatomic) HMDBackingStoreCacheZone *zone; // @synthesize zone=_zone;
@property(copy, nonatomic) CDUnknownBlockType creationBlock; // @synthesize creationBlock=_creationBlock;
- (id)mainReturningError;	// IMP=0x000000000023bba8
- (id)initWithZone:(id)arg1 resultBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000023bb1d

@end

