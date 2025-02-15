//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HMFMessage, NSError, NSMutableArray, NSUUID;

__attribute__((visibility("hidden")))
@interface HMDAccessorySetupCoordinatorStagingRequest : NSObject
{
    NSUUID *_UUID;	// 8 = 0x8
    HMFMessage *_pendingCancelMessage;	// 16 = 0x10
    HMFMessage *_pendingRequestMessage;	// 24 = 0x18
    CDUnknownBlockType _confirmDeviceCredentialCompletionHandler;	// 32 = 0x20
    CDUnknownBlockType _selectWiFiNetworkHandler;	// 40 = 0x28
    CDUnknownBlockType _selectThreadNetworkHandler;	// 48 = 0x30
    CDUnknownBlockType _cancelHandler;	// 56 = 0x38
    NSMutableArray *_pendingResponsePayloads;	// 64 = 0x40
    NSError *_error;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x000000000031d7e4
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) NSMutableArray *pendingResponsePayloads; // @synthesize pendingResponsePayloads=_pendingResponsePayloads;
@property(copy, nonatomic) CDUnknownBlockType cancelHandler; // @synthesize cancelHandler=_cancelHandler;
@property(copy, nonatomic) CDUnknownBlockType selectThreadNetworkHandler; // @synthesize selectThreadNetworkHandler=_selectThreadNetworkHandler;
@property(copy, nonatomic) CDUnknownBlockType selectWiFiNetworkHandler; // @synthesize selectWiFiNetworkHandler=_selectWiFiNetworkHandler;
@property(copy, nonatomic) CDUnknownBlockType confirmDeviceCredentialCompletionHandler; // @synthesize confirmDeviceCredentialCompletionHandler=_confirmDeviceCredentialCompletionHandler;
@property(retain, nonatomic) HMFMessage *pendingRequestMessage; // @synthesize pendingRequestMessage=_pendingRequestMessage;
@property(retain, nonatomic) HMFMessage *pendingCancelMessage; // @synthesize pendingCancelMessage=_pendingCancelMessage;
@property(readonly, copy) NSUUID *UUID; // @synthesize UUID=_UUID;
- (id)init;	// IMP=0x000000000031d69a

@end

