//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface IDSEntitlements : NSObject
{
    struct _SpecificEntitlement *_specificEntitlements;	// 8 = 0x8
    char **_shrunkenServiceIdentifiers;	// 16 = 0x10
    unsigned short _serviceIdentifierCount;	// 24 = 0x18
    unsigned char _specificEntitlementCount;	// 26 = 0x1a
}

- (id)dictionaryRepresentation;	// IMP=0x0020000000225e5c
- (_Bool)hasAnyEntitlements;	// IMP=0x0010000000225e4f
- (_Bool)hasEntitlement:(id)arg1;	// IMP=0x0010000000225df9
- (_Bool)hasService:(id)arg1 forEntitlement:(id)arg2;	// IMP=0x0010000000225c2e
- (_Bool)hasService:(id)arg1 forAnyOfEntitlements:(id)arg2;	// IMP=0x0010000000225ab9
- (id)debugDescription;	// IMP=0x0010000000225a69
- (void)dealloc;	// IMP=0x00100000002259ae
- (id)initWithEntitlements:(id)arg1;	// IMP=0x0010000000224b1d

@end

