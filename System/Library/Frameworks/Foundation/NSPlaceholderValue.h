//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSNumber.h"

__attribute__((visibility("hidden")))
@interface NSPlaceholderValue : NSNumber
{
    struct _NSZone *zoneForInstance;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00600000008944b5
- (void)getValue:(void *)arg1 size:(unsigned long long)arg2;	// IMP=0x000000000089459c
- (void)getValue:(void *)arg1;	// IMP=0x000000000089453a
- (const char *)objCType;	// IMP=0x00000000008944d5
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000008944bd
- (id)initWithBytes:(const void *)arg1 objCType:(const char *)arg2;	// IMP=0x0000000000894497
- (id)init;	// IMP=0x000000000089448f
- (void)dealloc;	// IMP=0x0000000000894489
- (_Bool)_tryRetain;	// IMP=0x0000000000894481
- (_Bool)_isDeallocating;	// IMP=0x0000000000894479
- (oneway void)release;	// IMP=0x0000000000894473
- (unsigned long long)retainCount;	// IMP=0x0000000000894466
- (id)retain;	// IMP=0x000000000089445d
- (id)autorelease;	// IMP=0x0000000000894454

@end

