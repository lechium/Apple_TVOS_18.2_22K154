//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <VFX/MTLDrawable-Protocol.h>

@class CAMetalLayer;
@protocol MTLTexture;

@protocol CAMetalDrawable <MTLDrawable>
@property(readonly) CAMetalLayer *layer;
@property(readonly) id <MTLTexture> texture;
@end

