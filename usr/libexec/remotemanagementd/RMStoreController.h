//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSManagedObjectContext, NSMutableDictionary, NSPersistentContainer, NSString, RMDebounceTimer;

@interface RMStoreController : NSObject
{
    NSManagedObjectContext *_context;	// 8 = 0x8
    NSPersistentContainer *_persistentContainer;	// 16 = 0x10
    NSMutableDictionary *_clientByIdentifier;	// 24 = 0x18
    RMDebounceTimer *_debouncer;	// 32 = 0x20
}

+ (void)start;	// IMP=0x002000000008b011
+ (id)sharedController;	// IMP=0x001000000008ae1a
- (void).cxx_destruct;	// IMP=0x0020000000098e35
@property(retain, nonatomic) RMDebounceTimer *debouncer; // @synthesize debouncer=_debouncer;
@property(retain, nonatomic) NSMutableDictionary *clientByIdentifier; // @synthesize clientByIdentifier=_clientByIdentifier;
@property(readonly, nonatomic) NSPersistentContainer *persistentContainer; // @synthesize persistentContainer=_persistentContainer;
@property(readonly, nonatomic) NSManagedObjectContext *context; // @synthesize context=_context;
- (id)_newPayloadWithDeclaration:(id)arg1 managementSource:(id)arg2 error:(id *)arg3;	// IMP=0x0010000000098a09
- (id)_payloadsForPayloadClass:(Class)arg1 identifier:(id)arg2 managementSource:(id)arg3 error:(id *)arg4;	// IMP=0x00100000000986ea
- (id)_payloadsForDeclarationIdentifier:(id)arg1 managementSource:(id)arg2 error:(id *)arg3;	// IMP=0x00100000000983f9
- (id)_buildFlattenedConfigurations:(id)arg1 includeAssets:(_Bool)arg2 error:(id *)arg3;	// IMP=0x0010000000097ca7
- (id)_configurationsWithVisibleUIForConfigurationTypes:(id)arg1 managementSource:(id)arg2 error:(id *)arg3;	// IMP=0x00100000000977c6
- (id)_activeConfigurationsForStoreIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x001000000009764f
- (id)_activeConfigurationsForConfigurationTypes:(id)arg1 storeIdentifier:(id)arg2 includeAssets:(_Bool)arg3 error:(id *)arg4;	// IMP=0x0010000000097317
- (id)_activeConfigurationsOnlyForConfigurationTypes:(id)arg1 storeIdentifier:(id)arg2 error:(id *)arg3;	// IMP=0x00100000000972ff
- (id)_activeConfigurationsAndAssetsForConfigurationTypes:(id)arg1 storeIdentifier:(id)arg2 error:(id *)arg3;	// IMP=0x00100000000972e4
- (id)_declarationsOfClass:(Class)arg1 managementSource:(id)arg2 declarationTypes:(id)arg3 identifier:(id)arg4 error:(id *)arg5;	// IMP=0x0010000000096bf5
- (id)_declarationsForStoreIdentifier:(id)arg1 declarationTypes:(id)arg2 identifier:(id)arg3 error:(id *)arg4;	// IMP=0x001000000009687c
- (void)_addOptionsToManagementSource:(id)arg1 options:(id)arg2;	// IMP=0x0010000000096742
- (id)_allManagementSourcesReturningError:(id *)arg1;	// IMP=0x00100000000964bd
- (id)_managementSourceWithIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000962aa
- (id)_subscriberStoreWithIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000961fb
- (id)_providerStoreWithIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x001000000009614c
- (id)_observerStoreWithIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x001000000009609d
- (void)setMetadataValue:(id)arg1 forKey:(id)arg2 storeIdentifier:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x001000000009578e
- (void)metadataValueForKey:(id)arg1 storeIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000095200
- (void)metadataForStoreIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000094b92
- (void)certificateStatusWithStoreIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000942a3
- (void)certificatePersistentRefForAssetKey:(id)arg1 storeIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000093f85
- (void)removeTrustForCertificateRef:(id)arg1 configurationKey:(id)arg2 fullTrust:(_Bool)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0010000000093c9f
- (void)setTrustForCertificateRef:(id)arg1 configurationKey:(id)arg2 fullTrust:(_Bool)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0010000000093939
- (void)setConfigurationUIWithStoreIdentifier:(id)arg1 declarationIdentifier:(id)arg2 declarationServerToken:(id)arg3 visible:(_Bool)arg4 ui:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;	// IMP=0x0010000000092f03
- (void)unassignAssets:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000092bb6
- (void)resolveAsset:(id)arg1 storeIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000920cf
- (void)subscribedStoreConfigurationsVisibleUIWithTypes:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000091a28
- (void)subscribedDeclarationsWithTypes:(id)arg1 storeIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000916ed
- (void)subscribedStoreDeclarationsWithTypes:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000009100b
- (void)subscriberStoresWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000090b7d
- (void)subscriberStoreWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000090880
- (void)applyChangesForStoreIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000009072b
- (void)deleteDeclarationWithIdentifier:(id)arg1 storeIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000090029
- (void)saveDeclaration:(id)arg1 storeIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000008f649
- (void)providerStoresWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000008f1bb
- (void)providerStoreWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000008eebe
- (void)removeStoreWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000008ea93
- (void)createStoreWithType:(long long)arg1 defaultToInteractive:(_Bool)arg2 dataSeparated:(_Bool)arg3 options:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x001000000008e201
- (void)_observerStoresDidChange;	// IMP=0x001000000008e15a
- (void)observerStoresDidChange;	// IMP=0x001000000008e11d
- (void)triggerAggregatingTimerAction;	// IMP=0x001000000008e10b
- (void)fetchDataAtURL:(id)arg1 storeIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000008dc65
- (void)setShouldInstallConfiguration:(id)arg1 shouldInstall:(_Bool)arg2 storeIdentifier:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x001000000008db33
- (void)displayableProfileConfigurationsForStoreIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000008d595
- (void)configurationUIsForStoreIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000008cd50
- (void)declarationManifestForStoreIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000008ca23
- (void)declarationsWithTypes:(id)arg1 storeIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000008c6e3
- (void)declarationsForStoreIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000008c3e1
- (void)declarationWithIdentifier:(id)arg1 storeIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000008c036
- (void)observerStoresWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000008bba8
- (void)observerStoreWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000008b8ab
- (id)_clientForIdentifier:(id)arg1;	// IMP=0x001000000008b831
- (void)_stopClientForIdentifier:(id)arg1;	// IMP=0x001000000008b76b
- (id)_makeClientWithManagementSourceObjectID:(id)arg1 storeIdentifier:(id)arg2 persistentContainer:(id)arg3;	// IMP=0x001000000008b6a6
- (id)_startClientForSourceIdentifier:(id)arg1 objectID:(id)arg2;	// IMP=0x001000000008b5bb
- (void)_start;	// IMP=0x001000000008b0aa
- (id)initWithPersistentContainer:(id)arg1 context:(id)arg2;	// IMP=0x001000000008af19

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

