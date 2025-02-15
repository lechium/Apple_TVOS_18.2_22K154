//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSMutableData.h>

@interface NSMutableData (NSMutableData)
+ (id)_newZeroingDataWithBytes:(const void *)arg1 length:(unsigned long long)arg2;	// IMP=0x0080000000770e43
+ (id)dataWithLength:(unsigned long long)arg1;	// IMP=0x0080000000770da7
+ (id)dataWithCapacity:(unsigned long long)arg1;	// IMP=0x0080000000770d78
+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x0080000000770d31
- (id)initWithLength:(unsigned long long)arg1;	// IMP=0x0010000000770e04
- (id)initWithCapacity:(unsigned long long)arg1;	// IMP=0x0010000000770dd6
- (void)setData:(id)arg1;	// IMP=0x0010000000770c46
- (void)resetBytesInRange:(struct _NSRange)arg1;	// IMP=0x0010000000770ac5
- (void)replaceBytesInRange:(struct _NSRange)arg1 withBytes:(const void *)arg2;	// IMP=0x00100000007707d7
- (void)increaseLengthBy:(unsigned long long)arg1;	// IMP=0x0010000000770683
- (void)appendData:(id)arg1;	// IMP=0x00100000007703e1
- (void)appendBytes:(const void *)arg1 length:(unsigned long long)arg2;	// IMP=0x001000000077016d
- (void)replaceBytesInRange:(struct _NSRange)arg1 withBytes:(const void *)arg2 length:(unsigned long long)arg3;	// IMP=0x001000000076fda2
- (_Bool)_isCompact;	// IMP=0x001000000076fd9a
- (Class)classForCoder;	// IMP=0x001000000076fd89
- (void)setLength:(unsigned long long)arg1;	// IMP=0x001000000076fd3a
- (void *)mutableBytes;	// IMP=0x001000000076fce8
- (_Bool)decompressUsingAlgorithm:(long long)arg1 error:(id *)arg2;	// IMP=0x00100000007743e7
- (_Bool)compressUsingAlgorithm:(long long)arg1 error:(id *)arg2;	// IMP=0x00100000007743b9
- (_Bool)_decompressUsingCompressionAlgorithm:(int)arg1 error:(id *)arg2;	// IMP=0x001000000077424e
- (_Bool)_compressUsingCompressionAlgorithm:(int)arg1 error:(id *)arg2;	// IMP=0x00100000007740e6
@end

