//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSMutableSet, NSString;
@protocol OS_dispatch_queue, OS_nw_browser, OS_nw_endpoint, OS_nw_listener;

__attribute__((visibility("hidden")))
@interface SFBonjourNearBy : NSObject
{
    NSObject<OS_dispatch_queue> *_serialQueue;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_internalQueue;	// 16 = 0x10
    _Bool _shouldRestartBrowsing;	// 24 = 0x18
    _Bool _shouldRestartAdvertising;	// 25 = 0x19
    _Bool _isStopAdvertisingInProgress;	// 26 = 0x1a
    _Bool _isStopBrowsingInProgress;	// 27 = 0x1b
    NSString *_localAdvertiserUUIDString;	// 32 = 0x20
    NSString *_localBrowserUUIDString;	// 40 = 0x28
    int _browserState;	// 48 = 0x30
    int _advertiserState;	// 52 = 0x34
    CDUnknownBlockType _advertisingStateUpdateHandler;	// 56 = 0x38
    CDUnknownBlockType _discoveryStateUpdateHandler;	// 64 = 0x40
    CDUnknownBlockType _deviceDidStartScanning;	// 72 = 0x48
    CDUnknownBlockType _deviceDidStopScanning;	// 80 = 0x50
    CDUnknownBlockType _deviceFoundHandler;	// 88 = 0x58
    CDUnknownBlockType _deviceLostHandler;	// 96 = 0x60
    CDUnknownBlockType _deviceDidConnectHandler;	// 104 = 0x68
    CDUnknownBlockType _deviceDidDisconnectHandler;	// 112 = 0x70
    CDUnknownBlockType _deviceDidReceiveDataHandler;	// 120 = 0x78
    NSObject<OS_nw_listener> *_listener;	// 128 = 0x80
    NSObject<OS_nw_browser> *_browser;	// 136 = 0x88
    NSObject<OS_nw_endpoint> *_endpoint;	// 144 = 0x90
    NSMutableSet *_resultChanges;	// 152 = 0x98
    NSMutableSet *_advertiserAdvs;	// 160 = 0xa0
    NSMutableDictionary *_advToBrowserNwToSFendpoints;	// 168 = 0xa8
    NSMutableDictionary *_advToBrowserUuidToSFendpoints;	// 176 = 0xb0
    NSMutableDictionary *_browserToAdvNwToSFendpoints;	// 184 = 0xb8
    NSMutableDictionary *_browserToAdvUuidToSFendpoints;	// 192 = 0xc0
}

