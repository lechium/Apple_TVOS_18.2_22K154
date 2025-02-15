//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSArray, NSString, OS_dispatch_queue;

@interface _TtC7Sharing30AskToAirDropReceiverController : NSObject
{
    MISSING_TYPE *queue;	// 8 = 0x8
    MISSING_TYPE *isNearbyDeviceClose;	// 16 = 0x10
    MISSING_TYPE *hasPendingOrActiveConnections;	// 17 = 0x11
    MISSING_TYPE *isLegacyMode;	// 18 = 0x12
    MISSING_TYPE *nearbyDevicesDisplayName;	// 24 = 0x18
    MISSING_TYPE *connectionState;	// 40 = 0x28
    MISSING_TYPE *stateChangedHandler;	// 48 = 0x30
    MISSING_TYPE *connectionStateChangedHandler;	// 64 = 0x40
    MISSING_TYPE *pendingOrActiveConnectionsChangedHandler;	// 80 = 0x50
    MISSING_TYPE *nearbyDeviceCloseChangedHandler;	// 96 = 0x60
    MISSING_TYPE *errorHandler;	// 112 = 0x70
    MISSING_TYPE *connectedNearbyDeviceNames;	// 128 = 0x80
    MISSING_TYPE *sharingName;	// 136 = 0x88
    MISSING_TYPE *airDropClient;	// 152 = 0x98
    MISSING_TYPE *privacyRemoteDeviceNames;	// 160 = 0xa0
}

- (void).cxx_destruct;	// IMP=0x000000000022a060
- (void)fetchSharingNameWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000229810
- (void)fetchPrivacyPromptInformationWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000229510
- (void)disconnectFromAllNearbyDevices;	// IMP=0x0000000000229270
- (void)connectToAllNearbyDevices;	// IMP=0x0000000000228ee0
- (id)initWithQueue:(id)arg1;	// IMP=0x0000000000228af0
- (id)init;	// IMP=0x0000000000227cf0
@property(nonatomic, copy) NSString *sharingName;
@property(nonatomic, copy) NSArray *connectedNearbyDeviceNames;
@property(nonatomic) _Bool hasSeenPrivacyPrompt;
@property(nonatomic, copy) CDUnknownBlockType errorHandler;
@property(nonatomic, copy) CDUnknownBlockType nearbyDeviceCloseChangedHandler;
@property(nonatomic, copy) CDUnknownBlockType pendingOrActiveConnectionsChangedHandler;
@property(nonatomic, copy) CDUnknownBlockType connectionStateChangedHandler;
@property(nonatomic, copy) CDUnknownBlockType stateChangedHandler;
@property(nonatomic) long long connectionState; // @synthesize connectionState;
@property(nonatomic, copy) NSString *nearbyDevicesDisplayName;
@property(nonatomic) _Bool isLegacyMode; // @synthesize isLegacyMode;
@property(nonatomic) _Bool hasPendingOrActiveConnections; // @synthesize hasPendingOrActiveConnections;
@property(nonatomic) _Bool isNearbyDeviceClose; // @synthesize isNearbyDeviceClose;
@property(nonatomic, readonly) OS_dispatch_queue *queue; // @synthesize queue;

@end

