//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData;

@protocol CUByteCodable
+ (id)createWithBytesNoCopy:(void *)arg1 length:(unsigned long long)arg2 error:(id *)arg3;
- (NSData *)encodedDataAndReturnError:(id *)arg1;
- (const char *)encodedBytesAndReturnLength:(unsigned long long *)arg1 error:(id *)arg2;
@end

