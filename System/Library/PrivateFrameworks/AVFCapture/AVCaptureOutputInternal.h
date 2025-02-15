//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVCaptureSession, NSMutableArray, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AVCaptureOutputInternal : NSObject
{
    NSObject<OS_dispatch_queue> *figCaptureSessionSyncQueue;	// 8 = 0x8
    struct OpaqueFigCaptureSession *figCaptureSession;	// 16 = 0x10
    AVCaptureSession *session;	// 24 = 0x18
    NSString *sinkID;	// 32 = 0x20
    NSMutableArray *connections;	// 40 = 0x28
    int changeSeed;	// 48 = 0x30
    struct CGAffineTransform metadataTransform;	// 56 = 0x38
    double rollAdjustment;	// 104 = 0x68
    _Bool physicallyMirrorsVideo;	// 112 = 0x70
}

- (void)dealloc;	// IMP=0x00000000000206e8
- (id)init;	// IMP=0x0000000000020650

@end

