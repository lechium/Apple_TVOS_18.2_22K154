//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface MCMAMFI : NSObject
{
    Class _lwcrClass;	// 8 = 0x8
    CDStruct_4c969caf _auditToken;	// 16 = 0x10
}

@property(readonly, nonatomic) CDStruct_4c969caf auditToken; // @synthesize auditToken=_auditToken;
@property(retain, nonatomic, setter=setLWCRClass:) Class lwcrClass; // @dynamic lwcrClass;
- (id)_encodedQueriesWithContainerConfig:(id)arg1 teamID:(id)arg2;	// IMP=0x0000000000016ec3
- (id)_encodeRequirement:(id)arg1 name:(id)arg2;	// IMP=0x0000000000016d1b
- (id)_requirementForProfileValidatedEntitlements;	// IMP=0x0000000000016ced
- (id)_requirementForiOSPlatform;	// IMP=0x0000000000016cbf
- (id)_requirementForValidationCategory:(id)arg1;	// IMP=0x0000000000016c1a
- (id)_requirementForTeamID:(id)arg1;	// IMP=0x0000000000016b1f
- (_Bool)signaturePassesStrictScrutinyForAppGroupEntitlementWithContainerConfig:(id)arg1 teamID:(id)arg2;	// IMP=0x00000000000166f5
- (id)initWithAuditToken:(CDStruct_4c969caf)arg1;	// IMP=0x000000000001668b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

