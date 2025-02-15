//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface TVHSMediaServerIdentifier : NSObject
{
    unsigned long long _libraryIdentifier;	// 8 = 0x8
    unsigned long long _machineIdentifier;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00100000000b7c79
+ (id)mediaServerIdentifierWithStringRepresentation:(id)arg1;	// IMP=0x00100000000b773c
@property(nonatomic) unsigned long long machineIdentifier; // @synthesize machineIdentifier=_machineIdentifier;
@property(nonatomic) unsigned long long libraryIdentifier; // @synthesize libraryIdentifier=_libraryIdentifier;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000b7d89
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000b7c81
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000b7c6e
- (id)description;	// IMP=0x00000000000b7bb2
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000b7a0c
- (unsigned long long)hash;	// IMP=0x00000000000b796d
- (id)stringRepresentation;	// IMP=0x00000000000b790b
- (id)initWithMachineIdentifier:(unsigned long long)arg1 libraryIdentifier:(unsigned long long)arg2;	// IMP=0x00000000000b78c3
- (id)init;	// IMP=0x00000000000b7854

@end

