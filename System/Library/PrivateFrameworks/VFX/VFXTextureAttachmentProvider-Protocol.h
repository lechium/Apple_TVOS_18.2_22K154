//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <VFX/NSObject-Protocol.h>

@class MTLTextureDescriptor, NSString, VFXDrawableDescriptor;
@protocol MTLTexture;

@protocol VFXTextureAttachmentProvider <NSObject>
@property(readonly, retain, nonatomic) VFXDrawableDescriptor *drawableDescriptor;
- (id <MTLTexture>)textureForAttachment:(NSString *)arg1 withDescriptor:(MTLTextureDescriptor *)arg2;
@end

