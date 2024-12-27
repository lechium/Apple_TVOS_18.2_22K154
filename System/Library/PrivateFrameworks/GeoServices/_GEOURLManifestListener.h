//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface _GEOURLManifestListener : NSObject
{
    NSMutableArray *_handlers;	// 8 = 0x8
    struct os_unfair_lock_s _lock;	// 16 = 0x10
    NSObject<OS_dispatch_source> *_timeoutTimer;	// 24 = 0x18
}

+ (id)sharedListener;	// IMP=0x006000000116c03b
- (void).cxx_destruct;	// IMP=0x000000000116c7e1
- (void)waitForManifestWithCallback:(id)arg1;	// IMP=0x000000000116c34c
- (void)_finish:(_Bool)arg1;	// IMP=0x000000000116c0ff
- (id)init;	// IMP=0x000000000116c090

@end

