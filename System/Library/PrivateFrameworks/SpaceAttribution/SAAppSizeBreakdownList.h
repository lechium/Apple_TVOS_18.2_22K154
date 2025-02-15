//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface SAAppSizeBreakdownList : NSObject
{
    NSMutableDictionary *_appSizeBreakdownList;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000002f6c
@property(retain) NSMutableDictionary *appSizeBreakdownList; // @synthesize appSizeBreakdownList=_appSizeBreakdownList;
- (void)removeBundleId:(id)arg1;	// IMP=0x0000000000002f33
- (id)generateDictionary;	// IMP=0x0000000000002e10
- (void)updateTagsWithCloneSize:(unsigned long long)arg1 bundleId:(id)arg2;	// IMP=0x0000000000002dc2
- (void)updatePath:(id)arg1 cloneSize:(unsigned long long)arg2 bundleId:(id)arg3;	// IMP=0x0000000000002d4a
- (void)mergeBundleId:(id)arg1 withBundleId:(id)arg2 newBundleId:(id)arg3;	// IMP=0x0000000000002c52
- (void)updateBundleId:(id)arg1 newId:(id)arg2;	// IMP=0x0000000000002b6c
- (void)addPluginSize:(unsigned long long)arg1 bundleId:(id)arg2;	// IMP=0x0000000000002ad5
- (void)updatePath:(id)arg1 cacheSize:(unsigned long long)arg2 bundleId:(id)arg3;	// IMP=0x0000000000002a1a
- (void)addTagSize:(unsigned long long)arg1 bundleId:(id)arg2;	// IMP=0x0000000000002983
- (void)addPath:(id)arg1 fixedPath:(_Bool)arg2 size:(unsigned long long)arg3 bundleId:(id)arg4;	// IMP=0x00000000000028c1
- (id)init;	// IMP=0x000000000000286b

@end

