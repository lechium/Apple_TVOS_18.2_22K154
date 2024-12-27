//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface NSRelationshipStoreMapping
{
    NSString *_destinationEntityExternalName;	// 24 = 0x18
    NSArray *_foreignKeys;	// 32 = 0x20
    NSArray *_joins;	// 40 = 0x28
    unsigned int _joinSemantic;	// 48 = 0x30
}

- (unsigned int)joinSemantic;	// IMP=0x0000000000168da0
- (id)joins;	// IMP=0x0000000000168d8f
- (id)foreignKeys;	// IMP=0x0000000000168d7e
- (id)destinationEntityExternalName;	// IMP=0x0000000000168d6d
- (id)relationship;	// IMP=0x0000000000168d5b
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000168c00
- (void)dealloc;	// IMP=0x0000000000168adc

@end

