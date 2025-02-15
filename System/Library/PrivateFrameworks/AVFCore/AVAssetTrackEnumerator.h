//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSEnumerator.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface AVAssetTrackEnumerator : NSEnumerator
{
    NSString *_mediaType;	// 8 = 0x8
    NSArray *_mediaCharacteristics;	// 16 = 0x10
    NSEnumerator *_enumerator;	// 24 = 0x18
}

+ (id)trackEnumeratorWithAsset:(id)arg1;	// IMP=0x006000000002e417
- (id)nextObject;	// IMP=0x000000000002e627
- (void)setMediaCharacteristics:(id)arg1;	// IMP=0x000000000002e5ee
- (void)setMediaType:(id)arg1;	// IMP=0x000000000002e5b5
- (void)dealloc;	// IMP=0x000000000002e54f
- (id)initWithAsset:(id)arg1 mediaCharacteristics:(id)arg2;	// IMP=0x000000000002e510
- (id)initWithAsset:(id)arg1 mediaType:(id)arg2;	// IMP=0x000000000002e4d1
- (id)initWithAsset:(id)arg1;	// IMP=0x000000000002e446

@end

