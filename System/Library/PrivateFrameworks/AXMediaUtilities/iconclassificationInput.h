//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSSet;

__attribute__((visibility("hidden")))
@interface iconclassificationInput : NSObject
{
    struct __CVBuffer *_image_Placeholder;	// 8 = 0x8
}

@property(nonatomic) struct __CVBuffer *image_Placeholder; // @synthesize image_Placeholder=_image_Placeholder;
- (id)featureValueForName:(id)arg1;	// IMP=0x00000000000338fa
@property(readonly, nonatomic) NSSet *featureNames;
- (_Bool)setImage_PlaceholderWithURL:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000337df
- (_Bool)setImage_PlaceholderWithCGImage:(struct CGImage *)arg1 error:(id *)arg2;	// IMP=0x0000000000033702
- (id)initWithImage_PlaceholderAtURL:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000335e5
- (id)initWithImage_PlaceholderFromCGImage:(struct CGImage *)arg1 error:(id *)arg2;	// IMP=0x00000000000334e4
- (void)dealloc;	// IMP=0x00000000000334aa
- (id)initWithImage_Placeholder:(struct __CVBuffer *)arg1;	// IMP=0x000000000003345b

@end

