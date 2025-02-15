//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CUWACSession, CUWiFiDevice, NSString, NSUUID;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDCUWiFiDeviceWrapper : NSObject
{
    CUWiFiDevice *_cuWiFiDevice;	// 8 = 0x8
    CUWACSession *_wacSession;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 24 = 0x18
    NSString *deviceID;	// 32 = 0x20
}

+ (id)logCategory;	// IMP=0x001000000064a421
- (void).cxx_destruct;	// IMP=0x0000000000649d0a
@property(readonly, nonatomic) NSString *deviceID; // @synthesize deviceID;
- (id)logIdentifier;	// IMP=0x0000000000649cee
@property(readonly, copy) NSString *description;
- (void)cancelConfigurationWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000649afb
- (void)startConfigurationWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000064984e
@property(readonly, nonatomic) id underlyingDevice; // @dynamic underlyingDevice;
@property(readonly, nonatomic) _Bool supportsAirPlay2; // @dynamic supportsAirPlay2;
@property(readonly, nonatomic) _Bool isConfigured; // @dynamic isConfigured;
@property(readonly, nonatomic) NSString *name; // @dynamic name;
@property(readonly, nonatomic) NSString *ssid; // @dynamic ssid;
@property(readonly, nonatomic) NSUUID *identifier;
- (id)initWithCUWiFiDevice:(id)arg1 dispatchQueue:(id)arg2;	// IMP=0x0000000000649620

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

