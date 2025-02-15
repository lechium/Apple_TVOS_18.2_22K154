//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CHManager, CSDIncomingCallFilter, NSMutableArray, NSMutableDictionary, NSString, TUCallProviderManager, TUFeatureFlags;
@protocol CSDCallCenterObserver, CSDTransactionManager, CSDUserNotificationDelegate, OS_dispatch_queue;

@interface CSDRecentsController : NSObject
{
    CSDIncomingCallFilter *_incomingCallFilter;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    id <CSDCallCenterObserver> _callCenterObserver;	// 24 = 0x18
    id <CSDTransactionManager> _transactionManager;	// 32 = 0x20
    CHManager *_recentsManager;	// 40 = 0x28
    TUCallProviderManager *_callProviderManager;	// 48 = 0x30
    id <CSDUserNotificationDelegate> _delegate;	// 56 = 0x38
    TUFeatureFlags *_featureFlags;	// 64 = 0x40
    NSMutableArray *_transactionObjectsAwaitingCallHistory;	// 72 = 0x48
    NSMutableDictionary *_cachedCalls;	// 80 = 0x50
    NSMutableDictionary *_cachedCallUUIDsToConversationAVMode;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x002000000015365e
@property(readonly, nonatomic) NSMutableDictionary *cachedCallUUIDsToConversationAVMode; // @synthesize cachedCallUUIDsToConversationAVMode=_cachedCallUUIDsToConversationAVMode;
@property(readonly, nonatomic) NSMutableDictionary *cachedCalls; // @synthesize cachedCalls=_cachedCalls;
@property(readonly, nonatomic) NSMutableArray *transactionObjectsAwaitingCallHistory; // @synthesize transactionObjectsAwaitingCallHistory=_transactionObjectsAwaitingCallHistory;
@property(readonly, nonatomic) TUFeatureFlags *featureFlags; // @synthesize featureFlags=_featureFlags;
@property(readonly, nonatomic) __weak id <CSDUserNotificationDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) TUCallProviderManager *callProviderManager; // @synthesize callProviderManager=_callProviderManager;
@property(readonly, nonatomic) CHManager *recentsManager; // @synthesize recentsManager=_recentsManager;
@property(readonly, nonatomic) id <CSDTransactionManager> transactionManager; // @synthesize transactionManager=_transactionManager;
@property(readonly, nonatomic) id <CSDCallCenterObserver> callCenterObserver; // @synthesize callCenterObserver=_callCenterObserver;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) CSDIncomingCallFilter *incomingCallFilter; // @synthesize incomingCallFilter=_incomingCallFilter;
- (void)callCenterObserver:(id)arg1 callChanged:(id)arg2;	// IMP=0x0010000000153121
- (void)providersChangedForProviderManager:(id)arg1;	// IMP=0x0010000000152c1f
- (void)_endTransactionForObjectAfterCallHistoryDatabaseChanges:(id)arg1;	// IMP=0x0010000000152937
- (id)_callHistoryTransactionObjectWithIdentifier:(id)arg1;	// IMP=0x00100000001528ca
- (_Bool)_canAddCallToCallHistory:(id)arg1;	// IMP=0x00100000001527ea
- (id)_conversationProviderForCall:(id)arg1;	// IMP=0x0010000000152703
- (void)_handleCallHistoryChanged;	// IMP=0x00100000001524fa
- (void)_addPendingCallToCallHistory:(id)arg1;	// IMP=0x00100000001523bb
- (void)_addCallToCallHistory:(id)arg1;	// IMP=0x00100000001521c1
- (void)reportRecentCallForConversation:(id)arg1 withStartDate:(id)arg2 avMode:(unsigned long long)arg3;	// IMP=0x0010000000151fd5
- (void)updateBytesOfDataUsed:(long long)arg1 forCallWithUniqueProxyIdentifier:(id)arg2 callHistoryIdentifier:(id)arg3;	// IMP=0x0010000000151d27
- (void)clearNotificationsIfNecessary;	// IMP=0x0010000000151c00
- (void)_callHistoryChanged:(id)arg1;	// IMP=0x0010000000151aa5
- (void)dealloc;	// IMP=0x0010000000151a30
- (id)initWithCallCenterObserver:(id)arg1 transactionManager:(id)arg2 queue:(id)arg3 chManager:(id)arg4;	// IMP=0x001000000015174b
- (id)initWithQueue:(id)arg1 chManager:(id)arg2;	// IMP=0x0010000000151695
- (id)init;	// IMP=0x001000000015166a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

