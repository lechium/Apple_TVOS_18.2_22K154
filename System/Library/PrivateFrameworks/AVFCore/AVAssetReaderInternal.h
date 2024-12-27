//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVAsset, AVWeakReference, NSError, NSMutableArray, NSMutableSet;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AVAssetReaderInternal : NSObject
{
    AVWeakReference *weakReference;	// 8 = 0x8
    AVAsset *asset;	// 16 = 0x10
    struct OpaqueFigAssetReader *figAssetReader;	// 24 = 0x18
    CDStruct_e83c9415 timeRange;	// 32 = 0x20
    _Bool readSingleSample;	// 80 = 0x50
    _Bool realTime;	// 81 = 0x51
    NSMutableArray *outputs;	// 88 = 0x58
    NSMutableSet *outputFinishedCallbackInvokers;	// 96 = 0x60
    long long status;	// 104 = 0x68
    NSError *error;	// 112 = 0x70
    NSError *errorThatOccurredBeforeStartReading;	// 120 = 0x78
    NSObject<OS_dispatch_queue> *statusReadWriteQueue;	// 128 = 0x80
}

@end

