//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _NSKeyValueObjectAndKeyPair : NSObject
{
    id _object;	// 8 = 0x8
    unsigned long long _objectPointer;	// 16 = 0x10
    Class _objectClass;	// 24 = 0x18
    void *_context;	// 32 = 0x20
    NSString *_key;	// 40 = 0x28
}

- (id)description;	// IMP=0x00000000008a1b73
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000008a1b68
- (unsigned long long)hash;	// IMP=0x00000000008a1b43
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000008a1adf
- (void)dealloc;	// IMP=0x00000000008a1997

@end

