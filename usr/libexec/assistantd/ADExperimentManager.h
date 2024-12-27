//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AFExperimentContext, NSDictionary, NSURLSession;
@protocol OS_dispatch_queue;

@interface ADExperimentManager : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSDictionary *_configurationsByIdentifier;	// 16 = 0x10
    NSDictionary *_serverConfigurationInfoByIdentifier;	// 24 = 0x18
    AFExperimentContext *_currentContext;	// 32 = 0x20
    NSURLSession *_session;	// 40 = 0x28
}

+ (id)sharedManager;	// IMP=0x00200000001d506b
+ (id)serverConfigurationInfoForVoiceSelectionExperiment;	// IMP=0x0010000000159946
+ (void)emitUpdatedExperiments:(id)arg1;	// IMP=0x00100000001c53c9
+ (_Bool)logAssetSetExperiment:(id)arg1 trialData:(id)arg2 experimentsEmitted:(id)arg3;	// IMP=0x00100000001c44fd
+ (id)treatmentAllocationStatusToString:(int)arg1;	// IMP=0x00100000001c44db
+ (int)treatmentAllocationStatusFromAllocationStatusType:(unsigned char)arg1;	// IMP=0x00100000001c443e
+ (id)expExperimentWithExperimentIdentifiers:(id)arg1 status:(int)arg2 trialNamespace:(id)arg3;	// IMP=0x00100000001c4256
+ (id)expExperimentFromExperimentAllocationStatus:(id)arg1;	// IMP=0x00100000001c3fb8
+ (id)filterExperiments:(id)arg1 experimentsEmitted:(id)arg2 namespaceAssetSet:(id)arg3;	// IMP=0x00100000001c3689
+ (id)abExperimentFromExperimentAllocationStatus:(id)arg1;	// IMP=0x00100000001c350c
+ (id)getAllEXPExperimentsFromProvider:(id)arg1 cursor:(id)arg2 environment:(int)arg3 fromDate:(id)arg4 retries:(unsigned long long)arg5 experimentsEmitted:(id)arg6 namespaceAssetSet:(id)arg7;	// IMP=0x00100000001c3192
+ (id)getActiveEXPExperimentsFromProvider:(id)arg1 environment:(int)arg2 retries:(unsigned long long)arg3;	// IMP=0x00100000001c2e72
+ (id)getActiveABExperimentsFromProvider:(id)arg1 environment:(int)arg2 retries:(unsigned long long)arg3;	// IMP=0x00100000001c2b52
+ (id)experimentIdentifiersTrialProject:(id)arg1 trialNamespace:(id)arg2;	// IMP=0x00100000001c2aa7
+ (void)tracerAllocationsWithQueue:(id)arg1;	// IMP=0x00100000001c296e
+ (id)namespaceAssetSet:(id)arg1;	// IMP=0x00100000001c28bd
+ (id)assetSets;	// IMP=0x00100000001c287d
+ (id)configurationForInvocationFeedback;	// IMP=0x0010000000249a53
- (void).cxx_destruct;	// IMP=0x00200000001d33c5
- (void)_setExperimentState:(id)arg1 forServerConfigurationInfo:(id)arg2;	// IMP=0x00100000001d32f5
- (id)_getExperimentStateForServerConfigurationInfo:(id)arg1;	// IMP=0x00100000001d3219
- (id)_fetchDictionaryWithFileURL:(id)arg1;	// IMP=0x00100000001d310f
- (id)_fetchCachedServerConfigurationForConfigurationInfo:(id)arg1;	// IMP=0x00100000001d2fe7
- (void)_storeServerConfig:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000001d2d3a
- (void)_resolveDataTaskForURLSession:(id)arg1 URL:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000001d2c81
- (void)_remoteFetchConfigMetadataWithServerConfigurationInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000001d2b00
- (id)_fallbackConfigurationForEndedExperimentWithIdentifier:(id)arg1 experimentState:(id)arg2;	// IMP=0x00100000001d29f1
- (_Bool)_isEndingGroupIdentifier:(id)arg1 validForConfiguration:(id)arg2;	// IMP=0x00100000001d27bb
- (void)_serverConfigurationForServerConfigurationInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000001d254d
- (void)_setExperimentIdentifier:(id)arg1 forConfigurationIdentifier:(id)arg2;	// IMP=0x00100000001d24b1
- (id)_experimentIdentifierForConfigurationIdentifier:(id)arg1;	// IMP=0x00100000001d2433
- (unsigned long long)_experimentGroupHashForExperimentConfiguration:(id)arg1 experimentIdentifier:(id)arg2;	// IMP=0x00100000001d2350
- (id)_createExperimentForExperimentConfiguration:(id)arg1 experimentIdentifier:(id)arg2;	// IMP=0x00100000001d1e20
- (id)_groupOverrideIdentifierForExperimentConfiguration:(id)arg1;	// IMP=0x00100000001d1db5
- (id)_experimentOverrideForExperimentConfiguration:(id)arg1;	// IMP=0x00100000001d1a10
- (void)resetExperimentForConfigurationIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000001d1959
- (id)_experimentForExperimentConfiguration:(id)arg1;	// IMP=0x00100000001d183e
- (id)_buildContext;	// IMP=0x00100000001d1753
- (id)_getContext;	// IMP=0x00100000001d170c
- (id)_buildServerConfigurationInfosByIdentifier;	// IMP=0x00100000001d14e5
- (id)_buildConfigurationsByIdentifier;	// IMP=0x00100000001d118a
- (id)_getServerConfigurationInfosByIdentifier;	// IMP=0x00100000001d1143
- (id)_getConfigurationsByIdentifier;	// IMP=0x00100000001d10fc
- (void)_logDidVendExperiment:(id)arg1 fetchDetails:(id)arg2 error:(id)arg3;	// IMP=0x00100000001d1023
- (void)getExperimentForConfigurationIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000001d0ebb
- (void)synchronizeExperimentConfigurationsIfApplicableWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000001d0acf
- (void)getContextWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000001d0a38
- (id)context;	// IMP=0x00100000001d097f
- (void)getConfigurationsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000001d08e8
- (id)configurations;	// IMP=0x00100000001d082f
- (id)init;	// IMP=0x00100000001d0786

@end

