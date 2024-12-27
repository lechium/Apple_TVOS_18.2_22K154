//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface TVISCinematicManifest : NSObject
{
    unsigned long long _version;	// 8 = 0x8
    NSArray *_assetIdentifiers;	// 16 = 0x10
    NSString *_SHA256;	// 24 = 0x18
    NSDictionary *_jsonObject;	// 32 = 0x20
    unsigned long long _initialAssetCount;	// 40 = 0x28
}

+ (_Bool)_isValidAssetObject:(id)arg1;	// IMP=0x0060000000066390
+ (id)localCustomerManifestWithConfiguration:(id)arg1;	// IMP=0x0060000000064b20
- (void).cxx_destruct;	// IMP=0x00000000000675a0
@property(readonly, nonatomic) unsigned long long initialAssetCount; // @synthesize initialAssetCount=_initialAssetCount;
@property(readonly, copy, nonatomic) NSDictionary *jsonObject; // @synthesize jsonObject=_jsonObject;
@property(readonly, nonatomic) NSString *SHA256; // @synthesize SHA256=_SHA256;
@property(readonly, nonatomic) NSArray *assetIdentifiers; // @synthesize assetIdentifiers=_assetIdentifiers;
@property(readonly, nonatomic) unsigned long long version; // @synthesize version=_version;
- (id)updateStoreWithManagedObjectContext:(id)arg1 existingAssetIDs:(id)arg2;	// IMP=0x00000000000654b0
@property(readonly, nonatomic) unsigned long long minimumAssetsNeeded;
- (id)initWithJSONObject:(id)arg1;	// IMP=0x0000000000064c00

@end

