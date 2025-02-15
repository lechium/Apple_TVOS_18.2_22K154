//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSOperation.h>

@class NSCache, NSString, NSURL, UIImage;

__attribute__((visibility("hidden")))
@interface MKPlaceCollectionImageGradientOperation : NSOperation
{
    _Bool _isRTL;	// 8 = 0x8
    UIImage *_sourceImage;	// 16 = 0x10
    UIImage *_blurredImage;	// 24 = 0x18
    NSURL *_url;	// 32 = 0x20
    NSString *_debugName;	// 40 = 0x28
    double _screenScale;	// 48 = 0x30
    NSString *_contentSizeCategory;	// 56 = 0x38
    NSString *_cacheId;	// 64 = 0x40
    NSCache *_downloadCache;	// 72 = 0x48
    NSCache *_blurringCache;	// 80 = 0x50
    struct CGSize _desiredSize;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x00000000000e739c
@property(nonatomic) __weak NSCache *blurringCache; // @synthesize blurringCache=_blurringCache;
@property(nonatomic) __weak NSCache *downloadCache; // @synthesize downloadCache=_downloadCache;
@property(retain, nonatomic) NSString *cacheId; // @synthesize cacheId=_cacheId;
@property(retain, nonatomic) NSString *contentSizeCategory; // @synthesize contentSizeCategory=_contentSizeCategory;
@property(nonatomic) double screenScale; // @synthesize screenScale=_screenScale;
@property(nonatomic) _Bool isRTL; // @synthesize isRTL=_isRTL;
@property(retain, nonatomic) NSString *debugName; // @synthesize debugName=_debugName;
@property(nonatomic) struct CGSize desiredSize; // @synthesize desiredSize=_desiredSize;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
@property(readonly, nonatomic) UIImage *blurredImage; // @synthesize blurredImage=_blurredImage;
@property(retain, nonatomic) UIImage *sourceImage; // @synthesize sourceImage=_sourceImage;
- (void)main;	// IMP=0x00000000000e629b
- (id)initWithUrl:(id)arg1 size:(struct CGSize)arg2 contentSizeCategory:(id)arg3 name:(id)arg4 downloadCache:(id)arg5 gradientCache:(id)arg6 isRTL:(_Bool)arg7 screenScale:(double)arg8 cacheId:(id)arg9;	// IMP=0x00000000000e60bf

@end

