//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXGLayoutContentSource-Protocol.h>

@class NSDictionary, PXGLayout;
@protocol PXDisplayAsset;

@protocol PXGDebugDecorationSource <PXGLayoutContentSource>
- (NSDictionary *)debugDecorationAtSpriteIndex:(unsigned int)arg1 asset:(id <PXDisplayAsset>)arg2 inLayout:(PXGLayout *)arg3;
- (_Bool)wantsDebugDecorationInLayout:(PXGLayout *)arg1;
@end

