//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSData.h>

@class NSString;

@interface NSData (FezAdditions)
+ (id)__imDataWithRandomBytes:(unsigned long long)arg1;	// IMP=0x00200000000077c2
+ (id)__imDataWithHexString:(id)arg1;	// IMP=0x002000000000766b
+ (id)__imHexStringOfBytes:(char *)arg1 withLength:(unsigned long long)arg2;	// IMP=0x0020000000007550
- (id)_FTOptionallyDecompressData;	// IMP=0x0010000000007a7d
- (id)_FTDecompressData;	// IMP=0x0010000000007834
- (id)__imHexString;	// IMP=0x0010000000007613
- (id)__imHexStringOfBytes:(char *)arg1 withLength:(unsigned long long)arg2;	// IMP=0x00100000000075fa
@property(readonly, nonatomic) NSData *SHA256Data;
@property(readonly, nonatomic) NSString *SHA1HexString;
@property(readonly, nonatomic) NSData *SHA1Data;
@end

