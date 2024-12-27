//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUIPrivate/NSObject-Protocol.h>

@protocol PXPosterRenderer, PXPosterRenderingEnvironment, PXPosterTransition;

@protocol PXWallpaperRenderingDelegate <NSObject>
- (void)rendererShouldDropExcessResources:(id <PXPosterRenderer>)arg1;
- (void)rendererDidInvalidate:(id <PXPosterRenderer>)arg1;
- (void)renderer:(id <PXPosterRenderer>)arg1 didUpdateEnvironment:(id <PXPosterRenderingEnvironment>)arg2 withTransition:(id <PXPosterTransition>)arg3;
- (void)renderer:(id <PXPosterRenderer>)arg1 didInitializeWithEnvironment:(id <PXPosterRenderingEnvironment>)arg2;
@end

