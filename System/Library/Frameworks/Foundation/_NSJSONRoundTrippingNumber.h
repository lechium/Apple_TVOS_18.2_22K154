//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface _NSJSONRoundTrippingNumber : NSObject
{
    NSNumber *_number;	// 8 = 0x8
    NSString *_representation;	// 16 = 0x10
}

+ (id)instanceMethodSignatureForSelector:(SEL)arg1;	// IMP=0x00100000008d018d
+ (_Bool)instancesRespondToSelector:(SEL)arg1;	// IMP=0x00100000008d00a9
+ (_Bool)isSubclassOfClass:(Class)arg1;	// IMP=0x00100000008cffdd
+ (_Bool)supportsSecureCoding;	// IMP=0x00100000008cfd4c
- (void)forwardInvocation:(id)arg1;	// IMP=0x00000000008d01bc
- (id)methodSignatureForSelector:(SEL)arg1;	// IMP=0x00000000008d01a6
- (_Bool)respondsToSelector:(SEL)arg1;	// IMP=0x00000000008d0166
- (_Bool)isNSNumber__;	// IMP=0x00000000008d00a1
- (_Bool)isKindOfClass:(Class)arg1;	// IMP=0x00000000008d003f
- (Class)superclass;	// IMP=0x00000000008cffcc
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000008cff38
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000008cfd5c
- (_Bool)_allowsDirectEncoding;	// IMP=0x00000000008cfd54
- (unsigned long long)hash;	// IMP=0x00000000008cfd36
- (_Bool)isEqualToNumber:(id)arg1;	// IMP=0x00000000008cfcea
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000008cfc9d
- (id)stringValue;	// IMP=0x00000000008cfc7f
- (void)dealloc;	// IMP=0x00000000008cfc12
- (id)initWithNumber:(id)arg1 representation:(id)arg2;	// IMP=0x00000000008cfb84

@end

