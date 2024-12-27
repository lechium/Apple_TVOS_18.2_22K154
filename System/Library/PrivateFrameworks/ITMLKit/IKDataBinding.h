//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableSet, NSSet;

__attribute__((visibility("hidden")))
@interface IKDataBinding : NSObject
{
    NSDictionary *_entriesByKey;	// 8 = 0x8
    NSMutableSet *_unresolvedKeys;	// 16 = 0x10
    NSDictionary *_keyValues;	// 24 = 0x18
    NSSet *_dataBoundKeys;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000c441c
@property(readonly, nonatomic) NSSet *dataBoundKeys; // @synthesize dataBoundKeys=_dataBoundKeys;
@property(copy, nonatomic) NSDictionary *keyValues; // @synthesize keyValues=_keyValues;
- (void)markResolvedForKey:(id)arg1;	// IMP=0x00000000000c43e3
- (void)setNeedsResolutionForAllKeys;	// IMP=0x00000000000c4374
- (void)setNeedsResolutionForKey:(id)arg1;	// IMP=0x00000000000c435e
- (id)unresolvedKeysWithAnyOfAttributes:(unsigned long long)arg1;	// IMP=0x00000000000c40f8
- (id)dataBoundKeysWithAnyOfAttributes:(unsigned long long)arg1;	// IMP=0x00000000000c3e92
- (id)keysWithAnyOfAttributes:(unsigned long long)arg1;	// IMP=0x00000000000c3c2c
@property(readonly, nonatomic) NSSet *unresolvedKeys;
- (id)initWithEntries:(id)arg1;	// IMP=0x00000000000c3762

@end

