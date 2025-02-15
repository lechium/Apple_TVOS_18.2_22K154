//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface NSKeyValueObservationInfo : NSObject
{
    NSArray *_observances;	// 8 = 0x8
    unsigned long long _cachedHash;	// 16 = 0x10
    _Bool _cachedIsShareable;	// 24 = 0x18
}

- (id)description;	// IMP=0x00000000007cf2b9
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000007cf0ec
- (unsigned long long)hash;	// IMP=0x00000000007cf0e2
- (void)dealloc;	// IMP=0x00000000007cf084
- (id)copy;	// IMP=0x00000000007cf079
@property(readonly, nonatomic) _Bool containsOnlyInternalObservationHelpers;
- (id)_initWithObservances:(id *)arg1 count:(unsigned long long)arg2 hashValue:(unsigned long long)arg3;	// IMP=0x00000000007ced91
- (id)_copyByAddingObservance:(id)arg1;	// IMP=0x00000000007ceb14

@end

