//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSArray.h>

@interface NSArray (CUArrayExtensions)
+ (id)createWithBytesNoCopy:(void *)arg1 length:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x00100000000b7939
- (id)cuFilteredArrayUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00100000000b7482
- (id)encodedDataAndReturnError:(id *)arg1;	// IMP=0x00100000000b7407
- (const char *)encodedBytesAndReturnLength:(unsigned long long *)arg1 error:(id *)arg2;	// IMP=0x00100000000b73f3
@end

