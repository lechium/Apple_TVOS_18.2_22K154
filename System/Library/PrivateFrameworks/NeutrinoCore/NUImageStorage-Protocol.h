//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NeutrinoCore/NUMutableBufferProvider-Protocol.h>

@class NSDictionary, NUColorSpace, NUPixelFormat, NURegion;
@protocol NUImageStorage, NURenderer;

@protocol NUImageStorage <NUMutableBufferProvider>
@property _Bool isDirty;
@property(retain) NUColorSpace *colorSpace;
@property(readonly) NURegion *validRegion;
@property(readonly) NUPixelFormat *format;
@property(readonly) long long sizeInBytes;
@property(readonly) CDStruct_912cb5d2 size;
- (long long)useAsCVPixelBufferWithBlock:(void (^)(NUCVPixelBuffer *))arg1;
- (long long)useAsCIRenderDestinationWithRenderer:(id <NURenderer>)arg1 block:(_Bool (^)(CIRenderDestination *))arg2;
- (long long)useAsCIImageWithOptions:(NSDictionary *)arg1 renderer:(id <NURenderer>)arg2 block:(void (^)(CIImage *))arg3;
- (long long)fillBufferWithPattern8:(unsigned long long)arg1;
- (long long)fillBufferWithPattern4:(unsigned int)arg1;
- (long long)writeBufferInRegion:(NURegion *)arg1 block:(void (^)(id <NUMutableBuffer>))arg2;
- (long long)readBufferInRegion:(NURegion *)arg1 block:(void (^)(id <NUBuffer>))arg2;
- (long long)copyFromStorage:(id <NUImageStorage>)arg1 region:(NURegion *)arg2;
- (void)assertIsValidInRegion:(NURegion *)arg1;
- (void)assertIsValidInRect:(CDStruct_0973877e)arg1;
- (_Bool)isValidInRegion:(NURegion *)arg1;
- (_Bool)isValidInRect:(CDStruct_0973877e)arg1;
- (void)invalidate;
- (void)validateRegion:(NURegion *)arg1;
- (void)validateRect:(CDStruct_0973877e)arg1;
@end

