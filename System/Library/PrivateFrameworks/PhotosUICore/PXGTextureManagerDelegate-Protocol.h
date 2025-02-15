//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/NSObject-Protocol.h>

@class PXGOffscreenEffect, PXGRenderSnapshot, PXGTextureManager;

@protocol PXGTextureManagerDelegate <NSObject>
- (_Bool)textureManagerCanBlockMainThreadIfNeeded:(PXGTextureManager *)arg1;
- (PXGRenderSnapshot *)textureManager:(PXGTextureManager *)arg1 requestRenderSnapshot:(CDStruct_617cf0bc)arg2 offscreenEffect:(PXGOffscreenEffect *)arg3;
- (void)textureManagerNeedsUpdate:(PXGTextureManager *)arg1;
@end

