//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _JEAtomicCounter : NSObject
{
    _Atomic long long _value;	// 8 = 0x8
}

- (id)description;	// IMP=0x0000000000022db8
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000022d54
- (unsigned long long)hash;	// IMP=0x0000000000022d42
- (long long)decrement;	// IMP=0x0000000000022d2f
- (long long)increment;	// IMP=0x0000000000022d1e
- (id)init;	// IMP=0x0000000000022ce1
- (id)initWithInitialValue:(long long)arg1;	// IMP=0x0000000000022ca4

@end

