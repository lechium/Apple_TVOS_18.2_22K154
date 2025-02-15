//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface GEOMobileAssetResourceUpdater : NSObject
{
    NSObject<OS_dispatch_queue> *_updateWorkQueue;	// 8 = 0x8
    _Bool _running;	// 16 = 0x10
}

+ (void)run;	// IMP=0x0040000000016765
+ (id)sharedUpdater;	// IMP=0x0010000000016601
- (void).cxx_destruct;	// IMP=0x002000000001768f
- (void)_pruneOldResourcesIn:(id)arg1;	// IMP=0x00100000000171fe
- (void)_processResources:(id)arg1 group:(id)arg2;	// IMP=0x0010000000016eb4
- (void)_fetchAssets;	// IMP=0x0010000000016b22
- (void)_updateComplete;	// IMP=0x0010000000016aa0
- (void)_updateOnQueue;	// IMP=0x0010000000016817
- (void)_update:(id)arg1;	// IMP=0x00100000000167b6
- (void)triggerUpdate:(id)arg1;	// IMP=0x00100000000167a4
- (id)initInternal;	// IMP=0x0010000000016666

@end

