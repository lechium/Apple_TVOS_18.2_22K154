//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData;

__attribute__((visibility("hidden")))
@interface ASFAsn1Token : NSObject
{
    unsigned char mClass;	// 8 = 0x8
    unsigned long long mIdentifier;	// 16 = 0x10
    NSData *mData;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000063ce
- (id)description;	// IMP=0x0000000000006362

@end

