//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MAAutoAssetSelector, MADAutoAssetClientRequest, MADAutoAssetDescriptor, MADAutoAssetJobInformation, MADAutoSetConfiguration, NSArray, NSDictionary, NSError, NSString;

__attribute__((visibility("hidden")))
@interface MADAutoAssetStagerParam : NSObject
{
    NSString *_paramSafeSummary;	// 8 = 0x8
    long long _paramType;	// 16 = 0x10
    MADAutoAssetClientRequest *_stagingClientRequest;	// 24 = 0x18
    NSArray *_baseForStagingDescriptors;	// 32 = 0x20
    MADAutoAssetJobInformation *_jobInformation;	// 40 = 0x28
    NSDictionary *_autoAssetCatalog;	// 48 = 0x30
    NSError *_operationError;	// 56 = 0x38
    NSString *_assetType;	// 64 = 0x40
    MAAutoAssetSelector *_assetSelector;	// 72 = 0x48
    MADAutoSetConfiguration *_setIdentifierConfiguration;	// 80 = 0x50
    NSArray *_alreadyDownloaded;	// 88 = 0x58
    NSArray *_setConfigurations;	// 96 = 0x60
    NSString *_timerUUID;	// 104 = 0x68
    NSArray *_setTargets;	// 112 = 0x70
    NSArray *_scheduledJobs;	// 120 = 0x78
    MADAutoAssetDescriptor *_downloadedDescriptor;	// 128 = 0x80
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00100000000bb777
- (void).cxx_destruct;	// IMP=0x00000000000bbf6c
@property(readonly, retain, nonatomic) MADAutoAssetDescriptor *downloadedDescriptor; // @synthesize downloadedDescriptor=_downloadedDescriptor;
@property(readonly, retain, nonatomic) NSArray *scheduledJobs; // @synthesize scheduledJobs=_scheduledJobs;
@property(readonly, retain, nonatomic) NSArray *setTargets; // @synthesize setTargets=_setTargets;
@property(readonly, retain, nonatomic) NSString *timerUUID; // @synthesize timerUUID=_timerUUID;
@property(readonly, retain, nonatomic) NSArray *setConfigurations; // @synthesize setConfigurations=_setConfigurations;
@property(readonly, retain, nonatomic) NSArray *alreadyDownloaded; // @synthesize alreadyDownloaded=_alreadyDownloaded;
@property(readonly, retain, nonatomic) MADAutoSetConfiguration *setIdentifierConfiguration; // @synthesize setIdentifierConfiguration=_setIdentifierConfiguration;
@property(readonly, retain, nonatomic) MAAutoAssetSelector *assetSelector; // @synthesize assetSelector=_assetSelector;
@property(readonly, retain, nonatomic) NSString *assetType; // @synthesize assetType=_assetType;
@property(readonly, retain, nonatomic) NSError *operationError; // @synthesize operationError=_operationError;
@property(readonly, retain, nonatomic) NSDictionary *autoAssetCatalog; // @synthesize autoAssetCatalog=_autoAssetCatalog;
@property(readonly, retain, nonatomic) MADAutoAssetJobInformation *jobInformation; // @synthesize jobInformation=_jobInformation;
@property(retain, nonatomic) NSArray *baseForStagingDescriptors; // @synthesize baseForStagingDescriptors=_baseForStagingDescriptors;
@property(retain, nonatomic) MADAutoAssetClientRequest *stagingClientRequest; // @synthesize stagingClientRequest=_stagingClientRequest;
@property(readonly, nonatomic) long long paramType; // @synthesize paramType=_paramType;
@property(retain, nonatomic) NSString *paramSafeSummary; // @synthesize paramSafeSummary=_paramSafeSummary;
- (void)updateSafeSummary;	// IMP=0x00000000000bbe4a
- (id)summary;	// IMP=0x00000000000bbe38
- (id)_summary;	// IMP=0x00000000000bb791
- (id)description;	// IMP=0x00000000000bb77f
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000bb3ff
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000bac7e
- (id)initWithParamType:(long long)arg1 withSafeSummary:(id)arg2 withStagingClientRequest:(id)arg3 withBaseForStagingDescriptors:(id)arg4 withJobInformation:(id)arg5 withAutoAssetCatalog:(id)arg6 withOperationError:(id)arg7 withAssetType:(id)arg8 withAssetSelector:(id)arg9 withSetIdentifierConfiguration:(id)arg10 withTimerUUID:(id)arg11 withAlreadyDownloaded:(id)arg12 withSetConfigurations:(id)arg13 withSetTargets:(id)arg14 withScheduledJobs:(id)arg15 withDownloadedDescriptor:(id)arg16;	// IMP=0x00000000000ba979
- (id)initWithAlreadyDownloadedDescriptors:(id)arg1 withSetConfigurations:(id)arg2 withSetTargets:(id)arg3 withScheduledJobs:(id)arg4;	// IMP=0x00000000000ba920
- (id)initWithTimerUUID:(id)arg1;	// IMP=0x00000000000ba8cf
- (id)initWithSetConfiguration:(id)arg1;	// IMP=0x00000000000ba87e
- (id)initWithAssetSelector:(id)arg1;	// IMP=0x00000000000ba82d
- (id)initWithAssetType:(id)arg1;	// IMP=0x00000000000ba7dc
- (id)initWithAutoAssetCatalog:(id)arg1 withBaseForStagingDescriptors:(id)arg2 withOperationError:(id)arg3;	// IMP=0x00000000000ba788
- (id)initWithJobInformation:(id)arg1 withDownloadedDescriptor:(id)arg2 withOperationError:(id)arg3;	// IMP=0x00000000000ba732
- (id)initWithStagingClientRequest:(id)arg1;	// IMP=0x00000000000ba6ea
- (id)initWithSafeSummary:(id)arg1;	// IMP=0x00000000000ba6a4

@end

