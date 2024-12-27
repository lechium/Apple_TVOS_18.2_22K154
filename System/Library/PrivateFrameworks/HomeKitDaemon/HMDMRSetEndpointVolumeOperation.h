//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFOperation.h>

@class NSArray, NSError, NSNumber, NSString;
@protocol HMDMPCAssistantDiscovery, HMDMRSetEndpointVolumeOperationExternalObjectInterface;

__attribute__((visibility("hidden")))
@interface HMDMRSetEndpointVolumeOperation : HMFOperation
{
    NSNumber *_volume;	// 8 = 0x8
    NSArray *_routeIDs;	// 16 = 0x10
    NSError *_partialExecutionError;	// 24 = 0x18
    id <HMDMPCAssistantDiscovery> _discovery;	// 32 = 0x20
    id <HMDMRSetEndpointVolumeOperationExternalObjectInterface> _externalObjectInterface;	// 40 = 0x28
}

+ (id)logCategory;	// IMP=0x00100000003f52cb
+ (id)shortDescription;	// IMP=0x00100000003f52be
- (void).cxx_destruct;	// IMP=0x00000000003f2e66
@property(readonly) id <HMDMRSetEndpointVolumeOperationExternalObjectInterface> externalObjectInterface; // @synthesize externalObjectInterface=_externalObjectInterface;
@property(retain, nonatomic) id <HMDMPCAssistantDiscovery> discovery; // @synthesize discovery=_discovery;
@property(retain, nonatomic) NSError *partialExecutionError; // @synthesize partialExecutionError=_partialExecutionError;
@property(readonly, copy, nonatomic) NSArray *routeIDs; // @synthesize routeIDs=_routeIDs;
@property(readonly, nonatomic) NSNumber *volume; // @synthesize volume=_volume;
@property(readonly, copy) NSString *description;
@property(readonly, copy, nonatomic) NSArray *attributeDescriptions;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSArray",?,R,C,N

@property(readonly, copy) NSString *privateDescription;
@property(readonly, copy) NSString *shortDescription;
- (id)setVolumeOnEndpoint:(id)arg1 outputDeviceUID:(id)arg2;	// IMP=0x00000000003f27f3
- (id)getVolumeCapabilitiesForEndpoint:(id)arg1 outputDeviceUID:(id)arg2;	// IMP=0x00000000003f24ff
- (id)connectToEndpoint:(id)arg1 connection:(id)arg2;	// IMP=0x00000000003f2215
- (id)discoverRemoteControlEndpointsForUIDs:(id)arg1;	// IMP=0x00000000003f2021
- (_Bool)cancelOnSetup;	// IMP=0x00000000003f1a0d
- (void)generateOverallResultAndFinishWithDeviceStatuses:(id)arg1 overallError:(id)arg2;	// IMP=0x00000000003f0cdf
- (void)main;	// IMP=0x00000000003f0a7a
- (id)initWithRouteIDs:(id)arg1 volume:(id)arg2;	// IMP=0x00000000003f09f4
- (id)initWithRouteIDs:(id)arg1 volume:(id)arg2 externalObjectInterface:(id)arg3;	// IMP=0x00000000003f08a2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly, copy) NSString *propertyDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) Class superclass;

@end

