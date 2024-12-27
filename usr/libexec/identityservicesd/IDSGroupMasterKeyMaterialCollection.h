//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSSet;

@interface IDSGroupMasterKeyMaterialCollection : NSObject
{
    NSArray *_masterKeyMaterials;	// 8 = 0x8
    NSSet *_membershipURIs;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000016a014
@property(readonly, nonatomic) NSSet *membershipURIs; // @synthesize membershipURIs=_membershipURIs;
@property(readonly, nonatomic) NSArray *masterKeyMaterials; // @synthesize masterKeyMaterials=_masterKeyMaterials;
- (id)debugDescription;	// IMP=0x0010000000169f4a
- (id)description;	// IMP=0x0010000000169e75
- (id)initWithMasterKeyMaterials:(id)arg1 membershipURIs:(id)arg2;	// IMP=0x0010000000169ddc

@end

