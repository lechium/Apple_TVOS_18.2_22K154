//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/NSObject-Protocol.h>

@class PXAudioRequestOptions;
@protocol PXAudioAsset, PXAudioAssetMediaProvider;

@protocol PXAudioAssetMediaProvider <NSObject>
+ (id <PXAudioAssetMediaProvider>)sharedInstance;
- (void)cancelRequest:(long long)arg1;
- (long long)requestMediaForAsset:(id <PXAudioAsset>)arg1 options:(PXAudioRequestOptions *)arg2 resultHandler:(void (^)(AVAsset *, AVAudioMix *, NSDictionary *))arg3;
- (id)initWithQOSClass:(unsigned int)arg1;
@end

