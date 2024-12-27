//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "TTSAsset.h"

@class MISSING_TYPE, NSArray, NSBundle, NSDictionary, NSNumber, NSString, TTSAssetQuality, TTSAssetSource, TTSAssetTechnology, TTSAssetType;

__attribute__((visibility("hidden")))
@interface _TtC14SiriTTSService22TTSAssetStaticResource : TTSAsset
{
    MISSING_TYPE *asset;	// 8 = 0x8
    MISSING_TYPE *assetAttr;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000089b62
- (id)init;	// IMP=0x0000000000089b48
@property(nonatomic, readonly) _Bool purgeable;
@property(nonatomic, readonly) NSBundle *bundle;
@property(nonatomic, readonly) NSNumber *diskSize;
@property(nonatomic, readonly) NSDictionary *attributes;
@property(nonatomic, readonly) NSArray *supportedLanguages;
@property(nonatomic, readonly) NSString *versionDescription;
@property(nonatomic, readonly) long long versionNumber;
@property(nonatomic, readonly) NSString *identifier;
@property(nonatomic, readonly) NSString *name;
@property(nonatomic, readonly) TTSAssetQuality *quality;
@property(nonatomic, readonly) TTSAssetTechnology *technology;
@property(nonatomic, readonly) TTSAssetSource *assetSource;
@property(nonatomic, readonly) TTSAssetType *assetType;

@end

