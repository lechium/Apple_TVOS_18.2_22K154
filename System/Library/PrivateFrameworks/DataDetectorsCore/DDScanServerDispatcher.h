//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface DDScanServerDispatcher : NSObject
{
    NSObject<OS_dispatch_queue> *_scannerQueue;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_workQueue;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_reportQueue;	// 24 = 0x18
    NSObject<OS_dispatch_source> *_memoryWarningSource;	// 32 = 0x20
    _Bool _memoryWarningInProgress;	// 40 = 0x28
    NSMutableDictionary *_scanners;	// 48 = 0x30
    _Bool _tearDownRequested;	// 56 = 0x38
    unsigned long long _jobIdentifier;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000000002ad6
- (void)dealloc;	// IMP=0x0000000000002a66
- (id)init;	// IMP=0x00000000000028e1

@end

