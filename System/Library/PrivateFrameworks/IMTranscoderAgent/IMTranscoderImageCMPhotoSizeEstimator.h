//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "IMTranscoderImageSizeEstimator.h"

@interface IMTranscoderImageCMPhotoSizeEstimator : IMTranscoderImageSizeEstimator
{
    struct CMPhotoDecompressionContainer *_container;	// 32 = 0x20
}

- (unsigned long long)estimatedSizeForOutputUTI:(id)arg1 maximumDimension:(long long)arg2 quality:(double)arg3;	// IMP=0x0000000000016ace
- (unsigned long long)optimizedEstimatedSizeForOutputUTI:(id)arg1 maximumDimension:(long long)arg2 quality:(double)arg3;	// IMP=0x00000000000168f1
- (void)dealloc;	// IMP=0x00000000000168ab
- (id)initWithURL:(id)arg1 uti:(id)arg2 imageSource:(struct CGImageSource *)arg3;	// IMP=0x0000000000016807

@end

