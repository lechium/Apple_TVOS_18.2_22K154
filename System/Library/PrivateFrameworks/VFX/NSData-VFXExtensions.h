//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSData.h>

@interface NSData (VFXExtensions)
- (id)vfx_indexedDataDecodingTrianglePairsWithBytesPerIndex:(unsigned long long)arg1;	// IMP=0x007000000008cf3a
- (id)vfx_indexedDataEncodingTrianglePairsWithBytesPerIndex:(unsigned long long)arg1;	// IMP=0x007000000008caac
- (id)vfx_indexedDataDecodingDeltaWithBytesPerIndex:(unsigned long long)arg1;	// IMP=0x007000000008c932
- (id)vfx_indexedDataEncodingDeltaWithBytesPerIndex:(unsigned long long)arg1;	// IMP=0x007000000008c7b5
- (id)vfx_indexedDataDecodingHighWatermarkWithBytesPerIndex:(unsigned long long)arg1;	// IMP=0x007000000008c60e
- (id)vfx_indexedDataEncodingHighWatermarkWithBytesPerIndex:(unsigned long long)arg1;	// IMP=0x007000000008c45a
- (id)vfx_uncompressedDataUsingCompressionAlgorithm:(int)arg1;	// IMP=0x007000000008c443
- (id)vfx_compressedDataUsingCompressionAlgorithm:(int)arg1;	// IMP=0x007000000008c42f
- (id)_operateOnDataUsingCompressionAlgorithm:(int)arg1 operation:(int)arg2;	// IMP=0x007000000008c2c2
@end

