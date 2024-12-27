//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSCache, NSString;

__attribute__((visibility("hidden")))
@interface TVCKStoreContentMetadataCache : NSObject
{
    NSCache *_entriesByAdamID;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000002f7dd
@property(retain, nonatomic) NSCache *entriesByAdamID; // @synthesize entriesByAdamID=_entriesByAdamID;
- (void)setItem:(id)arg1 forAdamID:(id)arg2 withExpirationDate:(id)arg3;	// IMP=0x000000000002f682
- (id)itemForAdamID:(id)arg1;	// IMP=0x000000000002f4f9
- (void)cache:(id)arg1 willEvictObject:(id)arg2;	// IMP=0x000000000002f4f3
- (id)init;	// IMP=0x000000000002f489

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

