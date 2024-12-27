//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSString;
@protocol MRDVirtualAudioInputServerDelegate, OS_dispatch_queue;

@interface MRDVirtualAudioInputServer : NSObject
{
    NSMutableArray *_recordingEndpointClients;	// 8 = 0x8
    NSMutableArray *_registeredDevices;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_serialQueue;	// 24 = 0x18
    id <MRDVirtualAudioInputServerDelegate> _delegate;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x002000000016aa07
@property(nonatomic) __weak id <MRDVirtualAudioInputServerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_handleRecordingEndpointAvailabilityMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x001000000016a89c
- (void)_handleVoiceDataReceivedMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x001000000016a74a
- (void)_handleRecordingStateChangedMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x001000000016a5a9
- (void)_handleInputDeviceDisconnectedMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x001000000016a0b9
- (void)_handleInputDeviceConnectedMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x0010000000169cc3
- (void)_handleGetDevicesMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x0010000000169a3c
- (void)collectDiagnostic:(id)arg1;	// IMP=0x001000000016996b
- (void)handleXPCMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x00100000001698e5
- (void)clearRecordingEndpointsForClient:(id)arg1;	// IMP=0x00100000001696f6
- (void)clearRegisteredDevicesForClient:(id)arg1;	// IMP=0x00100000001694a2
- (id)registeredDeviceWithID:(unsigned int)arg1;	// IMP=0x0010000000169284
@property(readonly, copy, nonatomic) NSArray *registeredDevices;
@property(readonly, copy, nonatomic) NSArray *recordingEndpointClients;
- (id)init;	// IMP=0x0010000000168fb6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

