//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Transparency/NSObject-Protocol.h>

@class CNContact, KTAccountPublicID, KTIDStaticKeyStoreEntry, NSArray, NSString;

@protocol KTIDStaticKeyStoreProtocol <NSObject>
- (_Bool)resetCloudKit:(id *)arg1;
- (_Bool)setupCloudSchema:(_Bool)arg1 error:(id *)arg2;
- (_Bool)triggerSync:(id *)arg1;
- (_Bool)setErrorCode:(int)arg1 forMapping:(NSString *)arg2 error:(id *)arg3;
- (NSArray *)listKTID:(id *)arg1;
- (KTIDStaticKeyStoreEntry *)validateByContact:(CNContact *)arg1 error:(id *)arg2;
- (KTIDStaticKeyStoreEntry *)validateByContactIdentifier:(NSString *)arg1 error:(id *)arg2;
- (KTIDStaticKeyStoreEntry *)validateByIdentifier:(KTAccountPublicID *)arg1 error:(id *)arg2;
- (KTIDStaticKeyStoreEntry *)findByIdentifier:(KTAccountPublicID *)arg1 error:(id *)arg2;
- (KTIDStaticKeyStoreEntry *)findByContactIdentifier:(NSString *)arg1 error:(id *)arg2;
- (KTIDStaticKeyStoreEntry *)findByContact:(CNContact *)arg1 error:(id *)arg2;
- (KTIDStaticKeyStoreEntry *)findKeyByContactsServerPath:(NSString *)arg1 contactIdentifier:(NSString *)arg2 error:(id *)arg3;
- (KTIDStaticKeyStoreEntry *)findKeyByHandle:(NSString *)arg1 error:(id *)arg2;
- (_Bool)removeEntryByContact:(CNContact *)arg1 error:(id *)arg2;
- (_Bool)removeEntryByContactIdentifier:(NSString *)arg1 error:(id *)arg2;
- (_Bool)removeEntryByKDID:(KTAccountPublicID *)arg1 error:(id *)arg2;
- (NSArray *)mappings:(KTAccountPublicID *)arg1 error:(id *)arg2;
- (_Bool)removeMapping:(NSString *)arg1 forKTId:(KTAccountPublicID *)arg2 error:(id *)arg3;
- (_Bool)addMapping:(NSString *)arg1 forKTId:(KTAccountPublicID *)arg2 error:(id *)arg3;
- (_Bool)setContactServerPath:(NSString *)arg1 forKTId:(KTAccountPublicID *)arg2 error:(id *)arg3;
- (_Bool)updateStaticKeyEntry:(KTAccountPublicID *)arg1 contact:(CNContact *)arg2 error:(id *)arg3;
- (_Bool)updateStaticKeyEntry:(KTAccountPublicID *)arg1 contactServerPath:(NSString *)arg2 contactIdentifier:(NSString *)arg3 mappings:(NSArray *)arg4 error:(id *)arg5;
- (_Bool)addStaticKeyEntry:(KTAccountPublicID *)arg1 contactServerPath:(NSString *)arg2 contactIdentifier:(NSString *)arg3 error:(id *)arg4;
@end

