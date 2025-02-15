//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IDSGroupServer, NSString;

@interface IDSDGroupContextDataSource : NSObject
{
    IDSGroupServer *_groupServer;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x002000000012cf06
- (void).cxx_destruct;	// IMP=0x0020000000131a99
@property(retain, nonatomic) IDSGroupServer *groupServer; // @synthesize groupServer=_groupServer;
- (id)_sponsorAccount;	// IMP=0x00100000001319ab
- (id)_sponsorAlias;	// IMP=0x0010000000131931
- (id)_groupWithDeviceIdentity:(id)arg1 parent:(id)arg2 groupInfo:(id)arg3 error:(id *)arg4;	// IMP=0x0010000000131929
- (void)_participantsForDestinations:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000131923
- (void)validateCachedGroup:(id)arg1 isParentOfGroup:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000013182a
- (void)participantsForCypher:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000013166c
- (void)groupFromPublicDataRepresentation:(id)arg1 inContext:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000001305a9
- (void)publicDataRepresentationForGroup:(id)arg1 inContext:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000012fc9c
- (void)groupContext:(id)arg1 fetchGroupWithID:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000012faf2
- (void)_groupFromServerResponse:(id)arg1 context:(id)arg2 groupID:(id)arg3 error:(id)arg4 resultCode:(long long)arg5 resultDictionary:(id)arg6 allEntries:(id)arg7 completion:(CDUnknownBlockType)arg8;	// IMP=0x001000000012df48
- (void)groupContext:(id)arg1 upsertGroupWithInfo:(id)arg2 previousGroup:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000012cfb1
- (id)init;	// IMP=0x001000000012cf5b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