- (void).cxx_destruct;	// IMP=0x00000000000eefe4
@property int advertiserState; // @synthesize advertiserState=_advertiserState;
@property int browserState; // @synthesize browserState=_browserState;
@property(retain) NSMutableDictionary *browserToAdvUuidToSFendpoints; // @synthesize browserToAdvUuidToSFendpoints=_browserToAdvUuidToSFendpoints;
@property(retain) NSMutableDictionary *browserToAdvNwToSFendpoints; // @synthesize browserToAdvNwToSFendpoints=_browserToAdvNwToSFendpoints;
@property(retain) NSMutableDictionary *advToBrowserUuidToSFendpoints; // @synthesize advToBrowserUuidToSFendpoints=_advToBrowserUuidToSFendpoints;
@property(retain) NSMutableDictionary *advToBrowserNwToSFendpoints; // @synthesize advToBrowserNwToSFendpoints=_advToBrowserNwToSFendpoints;
@property(retain) NSMutableSet *advertiserAdvs; // @synthesize advertiserAdvs=_advertiserAdvs;
@property(retain) NSMutableSet *resultChanges; // @synthesize resultChanges=_resultChanges;
@property(readonly) NSObject<OS_nw_endpoint> *endpoint; // @synthesize endpoint=_endpoint;
@property(retain) NSObject<OS_nw_browser> *browser; // @synthesize browser=_browser;
@property(retain) NSObject<OS_nw_listener> *listener; // @synthesize listener=_listener;
@property(copy, nonatomic) CDUnknownBlockType deviceDidReceiveDataHandler; // @synthesize deviceDidReceiveDataHandler=_deviceDidReceiveDataHandler;
@property(copy, nonatomic) CDUnknownBlockType deviceDidDisconnectHandler; // @synthesize deviceDidDisconnectHandler=_deviceDidDisconnectHandler;
@property(copy, nonatomic) CDUnknownBlockType deviceDidConnectHandler; // @synthesize deviceDidConnectHandler=_deviceDidConnectHandler;
@property(copy, nonatomic) CDUnknownBlockType deviceLostHandler; // @synthesize deviceLostHandler=_deviceLostHandler;
@property(copy, nonatomic) CDUnknownBlockType deviceFoundHandler; // @synthesize deviceFoundHandler=_deviceFoundHandler;
@property(copy, nonatomic) CDUnknownBlockType deviceDidStopScanning; // @synthesize deviceDidStopScanning=_deviceDidStopScanning;
@property(copy, nonatomic) CDUnknownBlockType deviceDidStartScanning; // @synthesize deviceDidStartScanning=_deviceDidStartScanning;
@property(copy, nonatomic) CDUnknownBlockType discoveryStateUpdateHandler; // @synthesize discoveryStateUpdateHandler=_discoveryStateUpdateHandler;
@property(copy, nonatomic) CDUnknownBlockType advertisingStateUpdateHandler; // @synthesize advertisingStateUpdateHandler=_advertisingStateUpdateHandler;
- (void)dealloc;	// IMP=0x00000000000eed75
- (void)_cleanUp;	// IMP=0x00000000000eecf7
- (id)_endpointForUniqueID:(id)arg1;	// IMP=0x00000000000eebc0
- (_Bool)isLocalEndpoint:(id)arg1;	// IMP=0x00000000000eeb37
- (_Bool)sendData:(id)arg1 toDevice:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000ee9a0
- (void)disconnectFromDevice:(id)arg1;	// IMP=0x00000000000ee78d
- (void)connectToDevice:(id)arg1;	// IMP=0x00000000000ee5c4
- (void)_sendAdvMessageWithData:(id)arg1 isStart:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000ee34a
- (void)_sendMessage:(id)arg1 withType:(id)arg2 toDevice:(id)arg3 completionCallback:(CDUnknownBlockType)arg4;	// IMP=0x00000000000ee049
- (void)_sendMessage:(id)arg1 withType:(id)arg2 toEndpoint:(id)arg3 completionCallback:(CDUnknownBlockType)arg4;	// IMP=0x00000000000edd27
- (id)_handleConnection:(id)arg1 isAdvToBrowserConnection:(_Bool)arg2;	// IMP=0x00000000000ecb58
- (void)handleBrowseResults:(id)arg1;	// IMP=0x00000000000ec634
- (void)_updateBrowserState;	// IMP=0x00000000000ec571
- (void)_cleanupBrowser;	// IMP=0x00000000000ec411
- (void)_reportCachedDiscoveryResults;	// IMP=0x00000000000ec1b6
- (void)restartDiscovery;	// IMP=0x00000000000ec1b0
- (void)stopDiscovery;	// IMP=0x00000000000ec147
- (void)_stopBrowser;	// IMP=0x00000000000ec049
- (_Bool)startDiscovery;	// IMP=0x00000000000ebfa0
- (void)_startBrowser;	// IMP=0x00000000000eb975
- (void)_updateAdvertiserState;	// IMP=0x00000000000eb8a6
- (void)_cleanupAdvertiser;	// IMP=0x00000000000eb788
- (_Bool)stopAdvertisingForData:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000eb4e8
- (void)_stopAdvertising;	// IMP=0x00000000000eb3ea
- (void)startAdvertisingWithData:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000eb166
- (void)_startAdvertiser;	// IMP=0x00000000000ea888
- (id)getUniqueServiceNameForAdvertiser;	// IMP=0x00000000000ea82a
- (id)randomUUID;	// IMP=0x00000000000ea7d3
- (id)initWithQueue:(id)arg1;	// IMP=0x00000000000ea5bf

@end

