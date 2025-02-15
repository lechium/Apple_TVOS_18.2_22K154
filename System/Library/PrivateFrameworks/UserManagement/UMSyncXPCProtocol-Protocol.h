//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UserManagement/NSObject-Protocol.h>

@class NSArray, NSData, NSDictionary, NSFileHandle, NSString, UMPersonaMachPort;

@protocol UMSyncXPCProtocol <NSObject>
- (void)grantSandboxExtensionForPersonaWithUniqueString:(NSString *)arg1 completionHandler:(void (^)(NSString *, NSError *))arg2;
- (void)personaLogoutWithPid:(int)arg1 WithUserODuuid:(NSString *)arg2 withUid:(unsigned int)arg3 completionHandler:(void (^)(NSError *))arg4;
- (void)personaLoginWithPid:(int)arg1 WithUserODuuid:(NSString *)arg2 withUid:(unsigned int)arg3 completionHandler:(void (^)(NSError *))arg4;
- (void)registerUserPersonaObserverForPID:(int)arg1 withMachServiceName:(NSString *)arg2 completionHandler:(void (^)(NSError *))arg3;
- (void)setBundlesIdentifiers:(NSArray *)arg1 forPersona:(NSDictionary *)arg2 completionHandler:(void (^)(NSError *))arg3;
- (void)bundleIdentifiersForPersona:(NSDictionary *)arg1 completionHandler:(void (^)(NSArray *, NSError *))arg2;
- (void)fetchPersonaGenerationNumberWithCompletionHandler:(void (^)(unsigned long long, NSError *))arg1;
- (void)fetchPersona:(NSDictionary *)arg1 forPid:(int)arg2 completionHandler:(void (^)(NSDictionary *, NSError *))arg3;
- (void)fetchAsidMapforPid:(int)arg1 withCompletionHandler:(void (^)(NSDictionary *, NSError *))arg2;
- (void)fetchAllUsersPersonaListforPid:(int)arg1 withCompletionHandler:(void (^)(NSArray *, NSError *))arg2;
- (void)fetchPersonaListforPid:(int)arg1 withCompletionHandler:(void (^)(NSArray *, NSError *))arg2;
- (void)replacePersonaMachPortVoucher:(UMPersonaMachPort *)arg1 withAccountID:(NSString *)arg2 generationSet:(_Bool)arg3 forPid:(int)arg4 withReply:(void (^)(UMPersonaMachPort *, NSError *))arg5;
- (void)userSessionDeviceConfigurationInfo:(int)arg1 withReply:(void (^)(NSError *))arg2;
- (void)isLoginSessionwithReply:(void (^)(NSError *))arg1;
- (void)unmountUserSessionVolumeforID:(int)arg1 withReply:(void (^)(NSError *))arg2;
- (void)mountUserSessionVolumeforID:(int)arg1 withReply:(void (^)(NSError *))arg2;
- (void)userSessionLRUInfoWithReply:(void (^)(NSArray *, NSError *))arg1;
- (void)switchBlockTasksInfoWithReply:(void (^)(NSArray *, NSError *))arg1;
- (void)limitNumberOfUserSessions:(int)arg1 withReply:(void (^)(int, NSError *))arg2;
- (void)clearSyncBubbleUserswithReply:(void (^)(NSError *))arg1;
- (void)listSyncBubbleUserswithReply:(void (^)(NSArray *, NSError *))arg1;
- (void)listSyncServiceSourcesForUserSession:(NSDictionary *)arg1 withReply:(void (^)(NSArray *, NSError *))arg2;
- (void)currentSyncBubbleIDwithReply:(void (^)(int, NSError *))arg1;
- (void)MKBUserSessionSetInternalTest:(_Bool)arg1 withReply:(void (^)(NSError *))arg2;
- (void)stoptUserSyncBubble:(int)arg1 withReply:(void (^)(NSError *))arg2;
- (void)startUserSyncBubble:(int)arg1 withReply:(void (^)(NSError *))arg2;
- (void)removeSyncServiceSource:(NSString *)arg1 toUserSession:(int)arg2 withReply:(void (^)(NSError *))arg3;
- (void)addSyncServiceSource:(NSString *)arg1 toUserSession:(int)arg2 withReply:(void (^)(NSError *))arg3;
- (void)switchToLoginUIUserSessionWithReply:(void (^)(NSError *))arg1;
- (void)configureLoginUIWithUserSessionCount:(int)arg1 reply:(void (^)(NSDictionary *, NSError *))arg2;
- (void)foregroundUserSessionAttributesWithReply:(void (^)(NSDictionary *, NSError *))arg1;
- (void)setUserSessionAttributes:(NSDictionary *)arg1 reply:(void (^)(NSDictionary *, NSError *))arg2;
- (void)getUserSessionAttributes:(NSDictionary *)arg1 reply:(void (^)(NSDictionary *, NSError *))arg2;
- (void)deleteUserSessionSecureBlobwithReply:(void (^)(NSError *))arg1;
- (void)userKeybagOpaqueData:(NSDictionary *)arg1 KeybagBlobwithReply:(void (^)(NSData *, NSError *))arg2;
- (void)setUserKeybagOpaqueData:(NSDictionary *)arg1 keybagBlob:(NSData *)arg2 withReply:(void (^)(NSError *))arg3;
- (void)retrieveUserSessionSecureBackupBlobwithReply:(void (^)(NSData *, NSError *))arg1;
- (void)setUserSessionSecureBackupBlob:(NSData *)arg1 withReply:(void (^)(NSError *))arg2;
- (void)switchToUserSession:(NSDictionary *)arg1 withOpaqueData:(NSData *)arg2 reply:(void (^)(NSError *))arg3;
- (void)deleteUserSessionBlobwithReply:(void (^)(NSError *))arg1;
- (void)retrieveUserSessionBlobwithReply:(void (^)(NSData *, NSError *))arg1;
- (void)listAllUserSessionIDsWithAReply:(void (^)(NSArray *, NSError *))arg1;
- (void)removeUserSession:(NSDictionary *)arg1 reply:(void (^)(NSError *))arg2;
- (void)migrateGuestUserVolume:(NSString *)arg1 withReply:(void (^)(NSError *))arg2;
- (void)migrateSharedAndPrimaryUserVolumeWithReply:(void (^)(NSError *))arg1;
- (void)dataMigrationSetup:(NSDictionary *)arg1 withSecret:(NSFileHandle *)arg2 oldSize:(unsigned long long)arg3 reply:(void (^)(NSError *))arg4;
- (void)createUserSession:(NSDictionary *)arg1 withSecret:(NSFileHandle *)arg2 oldSize:(unsigned long long)arg3 withOpaqueData:(NSData *)arg4 reply:(void (^)(NSDictionary *, NSError *))arg5;
- (void)unloadUserSession:(NSDictionary *)arg1 reply:(void (^)(NSError *))arg2;
- (void)loadUserSession:(NSDictionary *)arg1 withSecret:(NSFileHandle *)arg2 oldSize:(unsigned long long)arg3 reply:(void (^)(NSDictionary *, NSError *))arg4;
@end

