//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface VOTElementUniqueIdentification : NSObject
{
    NSString *hashKey;	// 8 = 0x8
}

+ (id)identificationFromElement:(id)arg1;	// IMP=0x002000000012d667
+ (id)identificationFromKey:(id)arg1;	// IMP=0x001000000012d600
- (void).cxx_destruct;	// IMP=0x002000000012db6e
@property(copy, nonatomic) NSString *hashKey; // @synthesize hashKey;
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000012daa1
- (id)description;	// IMP=0x001000000012d9f2
- (unsigned long long)hash;	// IMP=0x001000000012d9ae
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000012d591

@end

