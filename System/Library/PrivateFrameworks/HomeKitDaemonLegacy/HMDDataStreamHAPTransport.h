//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HMDCharacteristic, HMDDataStreamFrameReader, HMDHAPAccessory, NSMutableArray, NSNumber, NSString;
@protocol HMDDataStreamTransportDelegate, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDDataStreamHAPTransport : NSObject
{
    _Bool _isWriteInProgress;	// 8 = 0x8
    _Bool _lastAccessoryRequestToSendFlag;	// 9 = 0x9
    id <HMDDataStreamTransportDelegate> delegate;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_workQueue;	// 24 = 0x18
    HMDHAPAccessory *_accessory;	// 32 = 0x20
    HMDCharacteristic *_transportCharacteristic;	// 40 = 0x28
    HMDCharacteristic *_interruptCharacteristic;	// 48 = 0x30
    NSNumber *_sessionIdentifier;	// 56 = 0x38
    unsigned long long _maxControllerTransportMTU;	// 64 = 0x40
    HMDDataStreamFrameReader *_byteReader;	// 72 = 0x48
    NSString *_logIdentifier;	// 80 = 0x50
    NSString *_notificationClientIdentifier;	// 88 = 0x58
    NSMutableArray *_pendingWrites;	// 96 = 0x60
}

+ (id)logCategory;	// IMP=0x00100000006d3256
- (void).cxx_destruct;	// IMP=0x00000000006d2b79
@property _Bool lastAccessoryRequestToSendFlag; // @synthesize lastAccessoryRequestToSendFlag=_lastAccessoryRequestToSendFlag;
@property _Bool isWriteInProgress; // @synthesize isWriteInProgress=_isWriteInProgress;
@property(readonly) NSMutableArray *pendingWrites; // @synthesize pendingWrites=_pendingWrites;
@property(readonly) NSString *notificationClientIdentifier; // @synthesize notificationClientIdentifier=_notificationClientIdentifier;
@property(readonly) NSString *logIdentifier; // @synthesize logIdentifier=_logIdentifier;
@property(readonly) HMDDataStreamFrameReader *byteReader; // @synthesize byteReader=_byteReader;
@property(readonly) unsigned long long maxControllerTransportMTU; // @synthesize maxControllerTransportMTU=_maxControllerTransportMTU;
@property(readonly) NSNumber *sessionIdentifier; // @synthesize sessionIdentifier=_sessionIdentifier;
@property(retain) HMDCharacteristic *interruptCharacteristic; // @synthesize interruptCharacteristic=_interruptCharacteristic;
@property(retain) HMDCharacteristic *transportCharacteristic; // @synthesize transportCharacteristic=_transportCharacteristic;
@property(readonly) __weak HMDHAPAccessory *accessory; // @synthesize accessory=_accessory;
@property(readonly) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(nonatomic) __weak id <HMDDataStreamTransportDelegate> delegate; // @synthesize delegate;
- (void)setTrafficClass:(unsigned long long)arg1;	// IMP=0x00000000006d2a46
- (void)_handleInterruptCharacteristicValue:(id)arg1;	// IMP=0x00000000006d2591
- (void)_handleCharacteristicsValueUpdated:(id)arg1;	// IMP=0x00000000006d24d9
- (void)_handleReceivedData:(id)arg1;	// IMP=0x00000000006d21f4
- (void)_notifyWriteOperation:(id)arg1 didCompleteWithError:(id)arg2;	// IMP=0x00000000006d210b
- (void)_cancelAllPendingWritesWithError:(id)arg1;	// IMP=0x00000000006d1f79
- (void)_removeAndMarkCompleteAllCompletedWrites;	// IMP=0x00000000006d1d7c
- (void)_stopTransportForWriteFailureError:(id)arg1;	// IMP=0x00000000006d1d21
- (void)_handleCompletionWithResponseTuples:(id)arg1;	// IMP=0x00000000006d148c
- (void)_doNextWriteOperation;	// IMP=0x00000000006d0f8e
- (void)_writeCharacteristicRequests:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000006d0de1
- (id)_buildWriteRequestWithError:(id *)arg1 shouldForceClose:(_Bool)arg2;	// IMP=0x00000000006d0984
- (id)_getPendingWritesUpToLength:(unsigned long long)arg1;	// IMP=0x00000000006d0707
- (void)sendRawFrame:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000006d0645
- (void)_notifyDelegateDidReceiveFrame:(id)arg1;	// IMP=0x00000000006d058d
- (void)_notifyDelegateDidFailWithError:(id)arg1;	// IMP=0x00000000006d04d5
- (void)_notifyDelegateDidClose;	// IMP=0x00000000006d0464
- (void)_notifyDelegateDidOpen;	// IMP=0x00000000006d03f3
- (void)_deregisterForMessages;	// IMP=0x00000000006d021d
- (void)_registerForMessages;	// IMP=0x00000000006d0064
- (void)_teardownSessionWithError:(id)arg1;	// IMP=0x00000000006cfdd3
- (void)_stopWithError:(id)arg1;	// IMP=0x00000000006cfcd3
- (void)close;	// IMP=0x00000000006cfb5e
- (void)connect;	// IMP=0x00000000006cf66c
- (_Bool)_isRunning;	// IMP=0x00000000006cf639
- (void)dealloc;	// IMP=0x00000000006cf60a
- (id)initWithAccessory:(id)arg1 sessionIdentifier:(long long)arg2 maxControllerTransportMTU:(unsigned long long)arg3 workQueue:(id)arg4 logIdentifier:(id)arg5;	// IMP=0x00000000006cf430

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

