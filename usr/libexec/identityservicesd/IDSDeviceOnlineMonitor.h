//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, SKPresence;
@protocol IDSDeviceOnlineMonitorDelegate, OS_dispatch_queue;

@interface IDSDeviceOnlineMonitor : NSObject
{
    _Bool _isMonitoring;	// 8 = 0x8
    _Bool _isAssertingPresence;	// 9 = 0x9
    unsigned int _status;	// 12 = 0xc
    id <IDSDeviceOnlineMonitorDelegate> _delegate;	// 16 = 0x10
    SKPresence *_presence;	// 24 = 0x18
    NSString *_presenceID;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_queue;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0020000000262810
@property(readonly, retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) _Bool isAssertingPresence; // @synthesize isAssertingPresence=_isAssertingPresence;
@property(nonatomic) _Bool isMonitoring; // @synthesize isMonitoring=_isMonitoring;
@property(readonly, retain, nonatomic) NSString *presenceID; // @synthesize presenceID=_presenceID;
@property(readonly, retain, nonatomic) SKPresence *presence; // @synthesize presence=_presence;
@property(retain, nonatomic) id <IDSDeviceOnlineMonitorDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) unsigned int status; // @synthesize status=_status;
- (void)presenceAssertionForPresence:(id)arg1 completedSuccessfully:(_Bool)arg2 error:(id)arg3;	// IMP=0x00100000002626f6
- (void)invitedHandlesChangedForPresence:(id)arg1;	// IMP=0x0010000000262642
- (void)presenceDaemonDisconnected:(id)arg1;	// IMP=0x001000000026257a
- (void)presentDevicesChangedForPresence:(id)arg1;	// IMP=0x00100000002623cd
- (void)_unsubscribe;	// IMP=0x001000000026223f
- (void)_subscribe;	// IMP=0x0010000000261f72
- (void)_releasePresence;	// IMP=0x0010000000261de4
- (void)_assertPresence;	// IMP=0x0010000000261ba9
- (void)releaseSKPresenceObjectIfPossible;	// IMP=0x0010000000261b20
- (void)initSKPresenceObject;	// IMP=0x0010000000261940
- (void)releasePresence;	// IMP=0x001000000026186b
- (void)assertPresence;	// IMP=0x0010000000261790
- (void)stopMonitoring;	// IMP=0x00100000002616bb
- (void)startMonitoring;	// IMP=0x00100000002615e0
- (id)initWithDelegate:(id)arg1 uniqueIdentifier:(id)arg2 queue:(id)arg3;	// IMP=0x0010000000261398

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

