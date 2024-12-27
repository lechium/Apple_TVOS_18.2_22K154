//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MTLSimDriver/MTLBuffer-Protocol.h>
#import <MTLSimDriver/MTLResourceSPI-Protocol.h>

@class MTLResourceAddressRangeArray, MTLTextureDescriptor;
@protocol MTLTexture;

@protocol MTLBufferSPI <MTLResourceSPI, MTLBuffer>
@property(readonly) struct __IOSurface *iosurface;
- (struct __IOSurface *)_aneIOSurface;
- (id <MTLTexture>)newLinearTextureWithDescriptor:(MTLTextureDescriptor *)arg1 offset:(unsigned long long)arg2 bytesPerRow:(unsigned long long)arg3 bytesPerImage:(unsigned long long)arg4;
- (void)didModifyRange:(struct _NSRange)arg1;

@optional
@property(nonatomic) unsigned long long parentGPUSize;
// Preceding property had unknown attributes: ?
// Original attribute string: TQ,?,N

@property(nonatomic) unsigned long long parentGPUAddress;
// Preceding property had unknown attributes: ?
// Original attribute string: TQ,?,N

@property(readonly, nonatomic) unsigned long long resourceIndex;
// Preceding property had unknown attributes: ?
// Original attribute string: TQ,?,R,N

- (_Bool)replaceBackingWithRanges:(MTLResourceAddressRangeArray *)arg1 readOnly:(_Bool)arg2;
- (_Bool)replaceBackingWithBytesNoCopy:(void *)arg1 length:(unsigned long long)arg2 deallocator:(void (^)(void *, unsigned long long))arg3;
- (_Bool)detachBacking;
@end

