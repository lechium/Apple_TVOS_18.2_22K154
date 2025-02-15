//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MPCAudioAssetTypeSelection, MPIdentifierSet, MPModelFileAsset, MPModelGenericObject, MPModelHomeSharingAsset, MPModelStoreAsset, NSString;
@protocol MPCModelPlaybackAssetCacheProviding;

__attribute__((visibility("hidden")))
@interface MPCModelGenericAVItemAssetLoadProperties : NSObject
{
    _Bool _prefersVideoContent;	// 8 = 0x8
    _Bool _prefersHighQualityContent;	// 9 = 0x9
    _Bool _radioPlayback;	// 10 = 0xa
    _Bool _followUp;	// 11 = 0xb
    _Bool _supportsVocalAttenuation;	// 12 = 0xc
    long long _HLSContentPolicy;	// 16 = 0x10
    id <MPCModelPlaybackAssetCacheProviding> _assetCacheProvider;	// 24 = 0x18
    MPModelFileAsset *_fileAsset;	// 32 = 0x20
    MPModelGenericObject *_genericObject;	// 40 = 0x28
    MPModelHomeSharingAsset *_homeSharingAsset;	// 48 = 0x30
    MPIdentifierSet *_itemIdentifiers;	// 56 = 0x38
    MPModelStoreAsset *_storeAsset;	// 64 = 0x40
    unsigned long long _accountID;	// 72 = 0x48
    unsigned long long _delegatedAccountID;	// 80 = 0x50
    NSString *_householdID;	// 88 = 0x58
    NSString *_storefrontID;	// 96 = 0x60
    long long _preferredAudioAssetType;	// 104 = 0x68
    MPCAudioAssetTypeSelection *_audioAssetTypeSelection;	// 112 = 0x70
}

- (void).cxx_destruct;	// IMP=0x000000000020a8a9
@property(nonatomic) _Bool supportsVocalAttenuation; // @synthesize supportsVocalAttenuation=_supportsVocalAttenuation;
@property(retain, nonatomic) MPCAudioAssetTypeSelection *audioAssetTypeSelection; // @synthesize audioAssetTypeSelection=_audioAssetTypeSelection;
@property(nonatomic) long long preferredAudioAssetType; // @synthesize preferredAudioAssetType=_preferredAudioAssetType;
@property(copy, nonatomic) NSString *storefrontID; // @synthesize storefrontID=_storefrontID;
@property(copy, nonatomic) NSString *householdID; // @synthesize householdID=_householdID;
@property(nonatomic) unsigned long long delegatedAccountID; // @synthesize delegatedAccountID=_delegatedAccountID;
@property(nonatomic) unsigned long long accountID; // @synthesize accountID=_accountID;
@property(nonatomic, getter=isFollowUp) _Bool followUp; // @synthesize followUp=_followUp;
@property(retain, nonatomic) MPModelStoreAsset *storeAsset; // @synthesize storeAsset=_storeAsset;
@property(nonatomic, getter=isRadioPlayback) _Bool radioPlayback; // @synthesize radioPlayback=_radioPlayback;
@property(nonatomic) _Bool prefersHighQualityContent; // @synthesize prefersHighQualityContent=_prefersHighQualityContent;
@property(retain, nonatomic) MPIdentifierSet *itemIdentifiers; // @synthesize itemIdentifiers=_itemIdentifiers;
@property(retain, nonatomic) MPModelHomeSharingAsset *homeSharingAsset; // @synthesize homeSharingAsset=_homeSharingAsset;
@property(retain, nonatomic) MPModelGenericObject *genericObject; // @synthesize genericObject=_genericObject;
@property(retain, nonatomic) MPModelFileAsset *fileAsset; // @synthesize fileAsset=_fileAsset;
@property(retain, nonatomic) id <MPCModelPlaybackAssetCacheProviding> assetCacheProvider; // @synthesize assetCacheProvider=_assetCacheProvider;
@property(nonatomic) _Bool prefersVideoContent; // @synthesize prefersVideoContent=_prefersVideoContent;
@property(nonatomic) long long HLSContentPolicy; // @synthesize HLSContentPolicy=_HLSContentPolicy;
@property(readonly, nonatomic) _Bool allowsHLSContent;

@end

