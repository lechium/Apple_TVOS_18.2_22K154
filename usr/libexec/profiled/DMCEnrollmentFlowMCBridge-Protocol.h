//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class NSArray, NSData, NSDictionary, NSNumber, NSString;

@protocol DMCEnrollmentFlowMCBridge <NSObject>

@optional
- (_Bool)isDeviceConfigured;
- (void)awaitDeviceConfiguredWithCompletionHandler:(void (^)(void))arg1;
- (void)markStoredProfileAsInstalled;
- (void)markCloudConfigurationAsUICompletedWithCompletionHandler:(void (^)(NSError *))arg1;
- (void)storeCloudConfig:(NSDictionary *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)fetchCloudConfigWithCompletionHandler:(void (^)(NSDictionary *, NSError *))arg1;
- (void)restoreSetAsideCloudConfigAndProfilesWithCompletionHandler:(void (^)(NSError *))arg1;
- (void)removeApplicationWithBundleID:(NSString *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)manageApplicationWithBundleID:(NSString *)arg1 iTunesItemID:(NSNumber *)arg2 organization:(NSString *)arg3 personaID:(NSString *)arg4 associatedDomains:(NSArray *)arg5 associatedDomainsEnableDirectDownloads:(NSNumber *)arg6 configuration:(NSDictionary *)arg7 completionHandler:(void (^)(NSError *))arg8;
- (void)unblockAppInstallsWithCompletion:(void (^)(NSError *))arg1;
- (void)blockAppInstallsWithCompletion:(void (^)(NSError *))arg1;
- (void)stopEnrollmentFlowMonitor;
- (void)requestEnrollmentFlowMonitorWithPersonaID:(NSString *)arg1;
- (void)reauthenticationComplete;
- (_Bool)isStoredProfileInstalled;
- (_Bool)isDeviceSharediPad;
- (_Bool)isDeviceSupervised;
- (_Bool)isDeviceMDMEnrolled;
- (void)_awaitESSOConfigActivationWithExtensionIdentifiers:(NSArray *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (NSArray *)extensionIDsFromESSOConfigurationProfile:(NSData *)arg1;
- (_Bool)validateESSOConfigurationProfile:(NSData *)arg1 error:(id *)arg2;
- (_Bool)removeProfileAssociatedWithPersonaID:(NSString *)arg1;
- (void)removeProfileWithIdentifier:(NSString *)arg1 async:(_Bool)arg2;
- (void)installEnrollmentProfile:(NSData *)arg1 devicePasscode:(NSString *)arg2 personaID:(NSString *)arg3 rmAccountIdentifier:(NSString *)arg4 isESSO:(_Bool)arg5 essoAppITunesStoreID:(NSNumber *)arg6 managedProfileIdentifiers:(NSArray *)arg7 installationSource:(NSString *)arg8 completionHandler:(void (^)(NSString *, _Bool, NSError *))arg9;
- (void)installEnrollmentProfile:(NSData *)arg1 devicePasscode:(NSString *)arg2 personaID:(NSString *)arg3 rmAccountIdentifier:(NSString *)arg4 managedProfileIdentifiers:(NSArray *)arg5 installationSource:(NSString *)arg6 completionHandler:(void (^)(NSString *, _Bool, NSError *))arg7;
- (void)installEnrollmentProfile:(NSData *)arg1 devicePasscode:(NSString *)arg2 personaID:(NSString *)arg3 rmAccountIdentifier:(NSString *)arg4 completionHandler:(void (^)(NSString *, _Bool, NSError *))arg5;
- (NSDictionary *)detailsFromMDMProfile:(NSData *)arg1 error:(id *)arg2;
- (_Bool)isMDMProfileLocked;
- (NSData *)getMachineInfoForEnrollmentType:(unsigned long long)arg1 enrollmentMethod:(unsigned long long)arg2;
- (_Bool)isDevicePasscodeSet;
@end

