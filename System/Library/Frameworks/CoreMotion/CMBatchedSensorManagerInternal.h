//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;
@protocol OS_dispatch_queue;

@interface CMBatchedSensorManagerInternal : NSObject
{
    void *_connection;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_dataQueue;	// 24 = 0x18
    _Bool _available;	// 32 = 0x20
    CDUnknownBlockType _accelHandler;	// 40 = 0x28
    _Bool _accelActive;	// 48 = 0x30
    CDUnknownBlockType _deviceMotionHandler;	// 56 = 0x38
    _Bool _deviceMotionActive;	// 64 = 0x40
    NSArray *_accelBatch;	// 72 = 0x48
    NSArray *_deviceMotionBatch;	// 80 = 0x50
}

+ (id)_newArrayByUnpackingDeviceMotionBatch:(shared_ptr_bdcc6d0f)arg1;	// IMP=0x006000000027ea5c
+ (id)_newArrayByUnpackingAccelerometerBatch:(shared_ptr_bdcc6d0f)arg1;	// IMP=0x006000000027d29b
+ (_Bool)areBatchedSensorsSupported;	// IMP=0x006000000027bb32
@property(retain) NSArray *deviceMotionBatch; // @synthesize deviceMotionBatch=_deviceMotionBatch;
@property(retain) NSArray *accelBatch; // @synthesize accelBatch=_accelBatch;
- (void)_stopDeviceMotionUpdates;	// IMP=0x000000000027e6ff
- (void)_startDeviceMotionUpdatesWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000027dd22
- (void)_startDeviceMotionUpdates;	// IMP=0x000000000027dd0e
- (void)_stopAccelerometerUpdates;	// IMP=0x000000000027cf3e
- (void)_startAccelerometerUpdatesWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000027c561
- (void)_startAccelerometerUpdates;	// IMP=0x000000000027c54d
- (void)_teardown;	// IMP=0x000000000027c411
- (void)_connect;	// IMP=0x000000000027bc1d
- (void)dealloc;	// IMP=0x000000000027bbc6
- (id)init;	// IMP=0x000000000027bb3a

@end

