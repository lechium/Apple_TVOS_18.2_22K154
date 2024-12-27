//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AFNotifyStatePublisher, NSString;
@protocol ADBluetoothWirelessSplitterSession, OS_dispatch_queue;

@interface ADBluetoothWirelessSplitterSessionObserver : NSObject
{
    id <ADBluetoothWirelessSplitterSession> _wirelessSplitterSession;	// 8 = 0x8
    unsigned long long _observerCount;	// 16 = 0x10
    AFNotifyStatePublisher *_publisher;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_queue;	// 32 = 0x20
}

+ (id)sharedWirelessSplitterSessionObserver;	// IMP=0x0020000000371bae
- (void).cxx_destruct;	// IMP=0x0020000000371aaf
- (void)bluetoothWirelessSplitterSessionDidInvalidate:(id)arg1;	// IMP=0x00100000003719f5
- (void)bluetoothWirelessSplitterSession:(id)arg1 sessionInfoDidChangeFrom:(id)arg2 to:(id)arg3;	// IMP=0x00100000003718bc
- (void)_invalidate;	// IMP=0x0010000000371887
- (void)stopObserving;	// IMP=0x001000000037183c
- (void)startObserving;	// IMP=0x00100000003717f1
- (id);	// IMP=0x00100000003716ff

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

