//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _JEAtomicFlag : NSObject
{
    _Atomic _Bool _value;	// 8 = 0x8
}

- (id)description;	// IMP=0x0000000000022f51
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000022ee9
- (unsigned long long)hash;	// IMP=0x0000000000022ed2
- (_Bool)compareWithValue:(_Bool)arg1 andExchangeWithValue:(_Bool)arg2;	// IMP=0x0000000000022ec2
- (id)init;	// IMP=0x0000000000022e75
- (id)initWithInitialValue:(_Bool)arg1;	// IMP=0x0000000000022e3a

@end

