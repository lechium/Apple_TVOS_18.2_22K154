//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFOperation.h>

@class HMDMediaEndpoint, NSArray, NSString;

__attribute__((visibility("hidden")))
@interface HMDMediaAccessoryBrowseOperation : HMFOperation
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    void *_session;	// 16 = 0x10
    unsigned int _endpointFeatures;	// 24 = 0x18
    HMDMediaEndpoint *_endpoint;	// 32 = 0x20
    NSArray *_outputDevices;	// 40 = 0x28
    NSString *_accessoryIdentifier;	// 48 = 0x30
}

+ (id)logCategory;	// IMP=0x00100000003bfa02
+ (double)defaultTimeout;	// IMP=0x00100000003bf9d5
- (void).cxx_destruct;	// IMP=0x00000000003bf50e
@property(readonly, copy) NSString *accessoryIdentifier; // @synthesize accessoryIdentifier=_accessoryIdentifier;
- (void)cancel;	// IMP=0x00000000003bf4b2
- (void)main;	// IMP=0x00000000003bf263
@property(readonly) NSArray *outputDevices; // @synthesize outputDevices=_outputDevices;
@property(readonly) HMDMediaEndpoint *endpoint; // @synthesize endpoint=_endpoint;
@property unsigned int endpointFeatures; // @synthesize endpointFeatures=_endpointFeatures;
- (void)dealloc;	// IMP=0x00000000003bf11a
- (id)initWithAccessoryIdentifier:(id)arg1 timeout:(double)arg2;	// IMP=0x00000000003bef6d
- (id)initWithAccessoryIdentifier:(id)arg1;	// IMP=0x00000000003bef58

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

