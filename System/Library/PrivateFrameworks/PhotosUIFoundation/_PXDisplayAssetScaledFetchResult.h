//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol PXDisplayAsset, PXDisplayAssetFetchResult;

__attribute__((visibility("hidden")))
@interface _PXDisplayAssetScaledFetchResult : NSObject
{
    id <PXDisplayAssetFetchResult> _fetchResult;	// 8 = 0x8
    long long _multipler;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000046965
- (id)thumbnailAssetAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000046943
@property(readonly, nonatomic) long long count;
- (unsigned long long)cachedCountOfAssetsWithMediaType:(long long)arg1;	// IMP=0x00000000000468f7
- (unsigned long long)countOfAssetsWithMediaType:(long long)arg1;	// IMP=0x00000000000468d1
- (_Bool)containsObject:(id)arg1;	// IMP=0x00000000000468bb
- (unsigned long long)indexOfObject:(id)arg1;	// IMP=0x0000000000046881
@property(readonly, nonatomic) id <PXDisplayAsset> lastObject;
@property(readonly, nonatomic) id <PXDisplayAsset> firstObject;
- (id)objectsAtIndexes:(id)arg1;	// IMP=0x000000000004676a
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;	// IMP=0x0000000000046758
- (id)objectAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000046736
@property(readonly, copy) NSString *description;
- (id)initWithFetchResult:(id)arg1 multiplier:(long long)arg2;	// IMP=0x00000000000465c9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

