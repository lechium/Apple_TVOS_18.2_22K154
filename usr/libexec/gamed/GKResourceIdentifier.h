//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

@interface GKResourceIdentifier : NSObject
{
    NSArray *_keys;	// 8 = 0x8
}

+ (id)resourceIdentifierForKeys:(id)arg1;	// IMP=0x00200000000bf670
+ (id)resourceIdentifiersForBagKeys:(id)arg1;	// IMP=0x00100000000bf552
- (void).cxx_destruct;	// IMP=0x00200000000bf8a4
@property(retain, nonatomic) NSArray *keys; // @synthesize keys=_keys;
- (id)description;	// IMP=0x00100000000bf803
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000000bf7ae
- (unsigned long long)hash;	// IMP=0x00100000000bf6bd
- (id)initWithKeys:(id)arg1;	// IMP=0x00100000000bf2e7
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000bf2ae

@end

