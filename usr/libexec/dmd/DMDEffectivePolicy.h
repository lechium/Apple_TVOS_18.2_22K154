//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreData/NSManagedObject.h>

@class NSSet, NSString;

@interface DMDEffectivePolicy : NSManagedObject
{
}

@property(copy, nonatomic) NSSet *excludedIdentifiers;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(copy, nonatomic) NSString *declarationIdentifier; // @dynamic declarationIdentifier;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSString *identifier; // @dynamic identifier;
@property(copy, nonatomic) NSString *organizationIdentifier; // @dynamic organizationIdentifier;
@property(nonatomic) long long policy; // @dynamic policy;
@property(nonatomic) long long priority; // @dynamic priority;
@property(readonly) Class superclass;
@property(copy, nonatomic) NSString *type; // @dynamic type;

@end

