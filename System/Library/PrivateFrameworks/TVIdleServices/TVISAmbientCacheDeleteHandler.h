//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface TVISAmbientCacheDeleteHandler : NSObject
{
    NSArray *_services;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000010b7d0
@property(readonly, copy, nonatomic) NSArray *services; // @synthesize services=_services;
- (struct __CFDictionary *)_periodicPurgeHandlerWithUrgency:(long long)arg1 info:(struct __CFDictionary *)arg2;	// IMP=0x000000000010b6e0
- (void)_purgeCancelHandler;	// IMP=0x000000000010b610
- (struct __CFDictionary *)_purgeHandlerWithUrgency:(long long)arg1 info:(struct __CFDictionary *)arg2;	// IMP=0x000000000010afb0
- (struct __CFDictionary *)_purgeableAmountHandlerWithUrgency:(long long)arg1 info:(struct __CFDictionary *)arg2;	// IMP=0x000000000010a9a0
- (void)start;	// IMP=0x000000000010a570
- (id)initWithServices:(id)arg1;	// IMP=0x000000000010a4a0

@end

