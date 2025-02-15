//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSDictionary, NSError, NSSet;

@interface SWCEnterpriseContext : NSObject
{
    NSDictionary *_associatedDomains;	// 8 = 0x8
    NSSet *_managedModeAppIDs;	// 16 = 0x10
    NSError *_highLevelError;	// 24 = 0x18
    _Bool _appleInternal;	// 32 = 0x20
    _Bool _managing;	// 33 = 0x21
}

- (void).cxx_destruct;	// IMP=0x002000000000fff2
@property(readonly, getter=isManaging) _Bool managing; // @synthesize managing=_managing;
@property(readonly) NSData *state;
- (id)isApplicationIdentifierEligibleForManagedMode:(id)arg1 error:(id *)arg2;	// IMP=0x001000000000fc13
- (id)serviceSpecifiersForApplicationIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x001000000000fa2d
- (id)init;	// IMP=0x001000000000f96c
- (void)_loadEnterpriseData;	// IMP=0x0010000000010025

@end

