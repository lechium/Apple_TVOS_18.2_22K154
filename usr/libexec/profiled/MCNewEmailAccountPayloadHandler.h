//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class DeliveryAccount, MailAccount, NSConditionLock, NSDictionary, NSError, NSString, NSThread;

@interface MCNewEmailAccountPayloadHandler
{
    NSConditionLock *_validationLock;	// 32 = 0x20
    NSThread *_validationThread;	// 40 = 0x28
    NSDictionary *_setAsideAccountInfo;	// 48 = 0x30
    _Bool _wasInstalledByMDM;	// 56 = 0x38
    NSString *_personaID;	// 64 = 0x40
    NSString *_rmAccountIdentifier;	// 72 = 0x48
    MailAccount *_incomingAccount;	// 80 = 0x50
    _Bool _incomingAccountUsesSSL;	// 88 = 0x58
    DeliveryAccount *_outgoingAccount;	// 96 = 0x60
    _Bool _outgoingAccountUsesSSL;	// 104 = 0x68
    _Bool _validationDone;	// 105 = 0x69
    _Bool _validationResult;	// 106 = 0x6a
    NSError *_validationError;	// 112 = 0x70
    NSString *_incomingACAccountIdentifier;	// 120 = 0x78
    NSString *_outgoingACAccountIdentifier;	// 128 = 0x80
}

+ (id)unhashedAccountIdentifierWithType:(id)arg1 hostname:(id)arg2 username:(id)arg3;	// IMP=0x004000000002623b
+ (id)MCACAccountIdentifierWithOutgoingAccountInfo:(id)arg1;	// IMP=0x001000000002615e
+ (id)MCACAccountIdentifierWithIncomingAccountInfo:(id)arg1;	// IMP=0x001000000002605e
- (void).cxx_destruct;	// IMP=0x002000000002b16c
@property(retain, nonatomic) NSString *outgoingACAccountIdentifier; // @synthesize outgoingACAccountIdentifier=_outgoingACAccountIdentifier;
// Error: Property attributes should begin with the type ('T') attribute, property name: incomingACAccountIdentifier
// Property attributes: (null)

- (void)unsetAside;	// IMP=0x001000000002b039
- (void)setAside;	// IMP=0x001000000002ab83
- (void)remove;	// IMP=0x001000000002aad8
- (void)_remove;	// IMP=0x001000000002a8b2
- (void)_removePersonaIDForMailAccountWithPersistentResourceID:(id)arg1;	// IMP=0x001000000002a47a
- (id)_removeAccountWithPersistentResourceID:(id)arg1 fromArray:(id)arg2 outArray:(id *)arg3;	// IMP=0x001000000002a1bd
- (_Bool)isInstalled;	// IMP=0x0010000000029fb7
- (_Bool)installWithInstaller:(id)arg1 options:(id)arg2 interactionClient:(id)arg3 outError:(id *)arg4;	// IMP=0x0010000000029b18
- (id)_installWithIncomingAccountInfo:(id)arg1 outgoingAccountInfo:(id)arg2 isInstalledByMDM:(_Bool)arg3 personaID:(id)arg4 rmAccountIdentifier:(id)arg5;	// IMP=0x001000000002904e
- (_Bool)preflightUserInputResponses:(id)arg1 outError:(id *)arg2;	// IMP=0x00100000000289b8
- (void)accountValidator:(id)arg1 finishedValidationOfAccount:(id)arg2 usedSSL:(_Bool)arg3;	// IMP=0x0010000000028701
- (id)_errorFromValidationError:(id)arg1;	// IMP=0x0010000000028511
- (void)_validateIncomingAccountOnThread;	// IMP=0x00100000000283b0
- (id)_outgoingAccountWithAccountInfo:(id)arg1;	// IMP=0x0010000000027ea1
- (id)_outgoingAccountInfoDictionaryWithUserInput:(id)arg1;	// IMP=0x0010000000027916
- (id)_incomingAccountWithAccountInfo:(id)arg1;	// IMP=0x0010000000027229
- (id)_incomingAccountInfoDictionaryWithUserInput:(id)arg1 isPreflight:(_Bool)arg2 outError:(id *)arg3;	// IMP=0x00100000000262e9
- (id)_persistentIDForCertificateUUID:(id)arg1 notFoundLocErrorString:(id)arg2 badLocErrorString:(id)arg3 outError:(id *)arg4;	// IMP=0x0010000000025d6b
- (id)_authSchemeForAuthenticationMethod:(id)arg1;	// IMP=0x0010000000025cc0
- (id)userInputFields;	// IMP=0x0010000000025414
- (id)initWithPayload:(id)arg1 profileHandler:(id)arg2;	// IMP=0x00100000000253a5

@end

