//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class INSExtensionService, NSString;
@protocol ADCommandCenterClient;

@interface ADExtensionService
{
    INSExtensionService *_extensionService;	// 8 = 0x8
    id <ADCommandCenterClient> _commandCenterClient;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000191e68
@property(nonatomic) __weak id <ADCommandCenterClient> commandCenterClient; // @synthesize commandCenterClient=_commandCenterClient;
- (void)_logUUFRConditionally:(id)arg1 executionContext:(id)arg2;	// IMP=0x0010000000191aa7
- (_Bool)_intentNeedsPreparation:(id)arg1;	// IMP=0x001000000019195b
- (_Bool)_prepareNameComponents:(id)arg1 meCardCache:(id *)arg2;	// IMP=0x00100000001913f0
- (_Bool)_preparePerson:(id)arg1 meCardCache:(id *)arg2;	// IMP=0x0010000000190fc5
- (_Bool)_replacement:(id *)arg1 forString:(id)arg2 meCardCache:(id *)arg3;	// IMP=0x0010000000190d02
- (id)_meCard;	// IMP=0x0010000000190a98
- (id)_meCardWithCache:(id *)arg1;	// IMP=0x0010000000190a4e
- (void)extensionService:(id)arg1 handleFailedStartPlaybackWithDestination:(long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000190929
- (void)extensionService:(id)arg1 prepareForStartPlaybackWithDestination:(long long)arg2 intent:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00100000001907ec
- (id)extensionService:(id)arg1 contextDictionaryForError:(id)arg2;	// IMP=0x00100000001907df
- (id)extensionService:(id)arg1 contextDictionaryForCommand:(id)arg2;	// IMP=0x00100000001907d2
- (void)extensionService:(id)arg1 requiresHandlingCommand:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000001906fe
- (id)siriLanguageCodeForExtensionService:(id)arg1;	// IMP=0x00100000001906a7
- (void)extensionService:(id)arg1 logEventWithType:(long long)arg2 context:(id)arg3 contextNoCopy:(_Bool)arg4;	// IMP=0x001000000019061b
- (void)extensionService:(id)arg1 handleIntentForwardingAction:(id)arg2 inBackgroundAppWithBundleIdentifier:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x001000000019057a
- (void)extensionService:(id)arg1 handleIntent:(id)arg2 inBackgroundAppWithBundleIdentifier:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00100000001904d9
- (void)extensionService:(id)arg1 extensionRequestDidFinishForApplication:(id)arg2 error:(id)arg3;	// IMP=0x001000000019044e
- (void)extensionService:(id)arg1 extensionRequestWillStartForApplication:(id)arg2;	// IMP=0x00100000001903e5
- (void)extensionService:(id)arg1 wantsToCacheImage:(id)arg2;	// IMP=0x001000000019037c
- (void)extensionService:(id)arg1 processDataUsingSHA256WithInMemorySalt:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000001902e8
- (void)extensionService:(id)arg1 processData:(id)arg2 usingSecurityProcedure:(long long)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0010000000190258
- (void)extensionService:(id)arg1 suspendTimeout:(_Bool)arg2;	// IMP=0x0010000000190207
- (void)extensionService:(id)arg1 prepareIntent:(id)arg2;	// IMP=0x0010000000190003
- (void)cancelOperationsForRequestID:(id)arg1 forAssistantID:(id)arg2 fromRemote:(_Bool)arg3 reason:(long long)arg4;	// IMP=0x001000000018ff02
- (void)resetExternalResources;	// IMP=0x001000000018fe5e
- (void)handleCommand:(id)arg1 forDomain:(id)arg2 executionContext:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x001000000018f8f3
- (id)controlCenterLockRestrictedCommands;	// IMP=0x001000000018f8eb
- (_Bool)implementsCommand:(id)arg1 forDomain:(id)arg2;	// IMP=0x001000000018f86e
- (id)commandsForDomain:(id)arg1;	// IMP=0x001000000018f78c
- (id)domains;	// IMP=0x001000000018f6f8
- (id)handle;	// IMP=0x001000000018f6ef
- (id)init;	// IMP=0x001000000018f64a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

