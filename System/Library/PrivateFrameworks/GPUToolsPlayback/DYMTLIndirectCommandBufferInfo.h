//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface DYMTLIndirectCommandBufferInfo : NSObject
{
    unsigned long long _maxCommandCount;	// 8 = 0x8
    unsigned long long _options;	// 16 = 0x10
    unsigned long long _maxKernelThreadgroupMemoryBindCount;	// 24 = 0x18
}

@property(readonly, nonatomic) unsigned long long maxKernelThreadgroupMemoryBindCount; // @synthesize maxKernelThreadgroupMemoryBindCount=_maxKernelThreadgroupMemoryBindCount;
@property(readonly, nonatomic) unsigned long long options; // @synthesize options=_options;
@property(readonly, nonatomic) unsigned long long maxCommandCount; // @synthesize maxCommandCount=_maxCommandCount;
- (id)initWithMaxCommandCount:(unsigned long long)arg1 options:(unsigned long long)arg2 maxKernelThreadgroupMemoryBindCount:(unsigned long long)arg3;	// IMP=0x0000000000016a75

@end

