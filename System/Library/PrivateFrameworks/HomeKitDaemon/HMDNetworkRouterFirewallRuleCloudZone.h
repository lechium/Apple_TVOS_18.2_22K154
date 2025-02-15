//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitBackingStore/HMBCloudZone.h>

@class NSArray, NSMutableSet, NSSet;

__attribute__((visibility("hidden")))
@interface HMDNetworkRouterFirewallRuleCloudZone : HMBCloudZone
{
    _Bool _useAnonymousRequests;	// 12 = 0xc
    NSSet *_modifiedRecordIDsFromLastPull;	// 16 = 0x10
    NSMutableSet *_uncommittedModifiedRecordIDsFromLastPull;	// 24 = 0x18
    NSSet *_watchedRecordIDs;	// 32 = 0x20
    NSArray *_signatureVerificationPublicKeys;	// 40 = 0x28
}

+ (_Bool)verifyPairedMetadataFromRecord:(id)arg1 signatureVerificationPublicKeys:(id)arg2 error:(id *)arg3;	// IMP=0x006000000015e61f
+ (_Bool)verifyNetworkDeclarationsFromRecord:(id)arg1 signatureVerificationPublicKeys:(id)arg2 error:(id *)arg3;	// IMP=0x006000000015e5cf
+ (_Bool)verifyNetworkDeclarationsFromRecord:(id)arg1 signatureVerificationPublicKeys:(id)arg2 baseAccessoryIdentifier:(id *)arg3 data:(id *)arg4 error:(id *)arg5;	// IMP=0x006000000015e509
+ (_Bool)__verifyDataFromRecord:(id)arg1 signatureVerificationPublicKeys:(id)arg2 dataKey:(id)arg3 dataAssetKey:(id)arg4 maxDataSize:(unsigned long long)arg5 signatureKey:(id)arg6 signatureAssetKey:(id)arg7 maxSignatureSize:(unsigned long long)arg8 baseAccessoryIdentifier:(id *)arg9 data:(id *)arg10 error:(id *)arg11;	// IMP=0x006000000015e300
+ (id)__getDataFromRecord:(id)arg1 dataKey:(id)arg2 dataAssetKey:(id)arg3 maxDataSize:(unsigned long long)arg4 error:(id *)arg5;	// IMP=0x006000000015e253
+ (_Bool)__verifyDigestDataAgainstSignatureFromRecord:(id)arg1 digestData:(id)arg2 signatureData:(id)arg3 signatureVerificationPublicKeys:(id)arg4 error:(id *)arg5;	// IMP=0x006000000015decb
+ (id)__getSignatureDataFromRecord:(id)arg1 signatureKey:(id)arg2 signatureAssetKey:(id)arg3 maxSignatureSize:(unsigned long long)arg4 error:(id *)arg5;	// IMP=0x006000000015de0b
+ (id)__calculateDigestDataFromRecord:(id)arg1 dataKey:(id)arg2 dataAssetKey:(id)arg3 maxDataSize:(unsigned long long)arg4 error:(id *)arg5;	// IMP=0x006000000015d35c
+ (id)__createBaseAccessoryIdentifierFromRecord:(id)arg1 error:(id *)arg2;	// IMP=0x006000000015cdcf
+ (unsigned long long)__maxSizeForCKRecordString;	// IMP=0x006000000015cdb1
+ (unsigned long long)__maxSizeForCKRecordPairedMetadataSignature;	// IMP=0x006000000015cd93
+ (unsigned long long)__maxSizeForCKRecordPairedMetadata;	// IMP=0x006000000015cd75
+ (unsigned long long)__maxSizeForCKRecordNetworkDeclarationsSignature;	// IMP=0x006000000015cd57
+ (unsigned long long)__maxSizeForCKRecordNetworkDeclarations;	// IMP=0x006000000015cd39
+ (unsigned long long)__maxSizeFromPreferenceWithKey:(id)arg1 defaultValue:(unsigned long long)arg2;	// IMP=0x006000000015cc38
- (void).cxx_destruct;	// IMP=0x0000000000b3ed1d
@property(readonly, nonatomic) NSArray *signatureVerificationPublicKeys; // @synthesize signatureVerificationPublicKeys=_signatureVerificationPublicKeys;
@property(readonly, nonatomic) NSSet *watchedRecordIDs; // @synthesize watchedRecordIDs=_watchedRecordIDs;
@property(readonly, nonatomic) _Bool useAnonymousRequests; // @synthesize useAnonymousRequests=_useAnonymousRequests;
- (void)__retryFetchWithFetchInfo:(id)arg1;	// IMP=0x0000000000b3e9f4
- (_Bool)__canRecoverFromError:(id)arg1 fetchInfo:(id)arg2;	// IMP=0x0000000000b3e3ac
- (_Bool)__commitLocalChanges:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000b3da96
- (void)__zoneChangesCompleted:(id)arg1 fetchInfo:(id)arg2;	// IMP=0x0000000000b3d754
- (void)__zoneFetchCompletedWithChangeToken:(id)arg1 error:(id)arg2 moreComing:(_Bool)arg3 fetchInfo:(id)arg4;	// IMP=0x0000000000b3d381
- (void)__zoneChangeTokensUpdated:(id)arg1 fetchInfo:(id)arg2;	// IMP=0x0000000000b3d183
- (void)__recordDeleted:(id)arg1 recordType:(id)arg2 fetchInfo:(id)arg3;	// IMP=0x0000000000b3cd03
- (void)__recordChanged:(id)arg1 fetchInfo:(id)arg2;	// IMP=0x0000000000b3c4f4
- (void)__finalizeUpdatedRecordIDs;	// IMP=0x0000000000b3c3d3
- (void)__noteUpdatedRecordID:(id)arg1;	// IMP=0x0000000000b3c2d4
- (void)__fetchZoneChangesWithFetchInfo:(id)arg1;	// IMP=0x0000000000b3bd6b
- (id)fetchChangesWithToken:(id)arg1 options:(id)arg2;	// IMP=0x0000000000b3bc10
- (void)startUpWithLocalZone:(id)arg1;	// IMP=0x0000000000b3bbc3
@property(retain, nonatomic) NSMutableSet *uncommittedModifiedRecordIDsFromLastPull; // @synthesize uncommittedModifiedRecordIDsFromLastPull=_uncommittedModifiedRecordIDsFromLastPull;
@property(retain, nonatomic) NSSet *modifiedRecordIDsFromLastPull; // @synthesize modifiedRecordIDsFromLastPull=_modifiedRecordIDsFromLastPull;
- (id)attributeDescriptions;	// IMP=0x0000000000b3b781
- (id)initWithCloudDatabase:(id)arg1 state:(id)arg2 useAnonymousRequests:(_Bool)arg3 watchedRecordIDs:(id)arg4 signatureVerificationPublicKeys:(id)arg5;	// IMP=0x0000000000b3b515
- (id)decodeModelFrom:(id)arg1 recordSource:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x000000000015c1c2

@end

