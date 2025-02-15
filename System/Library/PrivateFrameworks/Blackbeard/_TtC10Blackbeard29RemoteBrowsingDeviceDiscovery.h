//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC10Blackbeard29RemoteBrowsingDeviceDiscovery : NSObject
{
    MISSING_TYPE *eventHub;	// 8 = 0x8
    MISSING_TYPE *subscriptionToken;	// 24 = 0x18
    MISSING_TYPE *remoteParticipantClient;	// 32 = 0x20
    MISSING_TYPE *remoteBrowsingClient;	// 72 = 0x48
    MISSING_TYPE *remoteBrowsingSource;	// 112 = 0x70
    MISSING_TYPE *role;	// 152 = 0x98
    MISSING_TYPE *state;	// 160 = 0xa0
    MISSING_TYPE *isPaused;	// 168 = 0xa8
    MISSING_TYPE *allRemoteParticipantGroups;	// 176 = 0xb0
    MISSING_TYPE *availableDeviceGroups;	// 184 = 0xb8
    MISSING_TYPE *selectedDeviceGroup;	// 192 = 0xc0
    MISSING_TYPE *availableDeviceGroupsChangedHandler;	// 200 = 0xc8
    MISSING_TYPE *availableDevicesChangedHandler;	// 216 = 0xd8
    MISSING_TYPE *publishingTimer;	// 232 = 0xe8
}

- (void).cxx_destruct;	// IMP=0x00000000002afb40
- (id)init;	// IMP=0x00000000002afae0
@property(nonatomic, copy) CDUnknownBlockType availableDevicesChangedHandler;
@property(nonatomic, copy) CDUnknownBlockType availableDeviceGroupsChangedHandler;
- (void)beginGuestPairingWithErrorHandler:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000002b1ea0
@property(nonatomic, readonly) _Bool supportsGuestPairing;
- (void)filterDevicesByGroup:(id)arg1;	// IMP=0x00000000002b1870
@property(nonatomic, readonly) _Bool supportsDeviceGrouping;
- (void)cancelPairing;	// IMP=0x00000000002b1340
- (void)selectDevice:(id)arg1 errorHandler:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000002b0fb0
- (_Bool)canGeneratePairingMessage;	// IMP=0x00000000002b0140
- (void)invalidate;	// IMP=0x00000000002b0110
- (void)beginWithBundleID:(id)arg1 serviceIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000002aff30

@end

