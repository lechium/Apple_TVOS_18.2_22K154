//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSData;

@interface _TtC17MessageProtection17GLTDiversifiedKey : NSObject
{
    MISSING_TYPE *diversifiedKey;	// 8 = 0x8
    MISSING_TYPE *trackingPreventionSalt;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000030180
- (id)init;	// IMP=0x0000000000030110
@property(nonatomic, readonly) NSData *trackingPreventionSalt; // @synthesize trackingPreventionSalt;
@property(nonatomic, readonly) struct __SecKey *diversifiedKey; // @synthesize diversifiedKey;

@end

