//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSData.h>

@interface NSData (GZip)
+ (id)makeArchive:(const void *)arg1 length:(unsigned long long)arg2 level:(float)arg3;	// IMP=0x00500000000c35aa
- (id)gzipInflate;	// IMP=0x00100000000c3780
- (id)gzipDeflate:(float)arg1;	// IMP=0x00100000000c3394
@end

