//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSData.h>

@interface NSData (SBKAdditions)
+ (id)SBKStringByMD5HashingString:(id)arg1;	// IMP=0x00600000000023aa
+ (id)SBKStringFromDigestData:(id)arg1;	// IMP=0x00600000000022c8
- (id)SBKDataByDeflatingWithGZip;	// IMP=0x00100000000022b6
- (id)SBKDataByInflatingWithGZip;	// IMP=0x00100000000022a4
- (id)SBKDataByDeflatingWithNoZipHeader;	// IMP=0x001000000000228d
- (id)SBKDataByInflatingWithNoZipHeader;	// IMP=0x001000000000227b
- (id)_SBKDataByDeflatingWithNoZipHeaderWithCompression:(unsigned long long)arg1;	// IMP=0x0010000000001f17
- (id)_SBKDataByInflatingWithNoZipHeader;	// IMP=0x0010000000001d2f
@end

