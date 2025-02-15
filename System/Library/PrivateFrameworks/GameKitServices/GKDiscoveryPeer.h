//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GKDiscoveryPeerConnection, GKSimpleTimer, NSMutableArray, NSMutableSet, NSNumber, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface GKDiscoveryPeer : NSObject
{
    NSString *_serviceName;	// 8 = 0x8
    NSString *_playerID;	// 16 = 0x10
    NSString *_deviceID;	// 24 = 0x18
    NSMutableSet *_interfaces;	// 32 = 0x20
    NSMutableArray *_orderedInterfaces;	// 40 = 0x28
    NSMutableArray *_attemptedInterfaces;	// 48 = 0x30
    GKDiscoveryPeerConnection *_trialConnection;	// 56 = 0x38
    NSNumber *_chosenInterface;	// 64 = 0x40
    _Bool _shouldSignalDiscovery;	// 72 = 0x48
    NSMutableArray *_sendDataBuffer;	// 80 = 0x50
    GKDiscoveryPeerConnection *_connection;	// 88 = 0x58
    GKSimpleTimer *_resolveTimer;	// 96 = 0x60
    CDUnknownBlockType _resolveTimeoutHandler;	// 104 = 0x68
    NSObject<OS_dispatch_queue> *_syncQueue;	// 112 = 0x70
    int _state;	// 120 = 0x78
    double _discoveryTimeStamp;	// 128 = 0x80
}

@property(copy, nonatomic) CDUnknownBlockType resolveTimeoutHandler; // @synthesize resolveTimeoutHandler=_resolveTimeoutHandler;
@property(retain, nonatomic) GKSimpleTimer *resolveTimer; // @synthesize resolveTimer=_resolveTimer;
@property(nonatomic) double discoveryTimeStamp; // @synthesize discoveryTimeStamp=_discoveryTimeStamp;
@property(readonly, retain, nonatomic) NSObject<OS_dispatch_queue> *syncQueue; // @synthesize syncQueue=_syncQueue;
@property(nonatomic) int state; // @synthesize state=_state;
@property(retain, nonatomic) NSMutableArray *sendDataBuffer; // @synthesize sendDataBuffer=_sendDataBuffer;
@property(retain, nonatomic) GKDiscoveryPeerConnection *connection; // @synthesize connection=_connection;
@property(nonatomic) _Bool shouldSignalDiscovery; // @synthesize shouldSignalDiscovery=_shouldSignalDiscovery;
@property(retain, nonatomic) GKDiscoveryPeerConnection *trialConnection; // @synthesize trialConnection=_trialConnection;
@property(retain, nonatomic) NSNumber *chosenInterface; // @synthesize chosenInterface=_chosenInterface;
@property(retain, nonatomic) NSMutableArray *attemptedInterfaces; // @synthesize attemptedInterfaces=_attemptedInterfaces;
@property(retain, nonatomic) NSMutableArray *orderedInterfaces; // @synthesize orderedInterfaces=_orderedInterfaces;
@property(retain, nonatomic) NSMutableSet *interfaces; // @synthesize interfaces=_interfaces;
@property(copy, nonatomic) NSString *deviceID; // @synthesize deviceID=_deviceID;
@property(copy, nonatomic) NSString *playerID; // @synthesize playerID=_playerID;
@property(copy, nonatomic) NSString *serviceName; // @synthesize serviceName=_serviceName;
- (void)timeout:(id)arg1;	// IMP=0x000000000006b6f9
- (void)flushDataBuffer;	// IMP=0x000000000006b1b8
- (void)sendData:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000006b0fc
- (void)invalidate;	// IMP=0x000000000006b0b4
- (void)cleanUpForBrowse;	// IMP=0x000000000006b065
- (void)didLoseInterface:(id)arg1;	// IMP=0x000000000006b018
- (void)stopResolveTimer;	// IMP=0x000000000006ae9b
- (void)startResolveTimerWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000006ac49
- (id)nextInterfaceIndex;	// IMP=0x000000000006a93f
- (id)description;	// IMP=0x000000000006a653
- (id)stringForState:(int)arg1;	// IMP=0x000000000006a4f8
- (void)dealloc;	// IMP=0x000000000006a331
- (id)initWithServiceName:(id)arg1;	// IMP=0x000000000006a25d
- (_Bool)parseServiceNameForInit:(id)arg1;	// IMP=0x000000000006a185

@end

