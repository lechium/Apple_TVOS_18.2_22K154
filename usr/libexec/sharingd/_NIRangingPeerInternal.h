//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData;

@interface _NIRangingPeerInternal : NSObject
{
    NSData *_macAddress;	// 8 = 0x8
    NSData *_secureRangingKeyID;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000149e05
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000149db8
- (id)initWithMacAddressAsData:(id)arg1 secureRangingKeyID:(id)arg2;	// IMP=0x0010000000149cf1

@end

