//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSPersistentContainer;

@interface RMXPCProxyHandler : NSObject
{
    _Bool _hasCommandLineEntitlement;	// 8 = 0x8
    _Bool _hasAccountChangesEntitlement;	// 9 = 0x9
    _Bool _hasConfigurationSubscriberEntitlement;	// 10 = 0xa
    _Bool _hasEnrollmentEntitlement;	// 11 = 0xb
    NSPersistentContainer *_persistentContainer;	// 16 = 0x10
}

+ (id)_activeConfigurationsByTypeForTypes:(id)arg1 persistentContainer:(id)arg2 error:(id *)arg3;	// IMP=0x00200000000ad1c3
+ (id)_managementChannelWithIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000ab724
+ (_Bool)_isConnection:(id)arg1 fromApplicationIdentifier:(id)arg2;	// IMP=0x00100000000a90dc
+ (_Bool)_doesConnection:(id)arg1 haveEntitlement:(id)arg2;	// IMP=0x00100000000a8fc2
- (void).cxx_destruct;	// IMP=0x00200000000adbb9
@property(readonly, nonatomic) _Bool hasEnrollmentEntitlement; // @synthesize hasEnrollmentEntitlement=_hasEnrollmentEntitlement;
@property(readonly, nonatomic) _Bool hasConfigurationSubscriberEntitlement; // @synthesize hasConfigurationSubscriberEntitlement=_hasConfigurationSubscriberEntitlement;
@property(readonly, nonatomic) _Bool hasAccountChangesEntitlement; // @synthesize hasAccountChangesEntitlement=_hasAccountChangesEntitlement;
@property(readonly, nonatomic) _Bool hasCommandLineEntitlement; // @synthesize hasCommandLineEntitlement=_hasCommandLineEntitlement;
@property(readonly, nonatomic) NSPersistentContainer *persistentContainer; // @synthesize persistentContainer=_persistentContainer;
- (void)reportPluginDetailsWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000ad266
- (void)fetchConfigurationsWithTypes:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000acdb8
- (void)sendStatusForSubscriptionsWithIdentifiers:(id)arg1 toManagementSourceWithIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000ac926
- (void)queryForStatusSubscriptionsWithIdentifiers:(id)arg1 fromManagementSourceWithIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000ac504
- (void)sendStatusForKeyPaths:(id)arg1 toManagementSourceWithIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000abedd
- (void)queryForStatusAndErrorsWithKeyPaths:(id)arg1 fromManagementSourceWithIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000abb04
- (void)sendStatusData:(id)arg1 toManagementSourceWithIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000ab3db
- (void)managementChannelWithEnrollmentURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000ab0df
- (void)managementChannelWithAccountIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000aade3
- (void)deviceChannelEnrollmentExistsWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000aab3d
- (void)updateWithIdentifier:(id)arg1 tokensResponse:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000aa7f9
- (void)updateWithIdentifier:(id)arg1 pushMessage:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000aa4b5
- (void)periodicSyncWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000aa23f
- (void)syncWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000a9f1d
- (void)unenrollWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000a9bc5
- (void)enrollViaMDMWithEnrollmentType:(long long)arg1 uri:(id)arg2 accountIdentifier:(id)arg3 personaIdentifier:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x00100000000a982d
- (void)enrollUserChannelWithAccountIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000a94e0
- (void)enrollDeviceChannelWithURI:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000a9194
- (id)initWithXPCConnection:(id)arg1 persistentContainer:(id)arg2;	// IMP=0x00100000000a8e90

@end

