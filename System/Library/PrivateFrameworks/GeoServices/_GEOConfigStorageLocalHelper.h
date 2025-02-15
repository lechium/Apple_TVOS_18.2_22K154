//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol GEOConfigStorageReadWrite;

__attribute__((visibility("hidden")))
@interface _GEOConfigStorageLocalHelper : NSObject
{
    long long _source;	// 8 = 0x8
    id <GEOConfigStorageReadWrite> _store;	// 16 = 0x10
    id <GEOConfigStorageReadWrite> _direct;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000fadc6e
- (void)resync;	// IMP=0x0000000000fadc68
- (void)setConfigValue:(id)arg1 forKey:(id)arg2 options:(unsigned long long)arg3 synchronous:(_Bool)arg4;	// IMP=0x0000000000fada36
- (id)getConfigValueForKey:(id)arg1 countryCode:(id)arg2 options:(unsigned long long)arg3 source:(long long *)arg4;	// IMP=0x0000000000fad8fa
- (id)initWithSource:(long long)arg1 store:(id)arg2 directStore:(id)arg3;	// IMP=0x0000000000fad858

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

