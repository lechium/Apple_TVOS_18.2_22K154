//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CKRecordID, NSMutableSet;
@protocol OS_dispatch_queue;

@interface GKInviteURLManager : NSObject
{
    CKRecordID *_mostRecentInviteShareRootRecordID;	// 8 = 0x8
    NSMutableSet *_acceptingInProgressRecordIDs;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_inviteManagerQueue;	// 24 = 0x18
}

+ (id)sharedManager;	// IMP=0x00400000000bfb0a
- (void).cxx_destruct;	// IMP=0x00200000000bff3f
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *inviteManagerQueue; // @synthesize inviteManagerQueue=_inviteManagerQueue;
@property(retain, nonatomic) NSMutableSet *acceptingInProgressRecordIDs; // @synthesize acceptingInProgressRecordIDs=_acceptingInProgressRecordIDs;
@property(retain, nonatomic) CKRecordID *mostRecentInviteShareRootRecordID; // @synthesize mostRecentInviteShareRootRecordID=_mostRecentInviteShareRootRecordID;
- (_Bool)isRecordEqualToMostRecentInviteShare:(id)arg1;	// IMP=0x00100000000bfc7a
- (id)init;	// IMP=0x00100000000bfbc6

@end

