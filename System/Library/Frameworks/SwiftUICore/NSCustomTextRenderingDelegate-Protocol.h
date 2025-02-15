//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SwiftUICore/NSObject-Protocol.h>

@protocol NSCustomTextSurface;

@protocol NSCustomTextRenderingDelegate <NSObject>
- (void)setNeedsFrameUpdateForSurface:(id <NSCustomTextSurface>)arg1;

@optional
- (void)_willDrawContentOfSurface:(id <NSCustomTextSurface>)arg1 withBlock:(void (^)(void))arg2;
- (void)_setNeedsFrameUpdateForCustomRendering;
- (void)_invalidateInteractionGeometry;
- (void)_setNeedsLayoutForInteraction;
@end

