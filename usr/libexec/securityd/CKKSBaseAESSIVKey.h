//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface CKKSBaseAESSIVKey : NSObject
{
    unsigned char key[80];	// 8 = 0x8
    unsigned long long size;	// 88 = 0x58
}

- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00200000001d3c06
- (void)zeroKey;	// IMP=0x00100000001d3bed
- (void)dealloc;	// IMP=0x00100000001d3baf
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000001d3b44
- (id)initWithBase64:(id)arg1;	// IMP=0x00100000001d3a3c
- (id)initWithBytes:(char *)arg1 len:(unsigned long long)arg2;	// IMP=0x00100000001d39d6
- (id)init;	// IMP=0x00100000001d3982

@end

