//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSNumber;

@interface PurchaseOwner : NSObject
{
    long long _ownerType;	// 8 = 0x8
    NSNumber *_purchaserDSID;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000000e77e6
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000000e76e1
- (unsigned long long)hash;	// IMP=0x00100000000e76cb
- (id)description;	// IMP=0x00100000000e7641
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000e7636

@end

