//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "TTSAsset.h"

@class MISSING_TYPE, NSArray, NSBundle, NSDictionary, NSNumber, NSString, TTSAssetQuality, TTSAssetSource, TTSAssetTechnology, TTSAssetType;

@interface _TtC14SiriTTSService15TTSAssetMAAsset : TTSAsset
{
    MISSING_TYPE *asset;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000070b8a
- (id)init;	// IMP=0x0000000000070b70
- (void)purge;	// IMP=0x0000000000070b0d
- (void)cancelDownloadingThen:(CDUnknownBlockType)arg1;	// IMP=0x0000000000070a56
- (void)downloadWithReservation:(id)arg1 useBattery:(_Bool)arg2 progress:(CDUnknownBlockType)arg3 then:(CDUnknownBlockType)arg4;	// IMP=0x0000000000070828
@property(nonatomic, readonly) _Bool locallyAvailable;
@property(nonatomic, readonly) _Bool purgeable;
@property(nonatomic, readonly) _Bool downloading;
@property(nonatomic, readonly) NSBundle *bundle;
@property(nonatomic, readonly) NSNumber *diskSize;
@property(nonatomic, readonly) NSNumber *downloadSize;
@property(nonatomic, readonly) NSDictionary *attributes;
@property(nonatomic, readonly) NSNumber *age;
@property(nonatomic, readonly) long long gender;
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

