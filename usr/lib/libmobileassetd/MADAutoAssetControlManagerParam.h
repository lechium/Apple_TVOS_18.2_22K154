//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MAAutoAssetProgress, MAAutoAssetSelector, MAAutoAssetStatus, MADAutoAssetClientRequest, MADAutoAssetDescriptor, MADAutoAssetJob, MADAutoAssetJobInformation, MADAutoSetConfiguration, MADAutoSetDescriptor, MADAutoSetJobInformation, MANAutoAssetSetPolicy, NSArray, NSDictionary, NSError, NSString, SUCoreConnectClientProxy, SUCoreConnectMessage;

__attribute__((visibility("hidden")))
@interface MADAutoAssetControlManagerParam : NSObject
{
    _Bool _schedulerInvolved;	// 8 = 0x8
    _Bool _potentialNetworkFailure;	// 9 = 0x9
    NSString *_paramSafeSummary;	// 16 = 0x10
    long long _paramType;	// 24 = 0x18
    NSString *_clientID;	// 32 = 0x20
    NSArray *_scheduledJobs;	// 40 = 0x28
    MADAutoAssetClientRequest *_clientRequest;	// 48 = 0x30
    NSArray *_clientRequestArray;	// 56 = 0x38
    SUCoreConnectMessage *_clientRequestMessage;	// 64 = 0x40
    SUCoreConnectClientProxy *_clientProgressProxy;	// 72 = 0x48
    SUCoreConnectMessage *_responseMessage;	// 80 = 0x50
    NSError *_responseError;	// 88 = 0x58
    NSArray *_downloadsInFlight;	// 96 = 0x60
    NSString *_autoAssetJobID;	// 104 = 0x68
    NSDictionary *_autoAssetCatalog;	// 112 = 0x70
    NSError *_lockForUseError;	// 120 = 0x78
    NSError *_finishedError;	// 128 = 0x80
    MADAutoAssetJobInformation *_jobInformation;	// 136 = 0x88
    MAAutoAssetProgress *_downloadProgress;	// 144 = 0x90
    MAAutoAssetStatus *_autoAssetStatus;	// 152 = 0x98
    MAAutoAssetSelector *_autoAssetSelector;	// 160 = 0xa0
    NSString *_autoAssetUUID;	// 168 = 0xa8
    MADAutoAssetJob *_fromAutoAssetJob;	// 176 = 0xb0
    MAAutoAssetSelector *_originalSelector;	// 184 = 0xb8
    NSArray *_setOfAutoAssetSelectors;	// 192 = 0xc0
    NSArray *_pushNotifications;	// 200 = 0xc8
    MANAutoAssetSetPolicy *_setPolicy;	// 208 = 0xd0
    NSString *_assetTargetOSVersion;	// 216 = 0xd8
    NSString *_assetTargetBuildVersion;	// 224 = 0xe0
    NSString *_assetTargetTrainName;	// 232 = 0xe8
    NSString *_assetTargetRestoreVersion;	// 240 = 0xf0
    NSArray *_stagedToDownloaded;	// 248 = 0xf8
    NSArray *_stagedSetLookupResults;	// 256 = 0x100
    MADAutoAssetDescriptor *_downloadingDescriptor;	// 264 = 0x108
    MADAutoAssetDescriptor *_baseForPatchDescriptor;	// 272 = 0x110
    NSArray *_baseForStagingDescriptors;	// 280 = 0x118
    NSString *_clientDomainName;	// 288 = 0x120
    NSString *_assetSetIdentifier;	// 296 = 0x128
    MADAutoSetConfiguration *_setConfiguration;	// 304 = 0x130
    NSString *_setAtomicInstance;	// 312 = 0x138
    MADAutoSetJobInformation *_setJobInformation;	// 320 = 0x140
    NSArray *_triggeredSets;	// 328 = 0x148
    MADAutoSetDescriptor *_setDescriptor;	// 336 = 0x150
    NSArray *_autoAssetDescriptors;	// 344 = 0x158
    CDUnknownBlockType _clientReplyCompletion;	// 352 = 0x160
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00100000000b6377
- (void).cxx_destruct;	// IMP=0x00000000000b80ee
@property(copy, nonatomic) CDUnknownBlockType clientReplyCompletion; // @synthesize clientReplyCompletion=_clientReplyCompletion;
@property(readonly, retain, nonatomic) NSArray *autoAssetDescriptors; // @synthesize autoAssetDescriptors=_autoAssetDescriptors;
@property(readonly, retain, nonatomic) MADAutoSetDescriptor *setDescriptor; // @synthesize setDescriptor=_setDescriptor;
@property(readonly, retain, nonatomic) NSArray *triggeredSets; // @synthesize triggeredSets=_triggeredSets;
@property(readonly, retain, nonatomic) MADAutoSetJobInformation *setJobInformation; // @synthesize setJobInformation=_setJobInformation;
@property(readonly, retain, nonatomic) NSString *setAtomicInstance; // @synthesize setAtomicInstance=_setAtomicInstance;
@property(readonly, retain, nonatomic) MADAutoSetConfiguration *setConfiguration; // @synthesize setConfiguration=_setConfiguration;
@property(readonly, retain, nonatomic) NSString *assetSetIdentifier; // @synthesize assetSetIdentifier=_assetSetIdentifier;
@property(readonly, retain, nonatomic) NSString *clientDomainName; // @synthesize clientDomainName=_clientDomainName;
@property(readonly, nonatomic) _Bool potentialNetworkFailure; // @synthesize potentialNetworkFailure=_potentialNetworkFailure;
@property(readonly, nonatomic) _Bool schedulerInvolved; // @synthesize schedulerInvolved=_schedulerInvolved;
@property(retain, nonatomic) NSArray *baseForStagingDescriptors; // @synthesize baseForStagingDescriptors=_baseForStagingDescriptors;
@property(retain, nonatomic) MADAutoAssetDescriptor *baseForPatchDescriptor; // @synthesize baseForPatchDescriptor=_baseForPatchDescriptor;
@property(retain, nonatomic) MADAutoAssetDescriptor *downloadingDescriptor; // @synthesize downloadingDescriptor=_downloadingDescriptor;
@property(retain, nonatomic) NSArray *stagedSetLookupResults; // @synthesize stagedSetLookupResults=_stagedSetLookupResults;
@property(retain, nonatomic) NSArray *stagedToDownloaded; // @synthesize stagedToDownloaded=_stagedToDownloaded;
@property(retain, nonatomic) NSString *assetTargetRestoreVersion; // @synthesize assetTargetRestoreVersion=_assetTargetRestoreVersion;
@property(retain, nonatomic) NSString *assetTargetTrainName; // @synthesize assetTargetTrainName=_assetTargetTrainName;
@property(retain, nonatomic) NSString *assetTargetBuildVersion; // @synthesize assetTargetBuildVersion=_assetTargetBuildVersion;
@property(retain, nonatomic) NSString *assetTargetOSVersion; // @synthesize assetTargetOSVersion=_assetTargetOSVersion;
@property(retain, nonatomic) MANAutoAssetSetPolicy *setPolicy; // @synthesize setPolicy=_setPolicy;
@property(readonly, retain, nonatomic) NSArray *pushNotifications; // @synthesize pushNotifications=_pushNotifications;
@property(readonly, retain, nonatomic) NSArray *setOfAutoAssetSelectors; // @synthesize setOfAutoAssetSelectors=_setOfAutoAssetSelectors;
@property(retain, nonatomic) MAAutoAssetSelector *originalSelector; // @synthesize originalSelector=_originalSelector;
@property(retain, nonatomic) MADAutoAssetJob *fromAutoAssetJob; // @synthesize fromAutoAssetJob=_fromAutoAssetJob;
@property(retain, nonatomic) NSString *autoAssetUUID; // @synthesize autoAssetUUID=_autoAssetUUID;
@property(readonly, retain, nonatomic) MAAutoAssetSelector *autoAssetSelector; // @synthesize autoAssetSelector=_autoAssetSelector;
@property(readonly, retain, nonatomic) MAAutoAssetStatus *autoAssetStatus; // @synthesize autoAssetStatus=_autoAssetStatus;
@property(readonly, retain, nonatomic) MAAutoAssetProgress *downloadProgress; // @synthesize downloadProgress=_downloadProgress;
@property(retain, nonatomic) MADAutoAssetJobInformation *jobInformation; // @synthesize jobInformation=_jobInformation;
@property(readonly, retain, nonatomic) NSError *finishedError; // @synthesize finishedError=_finishedError;
@property(readonly, retain, nonatomic) NSError *lockForUseError; // @synthesize lockForUseError=_lockForUseError;
@property(readonly, retain, nonatomic) NSDictionary *autoAssetCatalog; // @synthesize autoAssetCatalog=_autoAssetCatalog;
@property(retain, nonatomic) NSString *autoAssetJobID; // @synthesize autoAssetJobID=_autoAssetJobID;
@property(readonly, retain, nonatomic) NSArray *downloadsInFlight; // @synthesize downloadsInFlight=_downloadsInFlight;
@property(retain, nonatomic) NSError *responseError; // @synthesize responseError=_responseError;
@property(readonly, retain, nonatomic) SUCoreConnectMessage *responseMessage; // @synthesize responseMessage=_responseMessage;
@property(readonly, retain, nonatomic) SUCoreConnectClientProxy *clientProgressProxy; // @synthesize clientProgressProxy=_clientProgressProxy;
@property(readonly, retain, nonatomic) SUCoreConnectMessage *clientRequestMessage; // @synthesize clientRequestMessage=_clientRequestMessage;
@property(retain, nonatomic) NSArray *clientRequestArray; // @synthesize clientRequestArray=_clientRequestArray;
@property(retain, nonatomic) MADAutoAssetClientRequest *clientRequest; // @synthesize clientRequest=_clientRequest;
@property(retain, nonatomic) NSArray *scheduledJobs; // @synthesize scheduledJobs=_scheduledJobs;
@property(readonly, retain, nonatomic) NSString *clientID; // @synthesize clientID=_clientID;
@property(readonly, nonatomic) long long paramType; // @synthesize paramType=_paramType;
@property(retain, nonatomic) NSString *paramSafeSummary; // @synthesize paramSafeSummary=_paramSafeSummary;
- (void)updateSafeSummary;	// IMP=0x00000000000b7cfe
- (id)summary;	// IMP=0x00000000000b7cec
- (id)_summary;	// IMP=0x00000000000b6391
- (id)description;	// IMP=0x00000000000b637f
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000b5a3c
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000b4988
- (id)initWithParamType:(long long)arg1 withSafeSummary:(id)arg2 withScheduledJobs:(id)arg3 withClientID:(id)arg4 withClientRequestMessage:(id)arg5 withClientProgressProxy:(id)arg6 withClientReplyCompletion:(CDUnknownBlockType)arg7 withResponseMessage:(id)arg8 withResponseError:(id)arg9 withDownloadsInFlight:(id)arg10 withAutoAssetJobID:(id)arg11 withAutoAssetCatalog:(id)arg12 withLockForUseError:(id)arg13 withFinishedError:(id)arg14 withDownloadProgress:(id)arg15 withJobCurrentStatus:(id)arg16 withAutoAssetSelector:(id)arg17 withAutoAssetUUID:(id)arg18 withSetOfAutoAssetSelectors:(id)arg19 withPushNotifications:(id)arg20 withSetDescriptor:(id)arg21 withAutoAssetDescriptors:(id)arg22 withSetPolicy:(id)arg23 withAssetTargetOSVersion:(id)arg24 withAssetTargetBuildVersion:(id)arg25 withAssetTargetTrainName:(id)arg26 withAssetTargetRestoreVersion:(id)arg27 withStagedToDownloaded:(id)arg28 withStagedLookupResults:(id)arg29 withDownloadingDescriptor:(id)arg30 withBaseForPatchDescriptor:(id)arg31 withBaseForStagingDescriptors:(id)arg32 withSchedulerInvolved:(_Bool)arg33 withPotentialNetworkFailure:(_Bool)arg34 withClientDomainName:(id)arg35 withAssetSetIdentifier:(id)arg36 withSetConfiguration:(id)arg37 withSetAtomicInstance:(id)arg38 withSetJobInformation:(id)arg39 withTriggeredSets:(id)arg40;	// IMP=0x00000000000b4189
- (id)initForSetJobClientDomain:(id)arg1 forAssetSetIdentifier:(id)arg2;	// IMP=0x00000000000b40d1
- (id)initForFinishedSetJob:(id)arg1 forAssetSetIdentifier:(id)arg2 withSetAtomicInstance:(id)arg3 withAutoAssetUUID:(id)arg4 withSetJobInformation:(id)arg5 withSchedulerInvolved:(_Bool)arg6 withPotentialNetworkFailure:(_Bool)arg7;	// IMP=0x00000000000b3ff0
- (id)initForSetJobIssueProgress:(id)arg1 forDomainName:(id)arg2 forAssetSetIdentifier:(id)arg3 withSetAtomicInstance:(id)arg4 withAutoAssetUUID:(id)arg5 withSetJobInformation:(id)arg6 withLockForUseError:(id)arg7;	// IMP=0x00000000000b3f10
- (id)initForSetJobIssueReply:(CDUnknownBlockType)arg1 forDomainName:(id)arg2 forAssetSetIdentifier:(id)arg3 withAutoAssetUUID:(id)arg4 withSetJobInformation:(id)arg5 withResponseError:(id)arg6;	// IMP=0x00000000000b3e3b
- (id)initForSetJobFound:(id)arg1 forAssetSetIdentifier:(id)arg2 withSetAtomicInstance:(id)arg3 withAutoAssetUUID:(id)arg4 withSetJobInformation:(id)arg5;	// IMP=0x00000000000b3d67
- (id)initWithPromoted:(id)arg1 withSetLookupResults:(id)arg2;	// IMP=0x00000000000b3ca7
- (id)initForTimerFired;	// IMP=0x00000000000b3bf7
- (id)initForSetConfiguration:(id)arg1 withSetDescriptor:(id)arg2;	// IMP=0x00000000000b3b37
- (id)initForSetConfiguration:(id)arg1;	// IMP=0x00000000000b3a7b
- (id)initForAssetSelector:(id)arg1;	// IMP=0x00000000000b39c2
- (id)initForStagerJobLookupResults:(id)arg1 withBaseForStagingDescriptors:(id)arg2 withDetermineError:(id)arg3;	// IMP=0x00000000000b3900
- (id)initForStagerJobInformation:(id)arg1;	// IMP=0x00000000000b3847
- (id)initForStagerJobStart:(id)arg1 withStagerSetConfiguration:(id)arg2 usingCachedAutoAssetCatalog:(id)arg3 usingBaseForPatching:(id)arg4 withAssetTargetOSVersion:(id)arg5 withAssetTargetBuildVersion:(id)arg6;	// IMP=0x00000000000b3779
- (id)initForStagerSetJobStart:(id)arg1 withAssetTargetOSVersion:(id)arg2 withAssetTargetBuildVersion:(id)arg3 withAssetTargetTrainName:(id)arg4 withAssetTargetRestoreVersion:(id)arg5;	// IMP=0x00000000000b36a2
- (id)initForAutoAssetDescriptors:(id)arg1;	// IMP=0x00000000000b35e6
- (id)initForSecureOperationsFinished:(id)arg1 forSetDescriptor:(id)arg2 forAutoAssetDescriptors:(id)arg3 withError:(id)arg4;	// IMP=0x00000000000b3525
- (id)initForSecureOperationsFinished:(id)arg1 forSetDescriptor:(id)arg2 forAutoAssetDescriptors:(id)arg3;	// IMP=0x00000000000b346d
- (id)initForReceivedPushNotifications:(id)arg1;	// IMP=0x00000000000b33b4
- (id)initForTriggeredNoActivity;	// IMP=0x00000000000b32fe
- (id)initForTriggeredSets:(id)arg1;	// IMP=0x00000000000b323c
- (id)initForTriggeredSelectors:(id)arg1;	// IMP=0x00000000000b317d
- (id)initForFinishedJobSelector:(id)arg1 withAutoAssetUUID:(id)arg2 withSchedulerInvolved:(_Bool)arg3 withPotentialNetworkFailure:(_Bool)arg4;	// IMP=0x00000000000b30c8
- (id)initForJobIssueReply:(CDUnknownBlockType)arg1 forAutoAssetSelector:(id)arg2 withAutoAssetUUID:(id)arg3 withResponseMessage:(id)arg4 withResponseError:(id)arg5;	// IMP=0x00000000000b2ffe
- (id)initForJobIssueProgress:(id)arg1 forAutoAssetSelector:(id)arg2 withAutoAssetUUID:(id)arg3 withJobCurrentStatus:(id)arg4 withLockForUseError:(id)arg5;	// IMP=0x00000000000b2f34
- (id)initForJobFoundSelector:(id)arg1 withAutoAssetUUID:(id)arg2;	// IMP=0x00000000000b2e7f
- (id)initForCurrentJobID:(id)arg1 withProgress:(id)arg2;	// IMP=0x00000000000b2dc5
- (id)initForConfigFinishedJobID:(id)arg1 withError:(id)arg2;	// IMP=0x00000000000b2d10
- (id)initForFinishedJobID:(id)arg1 withCatalog:(id)arg2 withError:(id)arg3;	// IMP=0x00000000000b2c52
- (id)initForFinishedJobID:(id)arg1 withError:(id)arg2;	// IMP=0x00000000000b2b9d
- (id)initWithDownloadsInFlight:(id)arg1;	// IMP=0x00000000000b2ae4
- (id)initWithClientRequest:(id)arg1 reportingProgressThroughProxy:(id)arg2 withReplyCompletion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000b2a26
- (id)initWithClientID:(id)arg1;	// IMP=0x00000000000b2976
- (id)initWithScheduledJobs:(id)arg1;	// IMP=0x00000000000b28c6
- (id)initWithSafeSummary:(id)arg1;	// IMP=0x00000000000b2818

@end

