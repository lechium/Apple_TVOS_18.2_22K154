//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface SQLitePredicate : NSObject
{
}

- (_Bool)isEqual:(id)arg1;	// IMP=0x0040000000186287
- (unsigned long long)hash;	// IMP=0x001000000018626d
- (id)SQLJoinClausesForEntityClass:(Class)arg1;	// IMP=0x0010000000186265
- (id)SQLForEntityClass:(Class)arg1;	// IMP=0x001000000018625d
- (void)applyBinding:(id)arg1 atIndex:(inout int *)arg2;	// IMP=0x0010000000186257
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000018624c

@end

