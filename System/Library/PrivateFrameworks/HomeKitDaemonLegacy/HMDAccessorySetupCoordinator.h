//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDCHIPDataSource, HMFActivity, HMFMessageDispatcher, HMMTRAccessoryServerBrowser, NSMutableDictionary, NSObject, NSString, NSUUID;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDAccessorySetupCoordinator : HMFObject
{
    NSString *_currentBundleIdentifier;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_workQueue;	// 16 = 0x10
    HMFMessageDispatcher *_messageDispatcher;	// 24 = 0x18
    HMMTRAccessoryServerBrowser *_chipAccessoryServerBrowser;	// 32 = 0x20
    HMDCHIPDataSource *_chipDataSource;	// 40 = 0x28
    NSMutableDictionary *_stagingRequestsByUUID;	// 48 = 0x30
    HMFActivity *_metricsActivity;	// 56 = 0x38
    CDUnknownBlockType _urlStringCHIPAccessorySetupPayloadFactory;	// 64 = 0x40
    CDUnknownBlockType _decimalStringRepresentationCHIPAccessorySetupPayloadFactory;	// 72 = 0x48
    CDUnknownBlockType _payloadCHIPAccessorySetupPayloadFactory;	// 80 = 0x50
}

+ (id)logCategory;	// IMP=0x0010000000925236
- (void).cxx_destruct;	// IMP=0x0000000000924d51
@property(copy) CDUnknownBlockType payloadCHIPAccessorySetupPayloadFactory; // @synthesize payloadCHIPAccessorySetupPayloadFactory=_payloadCHIPAccessorySetupPayloadFactory;
@property(copy) CDUnknownBlockType decimalStringRepresentationCHIPAccessorySetupPayloadFactory; // @synthesize decimalStringRepresentationCHIPAccessorySetupPayloadFactory=_decimalStringRepresentationCHIPAccessorySetupPayloadFactory;
@property(copy) CDUnknownBlockType urlStringCHIPAccessorySetupPayloadFactory; // @synthesize urlStringCHIPAccessorySetupPayloadFactory=_urlStringCHIPAccessorySetupPayloadFactory;
@property(retain) HMFActivity *metricsActivity; // @synthesize metricsActivity=_metricsActivity;
@property(readonly) NSMutableDictionary *stagingRequestsByUUID; // @synthesize stagingRequestsByUUID=_stagingRequestsByUUID;
@property(readonly) HMDCHIPDataSource *chipDataSource; // @synthesize chipDataSource=_chipDataSource;
@property(readonly) HMMTRAccessoryServerBrowser *chipAccessoryServerBrowser; // @synthesize chipAccessoryServerBrowser=_chipAccessoryServerBrowser;
@property(readonly) HMFMessageDispatcher *messageDispatcher; // @synthesize messageDispatcher=_messageDispatcher;
@property(readonly) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(copy) NSString *currentBundleIdentifier; // @synthesize currentBundleIdentifier=_currentBundleIdentifier;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSObject<OS_dispatch_queue>",?,R,N

@property(readonly, nonatomic) NSUUID *messageTargetUUID;
- (id)logIdentifier;	// IMP=0x0000000000924b9e
- (id)_setupPayloadWithCHIPSetupPayload:(id)arg1 setupPayloadURL:(id)arg2;	// IMP=0x000000000092478b
- (id)_createCHIPSetupAccessoryPayloadWithSetupPayloadDecimalStringRepresentation:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000924587
- (void)handleCancelStagedCHIPAccessoryPairingMessage:(id)arg1;	// IMP=0x00000000009242a4
- (void)handleCreateCHIPSetupPayloadMessage:(id)arg1;	// IMP=0x0000000000923e8b
- (void)handleCreateCHIPSetupAccessoryPayloadMessage:(id)arg1;	// IMP=0x0000000000923aa3
- (id)createSetupAccessoryPayloadWithCHIPSetupPayload:(id)arg1 error:(id *)arg2;	// IMP=0x000000000092389f
- (id)createCHIPSetupAccessoryPayloadWithSetupPayloadURL:(id)arg1 error:(id *)arg2;	// IMP=0x000000000092364e
- (void)configure;	// IMP=0x000000000092345b
- (id)initWithWorkQueue:(id)arg1 messageDispatcher:(id)arg2 chipAccessoryServerBrowser:(id)arg3 chipDataSource:(id)arg4;	// IMP=0x0000000000923263

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

