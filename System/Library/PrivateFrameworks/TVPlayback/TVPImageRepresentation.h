//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface TVPImageRepresentation : NSObject
{
    _Bool _fixedFrame;	// 8 = 0x8
    struct CGRect _sourceRect;	// 16 = 0x10
    struct CGRect _destinationRect;	// 48 = 0x30
}

+ (id)_loadingQueue;	// IMP=0x006000000009d50d
+ (id)imageRepresentationWithNamedLayerImage:(id)arg1;	// IMP=0x006000000009d18f
+ (id)imageRepresentationWithImageProxy:(id)arg1;	// IMP=0x006000000009d142
+ (id)imageRepresentationWithImage:(id)arg1;	// IMP=0x006000000009d0f5
+ (id)imageRepresentationWithURL:(id)arg1;	// IMP=0x006000000009d041
+ (id)imageRepresentationWithImageNamed:(id)arg1 inBundle:(id)arg2 compatibleWithTraitCollection:(id)arg3;	// IMP=0x006000000009cfb1
@property(nonatomic, getter=isFixedFrame) _Bool fixedFrame; // @synthesize fixedFrame=_fixedFrame;
@property(nonatomic) struct CGRect destinationRect; // @synthesize destinationRect=_destinationRect;
@property(nonatomic) struct CGRect sourceRect; // @synthesize sourceRect=_sourceRect;
- (id)_originalImageCacheKey;	// IMP=0x000000000009d505
- (struct CGImage *)_originalImage;	// IMP=0x000000000009d4fd
- (struct CGImage *)_imageForOriginalImage:(struct CGImage *)arg1;	// IMP=0x000000000009d42e
- (void)loadImageWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000009d335
- (struct CGImage *)newImage;	// IMP=0x000000000009d2ec
@property(readonly, nonatomic) NSString *cacheKey;

@end

