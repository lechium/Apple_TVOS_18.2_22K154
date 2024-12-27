//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreData/NSManagedObject.h>

@class NSString, NSUUID, UPDProfile;

__attribute__((visibility("hidden")))
@interface UPDConfiguration : NSManagedObject
{
}

- (id)stateDumpBuilder;	// IMP=0x0000000000056af4
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x00000000000568e9
- (id)descriptionWithMultilinePrefix:(id)arg1;	// IMP=0x0000000000056899
- (id)succinctDescriptionBuilder;	// IMP=0x00000000000567f3
- (id)succinctDescription;	// IMP=0x00000000000567a3
@property(readonly, nonatomic, getter=isSyncEnabled) _Bool syncEnabled;

// Remaining properties
@property(retain, nonatomic) UPDProfile *activeProfile; // @dynamic activeProfile;
@property(copy, nonatomic) NSString *anonymousPersonaIdentifier; // @dynamic anonymousPersonaIdentifier;
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) UPDProfile *primaryProfile; // @dynamic primaryProfile;
@property(copy, nonatomic) NSUUID *profilesSyncHomeIdentifier; // @dynamic profilesSyncHomeIdentifier;
@property(readonly) Class superclass;

@end

