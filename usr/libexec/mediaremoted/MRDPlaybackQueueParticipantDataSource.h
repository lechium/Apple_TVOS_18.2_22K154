//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MSVTimer, NSArray, NSDate, NSMapTable, NSString, NSUserDefaults;
@protocol MRDPlaybackQueueParticipantDataSourceDelegate, OS_dispatch_queue;

@interface MRDPlaybackQueueParticipantDataSource : NSObject
{
    NSArray *_participants;	// 8 = 0x8
    id <MRDPlaybackQueueParticipantDataSourceDelegate> _delegate;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_queue;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_delegateQueue;	// 32 = 0x20
    NSUserDefaults *_storage;	// 40 = 0x28
    NSMapTable *_localIdentityMap;	// 48 = 0x30
    NSMapTable *_remoteIdentityMap;	// 56 = 0x38
    NSString *_pepper;	// 64 = 0x40
    NSDate *_pepperExpirationDate;	// 72 = 0x48
    MSVTimer *_pepperExpirationTimer;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x0020000000133a48
@property(retain, nonatomic) MSVTimer *pepperExpirationTimer; // @synthesize pepperExpirationTimer=_pepperExpirationTimer;
@property(retain, nonatomic) NSDate *pepperExpirationDate; // @synthesize pepperExpirationDate=_pepperExpirationDate;
@property(retain, nonatomic) NSString *pepper; // @synthesize pepper=_pepper;
@property(readonly, nonatomic) NSMapTable *remoteIdentityMap; // @synthesize remoteIdentityMap=_remoteIdentityMap;
@property(readonly, nonatomic) NSMapTable *localIdentityMap; // @synthesize localIdentityMap=_localIdentityMap;
@property(readonly, nonatomic) NSUserDefaults *storage; // @synthesize storage=_storage;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) __weak id <MRDPlaybackQueueParticipantDataSourceDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSArray *participants; // @synthesize participants=_participants;
- (void)manager:(id)arg1 didEndHostedGroupSession:(id)arg2;	// IMP=0x00100000001338c9
- (void)manager:(id)arg1 didStartHostedGroupSession:(id)arg2;	// IMP=0x00100000001337f4
- (void)handleGroupSessionServerDidStartNotification:(id)arg1;	// IMP=0x0010000000133757
- (void)handleMusicStateUpdateNotification:(id)arg1;	// IMP=0x00100000001336d0
- (void)loadLocalIdentities;	// IMP=0x001000000013344d
- (void)rotatePepper;	// IMP=0x00100000001330f5
- (void)updatePepperIfNeededWithSession:(id)arg1;	// IMP=0x0010000000132feb
- (void)loadFromStorage;	// IMP=0x0010000000132660
- (void)saveToStorage;	// IMP=0x001000000013265a
- (void)rebuildParticipants;	// IMP=0x0010000000131f87
- (id)donateAttribution:(id)arg1;	// IMP=0x0010000000131c95
- (void)dealloc;	// IMP=0x0010000000131ace
- (id)initWithDelegate:(id)arg1;	// IMP=0x00100000001316e6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

