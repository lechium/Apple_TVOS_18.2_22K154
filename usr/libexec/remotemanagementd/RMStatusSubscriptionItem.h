//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreData/NSManagedObject.h>

@class NSPredicate, NSSet, NSString, RMStatusSubscription;

@interface RMStatusSubscriptionItem : NSManagedObject
{
}

- (id)reportDetails;	// IMP=0x00200000000811c2
- (void)prepareForDeletion;	// IMP=0x0010000000080f31

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) NSString *keyPath; // @dynamic keyPath;
@property(retain, nonatomic) NSPredicate *predicate; // @dynamic predicate;
@property(retain, nonatomic) NSSet *properties; // @dynamic properties;
@property(retain, nonatomic) NSSet *subscribedStatusKeyPaths; // @dynamic subscribedStatusKeyPaths;
@property(retain, nonatomic) RMStatusSubscription *subscription; // @dynamic subscription;
@property(readonly) Class superclass;

@end

