//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _UIBarAppearanceData : NSObject
{
    _Bool _immutable;	// 8 = 0x8
}

+ (id)decodeFromCoder:(id)arg1 prefix:(id)arg2;	// IMP=0x0010000000331881
- (id)markReadOnly;	// IMP=0x0000000000331934
- (void)assertMutable:(SEL)arg1;	// IMP=0x00000000003318c0
- (id)replicate;	// IMP=0x00000000003318a6
- (_Bool)checkEqualTo:(id)arg1;	// IMP=0x000000000033189e
- (long long)hashInto:(long long)arg1;	// IMP=0x0000000000331895
- (void)describeInto:(id)arg1;	// IMP=0x000000000033188f
- (void)encodeToCoder:(id)arg1 prefix:(id)arg2;	// IMP=0x0000000000331889
- (id)description;	// IMP=0x00000000003317df
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000033176f
- (unsigned long long)hash;	// IMP=0x000000000033175b
- (id)writableInstance;	// IMP=0x000000000033172b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000331703

@end

