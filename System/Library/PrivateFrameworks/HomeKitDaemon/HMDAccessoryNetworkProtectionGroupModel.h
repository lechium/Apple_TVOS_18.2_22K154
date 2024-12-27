//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface HMDAccessoryNetworkProtectionGroupModel
{
}

+ (id)shortDescription;	// IMP=0x0010000000ac9d59
+ (id)properties;	// IMP=0x0010000000ac9d29
+ (id)modelIDForHome:(id)arg1 manufacturer:(id)arg2 category:(id)arg3;	// IMP=0x0010000000ac9b40
+ (id)modelNamespace;	// IMP=0x0010000000ac9b10
+ (Class)cd_entityClass;	// IMP=0x0010000000b52a29
+ (id)cd_parentReferenceName;	// IMP=0x0010000000b52a1c
- (id)attributeDescriptions;	// IMP=0x0000000000ac9f35
@property(readonly, copy) NSString *description;
- (id)privateDescription;	// IMP=0x0000000000ac9f19
- (id)shortDescription;	// IMP=0x0000000000ac9eff

// Remaining properties
@property(copy, nonatomic) NSNumber *category; // @dynamic category;
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSString *manufacturer; // @dynamic manufacturer;
@property(readonly) Class superclass;
@property(copy, nonatomic) NSNumber *targetProtectionMode; // @dynamic targetProtectionMode;

@end

