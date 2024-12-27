//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IDSGroupEncryptionKeyMaterial, NSMutableDictionary, NSMutableSet, NSSet, NSString;

@interface IDSGroupStableKeyMaterialCache : NSObject
{
    _Bool _sentToRemotes;	// 8 = 0x8
    IDSGroupEncryptionKeyMaterial *_currentLocalStableKeyMaterial;	// 16 = 0x10
    IDSGroupEncryptionKeyMaterial *_previousLocalStableKeyMaterial;	// 24 = 0x18
    NSMutableDictionary *_pushTokenToSKMsMapping;	// 32 = 0x20
    NSString *_identifier;	// 40 = 0x28
    NSMutableSet *_stableKeyMaterials;	// 48 = 0x30
    NSSet *_stableKeyIdentifiersSentToClient;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0020000000224ac9
@property(copy, nonatomic) NSSet *stableKeyIdentifiersSentToClient; // @synthesize stableKeyIdentifiersSentToClient=_stableKeyIdentifiersSentToClient;
@property(copy, nonatomic) NSMutableSet *stableKeyMaterials; // @synthesize stableKeyMaterials=_stableKeyMaterials;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) NSMutableDictionary *pushTokenToSKMsMapping; // @synthesize pushTokenToSKMsMapping=_pushTokenToSKMsMapping;
@property(nonatomic) _Bool sentToRemotes; // @synthesize sentToRemotes=_sentToRemotes;
@property(retain, nonatomic) IDSGroupEncryptionKeyMaterial *previousLocalStableKeyMaterial; // @synthesize previousLocalStableKeyMaterial=_previousLocalStableKeyMaterial;
@property(retain, nonatomic) IDSGroupEncryptionKeyMaterial *currentLocalStableKeyMaterial; // @synthesize currentLocalStableKeyMaterial=_currentLocalStableKeyMaterial;
- (id)debugDescription;	// IMP=0x001000000022492e
- (id)description;	// IMP=0x0010000000224823
- (id)cachedStableKeyMaterialCollection;	// IMP=0x00100000002246b1
- (id)updateGroupStableKeyMaterialCacheForPushToken:(id)arg1 SKM:(id)arg2;	// IMP=0x001000000022406d
- (void)resetRemoteStableKeyMaterialCache;	// IMP=0x0010000000223f89
- (void)resetSKMCache;	// IMP=0x0010000000223e59
- (id)getStableKeyIdentifiersSentToClient;	// IMP=0x0010000000223e47
- (void)resetSKMSentToClientStatus;	// IMP=0x0010000000223e33
- (_Bool)hasCachedStableKeyIdentifier:(id)arg1;	// IMP=0x0010000000223c01
- (_Bool)hasClientReceivedStableKeyIdentifier:(id)arg1;	// IMP=0x0010000000223b8b
- (void)noteClientReceiptOfStableKeyIdentifier:(id)arg1;	// IMP=0x0010000000223aeb
- (id)initWithIdentifier:(id)arg1;	// IMP=0x00100000002239c1

@end

