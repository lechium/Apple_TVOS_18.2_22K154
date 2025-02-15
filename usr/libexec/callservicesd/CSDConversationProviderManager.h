//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CSDSharedConversationServerBag, NSMutableDictionary;
@protocol TUFeatureFlags;

@interface CSDConversationProviderManager : NSObject
{
    struct os_unfair_lock_s _accessorLock;	// 8 = 0x8
    CDUnknownBlockType _beginListeningBlock;	// 16 = 0x10
    NSMutableDictionary *_providerIdentifierToProvider;	// 24 = 0x18
    NSMutableDictionary *_pidToProviderIdentifiers;	// 32 = 0x20
    NSMutableDictionary *_pidToCachedProviderIdentifiers;	// 40 = 0x28
    NSMutableDictionary *_pidToProcessHandle;	// 48 = 0x30
    id <TUFeatureFlags> _featureFlags;	// 56 = 0x38
    CSDSharedConversationServerBag *_serverBag;	// 64 = 0x40
}

+ (id)errorForDisabledPseudonyms;	// IMP=0x00200000001bd56b
+ (id)errorForUnregisteredProviderIdentifier:(id)arg1;	// IMP=0x00100000001bd47e
+ (id)sharedInstance;	// IMP=0x00100000001bb975
- (void).cxx_destruct;	// IMP=0x00200000001bd9b3
@property(retain, nonatomic) CSDSharedConversationServerBag *serverBag; // @synthesize serverBag=_serverBag;
@property(retain, nonatomic) id <TUFeatureFlags> featureFlags; // @synthesize featureFlags=_featureFlags;
@property(readonly, nonatomic) struct os_unfair_lock_s accessorLock; // @synthesize accessorLock=_accessorLock;
@property(readonly, nonatomic) NSMutableDictionary *pidToProcessHandle; // @synthesize pidToProcessHandle=_pidToProcessHandle;
@property(readonly, nonatomic) NSMutableDictionary *pidToCachedProviderIdentifiers; // @synthesize pidToCachedProviderIdentifiers=_pidToCachedProviderIdentifiers;
@property(readonly, nonatomic) NSMutableDictionary *pidToProviderIdentifiers; // @synthesize pidToProviderIdentifiers=_pidToProviderIdentifiers;
@property(readonly, nonatomic) NSMutableDictionary *providerIdentifierToProvider; // @synthesize providerIdentifierToProvider=_providerIdentifierToProvider;
@property(copy, nonatomic) CDUnknownBlockType beginListeningBlock; // @synthesize beginListeningBlock=_beginListeningBlock;
- (void)createProcessMonitorIfNecessary:(id)arg1 forClient:(id)arg2;	// IMP=0x00100000001bd629
- (id)serviceForProvider:(id)arg1;	// IMP=0x00100000001bd16f
- (void)doesHandle:(id)arg1 correspondToConversationProvider:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000001bcf84
- (void)revokePseudonymHandle:(id)arg1 forConversationProvider:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000001bce01
- (void)renewPseudonymHandle:(id)arg1 forConversationProvider:(id)arg2 expirationDate:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00100000001bcc42
- (void)generatePseudonymHandleForConversationProvider:(id)arg1 expiryDuration:(double)arg2 URI:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00100000001bc9eb
- (id)tuConversationProviderForIdentifier:(id)arg1;	// IMP=0x00100000001bc94f
- (id)conversationProviderForIdentifier:(id)arg1;	// IMP=0x00100000001bc8a9
- (void)registerConversationProvider:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000001bc093
- (id)providerIdentifiersForClient:(id)arg1;	// IMP=0x00100000001bbf65
- (void)stopTrackingClient:(id)arg1;	// IMP=0x00100000001bbe24
- (void)startTrackingClient:(id)arg1 forProviderIdentifier:(id)arg2;	// IMP=0x00100000001bbad6
- (id)init;	// IMP=0x00100000001bb9fa

@end

