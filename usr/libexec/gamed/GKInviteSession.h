//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CKRecordID, NSArray, NSData, NSMutableArray, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface GKInviteSession : NSObject
{
    NSData *_sessionToken;	// 8 = 0x8
    NSMutableArray *_shareInvitees;	// 16 = 0x10
    CKRecordID *_shareRecordID;	// 24 = 0x18
    NSArray *_responses;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_syncQueue;	// 40 = 0x28
    NSMutableDictionary *_invitees;	// 48 = 0x30
    NSMutableArray *_invitedPlayers;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x002000000013a9ba
@property(retain, nonatomic) NSMutableArray *invitedPlayers; // @synthesize invitedPlayers=_invitedPlayers;
@property(retain, nonatomic) NSMutableDictionary *invitees; // @synthesize invitees=_invitees;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *syncQueue; // @synthesize syncQueue=_syncQueue;
@property(retain, nonatomic) NSArray *responses; // @synthesize responses=_responses;
@property(retain, nonatomic) CKRecordID *shareRecordID; // @synthesize shareRecordID=_shareRecordID;
@property(retain, nonatomic) NSMutableArray *shareInvitees; // @synthesize shareInvitees=_shareInvitees;
@property(retain, nonatomic) NSData *sessionToken; // @synthesize sessionToken=_sessionToken;
- (_Bool)shouldBeCleared;	// IMP=0x001000000013a6ff
- (void)removeAllResponses;	// IMP=0x001000000013a64b
- (void)addResponse:(id)arg1;	// IMP=0x001000000013a5fb
- (void)removeAllInvitees;	// IMP=0x001000000013a362
- (id)allInvitees;	// IMP=0x001000000013a342
- (id)referencesForInvitee:(id)arg1;	// IMP=0x001000000013a2df
- (void)removeInvitee:(id)arg1 reference:(id)arg2;	// IMP=0x0010000000139d51
- (void)addInvitee:(id)arg1 reference:(id)arg2;	// IMP=0x0010000000139bd0
- (void)performSync:(CDUnknownBlockType)arg1;	// IMP=0x0010000000139bbf
- (void)performAsync:(CDUnknownBlockType)arg1;	// IMP=0x0010000000139b26
- (id)initWithSessionToken:(id)arg1;	// IMP=0x0010000000139acc
- (id)init;	// IMP=0x00100000001399b7

@end

