//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface MCMEntitlementBypassList : NSObject
{
    NSDictionary *_bypassListedLookupByCodeSignIdentifier;	// 8 = 0x8
    NSDictionary *_systemEntitlementBypassList;	// 16 = 0x10
    NSDictionary *_systemGroupEntitlementBypassList;	// 24 = 0x18
}

+ (id)sharedBypassList;	// IMP=0x0060000000039c21
- (void).cxx_destruct;	// IMP=0x0000000000039b31
@property(retain, nonatomic) NSDictionary *systemGroupEntitlementBypassList; // @synthesize systemGroupEntitlementBypassList=_systemGroupEntitlementBypassList;
@property(retain, nonatomic) NSDictionary *systemEntitlementBypassList; // @synthesize systemEntitlementBypassList=_systemEntitlementBypassList;
- (id)wellKnownContainerIdentifiersForSandboxPushDownCompatibilitySet;	// IMP=0x0000000000039a08
- (id)_convertArraysToSetsInNestedDictionary:(id)arg1;	// IMP=0x00000000000395a4
- (_Bool)isLookupAllowedToBypassEntitlementFromCodeSignIdentifier:(id)arg1 forContainerClass:(unsigned long long)arg2 containerIdentifier:(id)arg3;	// IMP=0x00000000000393f4
- (id)wellknownContainerForId:(id)arg1 class:(unsigned long long)arg2;	// IMP=0x000000000003935f
- (_Bool)containerIdIsWellknown:(id)arg1 class:(unsigned long long)arg2;	// IMP=0x00000000000392d6
- (id)wellknownSystemGroupContainers;	// IMP=0x000000000003925d
- (_Bool)systemGroupContainerIdIsWellknown:(id)arg1;	// IMP=0x00000000000391b0
- (id)wellknownSystemGroupContainerForId:(id)arg1;	// IMP=0x000000000003910b
- (id)wellknownSystemContainers;	// IMP=0x0000000000039092
- (_Bool)systemContainerIdIsWellknown:(id)arg1;	// IMP=0x0000000000038fe5
- (id)wellknownSystemContainerForId:(id)arg1;	// IMP=0x0000000000038f40
- (id)initWithSystemContainerMapping:(id)arg1 systemGroupContainerMapping:(id)arg2 bypassListedCodeSignIdentifierMapping:(id)arg3;	// IMP=0x0000000000038e43

@end

