//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSURL;

__attribute__((visibility("hidden")))
@interface _LTLanguageDetectorAssetInfo : NSObject
{
    NSURL *_assetUrl;	// 8 = 0x8
    NSURL *_featureCombinationConfigUrl;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000003a9dc
- (id)featureCombinationConfigUrl;	// IMP=0x000000000003a9ce
- (id)languageDetectorModelURL;	// IMP=0x000000000003a9c0
- (id)initWithAssetUrl:(id)arg1 featureCombinationAssetUrl:(id)arg2;	// IMP=0x000000000003a917

@end

