//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MIInstallOptions, NSString, NSURL;

@protocol MobileInstallationHelperServiceProtocol
- (void)dieForTesting;
- (void)getPidForTestingWithCompletion:(void (^)(int))arg1;
- (void)moveItemInStagingDirectory:(unsigned long long)arg1 atRelativePath:(NSString *)arg2 toDestinationURL:(NSURL *)arg3 onBehalfOf:(CDStruct_6ad76789)arg4 completion:(void (^)(NSError *))arg5;
- (void)createSafeHarborWithIdentifier:(NSString *)arg1 forPersona:(NSString *)arg2 containerType:(unsigned long long)arg3 andMigrateDataFrom:(NSURL *)arg4 completion:(void (^)(NSError *))arg5;
- (void)stageItemAtURL:(NSURL *)arg1 options:(MIInstallOptions *)arg2 completion:(void (^)(NSURL *, _Bool, NSError *))arg3;
- (void)wipeStagingRootAndSetUpPerUserDataDirWithCompletion:(void (^)(NSError *))arg1;
@end

