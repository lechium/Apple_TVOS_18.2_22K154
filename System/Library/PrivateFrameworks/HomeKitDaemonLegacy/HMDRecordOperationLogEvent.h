//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitMetrics/HMMLogEvent.h>

__attribute__((visibility("hidden")))
@interface HMDRecordOperationLogEvent : HMMLogEvent
{
    _Bool _legacy;	// 8 = 0x8
    unsigned long long _size;	// 16 = 0x10
}

@property(readonly, nonatomic, getter=isLegacy) _Bool legacy; // @synthesize legacy=_legacy;
@property(readonly, nonatomic) unsigned long long size; // @synthesize size=_size;
- (id)initWithSize:(unsigned long long)arg1 isLegacy:(_Bool)arg2;	// IMP=0x000000000054e0e4

@end

