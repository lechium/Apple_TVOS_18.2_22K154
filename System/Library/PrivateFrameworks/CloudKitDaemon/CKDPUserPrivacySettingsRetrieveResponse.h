//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class CKDPUserPrivacySettings, NSMutableArray;

@interface CKDPUserPrivacySettingsRetrieveResponse : PBCodable
{
    NSMutableArray *_applicationBundles;	// 8 = 0x8
    CKDPUserPrivacySettings *_userPrivacySettings;	// 16 = 0x10
}

+ (Class)applicationBundleType;	// IMP=0x0010000000233aa9
- (void).cxx_destruct;	// IMP=0x00000000002344ee
@property(retain, nonatomic) NSMutableArray *applicationBundles; // @synthesize applicationBundles=_applicationBundles;
@property(retain, nonatomic) CKDPUserPrivacySettings *userPrivacySettings; // @synthesize userPrivacySettings=_userPrivacySettings;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000023431a
- (unsigned long long)hash;	// IMP=0x00000000002342cd
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000234215
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000023403d
- (void)copyTo:(id)arg1;	// IMP=0x0000000000233f55
- (void)writeTo:(id)arg1;	// IMP=0x0000000000233e03
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000233df6
- (id)dictionaryRepresentation;	// IMP=0x0000000000233b69
- (id)description;	// IMP=0x0000000000233aba
- (id)applicationBundleAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000233a8c
- (unsigned long long)applicationBundlesCount;	// IMP=0x0000000000233a6f
- (void)addApplicationBundle:(id)arg1;	// IMP=0x0000000000233a05
- (void)clearApplicationBundles;	// IMP=0x00000000002339e8
@property(readonly, nonatomic) _Bool hasUserPrivacySettings;

@end

