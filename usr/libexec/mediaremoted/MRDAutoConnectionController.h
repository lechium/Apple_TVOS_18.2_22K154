//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MRDNowPlayingServer, NSArray, NSMutableDictionary, NSMutableSet;
@protocol OS_dispatch_queue;

@interface MRDAutoConnectionController : NSObject
{
    NSObject<OS_dispatch_queue> *_serialQueue;	// 8 = 0x8
    MRDNowPlayingServer *_nowPlayingServer;	// 16 = 0x10
    NSMutableDictionary *_pendingReconSessions;	// 24 = 0x18
    NSMutableDictionary *_pendingReconSessionCompletions;	// 32 = 0x20
    NSMutableDictionary *_pendingGroupReconSessions;	// 40 = 0x28
    NSMutableDictionary *_pendingGroupReconSessionCompletions;	// 48 = 0x30
    NSMutableSet *_connectedEndpoints;	// 56 = 0x38
    NSMutableDictionary *_connectingEndpoints;	// 64 = 0x40
    NSMutableDictionary *_pendingConnectingEndpointCompletions;	// 72 = 0x48
}

+ (id)sharedConnectionController;	// IMP=0x0040000000126df8
- (void).cxx_destruct;	// IMP=0x002000000012b673
- (void)_handleActiveSystemEndpointDidChangeNotification:(id)arg1;	// IMP=0x001000000012b4e7
- (void)_handleEndpointDidInvalidateNotification:(id)arg1;	// IMP=0x001000000012b3a4
- (void)_onSerialQueue_removeConnectedEndpoint:(id)arg1;	// IMP=0x001000000012b0df
- (void)_onSerialQueue_addConnectedEndpoint:(id)arg1;	// IMP=0x001000000012abe9
- (void)_onSerialQueue_connectToEndpoint:(id)arg1 reason:(id)arg2 queue:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0010000000129ccb
- (void)_onSerialQueue_discoverGroup:(id)arg1 connect:(_Bool)arg2 reason:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000012965b
- (void)_onSerialQueue_discoverOutputDevice:(id)arg1 connect:(_Bool)arg2 reason:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0010000000128f73
- (void)_discoverGroup:(id)arg1 reason:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000128e67
- (void)_discoverOutputDevice:(id)arg1 reason:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000128d5b
- (void)_connectToGroup:(id)arg1 reason:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000128c4c
- (void)_connectToOutputDevice:(id)arg1 reason:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000128b3d
- (void)_connectToAllOutputDevicesForReason:(id)arg1 comparator:(CDUnknownBlockType)arg2 queue:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00100000001282cd
- (void)discoverGroup:(id)arg1 reason:(id)arg2 queue:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00100000001280b5
- (void)discoverOutputDevice:(id)arg1 reason:(id)arg2 queue:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0010000000127e9d
- (void)connectToGroup:(id)arg1 reason:(id)arg2 queue:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0010000000127c85
- (void)connectToOutputDevice:(id)arg1 reason:(id)arg2 queue:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0010000000127a6d
- (void)connectToAllOutputDevicesForReason:(id)arg1 comparator:(CDUnknownBlockType)arg2 queue:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0010000000127828
@property(readonly, nonatomic) NSArray *autoConnectedEndpoints;
@property(readonly, nonatomic) NSArray *autoConnectingEndpoints;
- (id)_init;	// IMP=0x0010000000126e5d

@end

