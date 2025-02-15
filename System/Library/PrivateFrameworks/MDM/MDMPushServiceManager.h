//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MDMPushServiceConnection, NSMutableArray, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface MDMPushServiceManager : NSObject
{
    NSMutableArray *_observers;	// 8 = 0x8
    unsigned long long _channel;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_notificationQueue;	// 24 = 0x18
    MDMPushServiceConnection *_prodAPSConnection;	// 32 = 0x20
    MDMPushServiceConnection *_devAPSConnection;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000002878d
@property(retain, nonatomic) MDMPushServiceConnection *devAPSConnection; // @synthesize devAPSConnection=_devAPSConnection;
@property(retain, nonatomic) MDMPushServiceConnection *prodAPSConnection; // @synthesize prodAPSConnection=_prodAPSConnection;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *notificationQueue; // @synthesize notificationQueue=_notificationQueue;
@property(nonatomic) unsigned long long channel; // @synthesize channel=_channel;
@property(retain, nonatomic) NSMutableArray *observers; // @synthesize observers=_observers;
- (void)connection:(id)arg1 didReceiveMessageForTopic:(id)arg2 userInfo:(id)arg3;	// IMP=0x000000000002853f
- (void)connection:(id)arg1 didReceiveToken:(id)arg2 forTopic:(id)arg3 identifier:(id)arg4;	// IMP=0x000000000002830f
- (void)connection:(id)arg1 didReceivePublicToken:(id)arg2;	// IMP=0x0000000000028181
- (void)_notifyObserversWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000027f50
- (void)_trimEnabledPushTopicsForEnvironment:(unsigned long long)arg1 filterBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000027d58
- (void)_stopListeningForPushMessageWithTopic:(id)arg1 environment:(unsigned long long)arg2;	// IMP=0x0000000000027ca1
- (void)_startListeningForPushMessageWithTopic:(id)arg1 environment:(unsigned long long)arg2;	// IMP=0x0000000000027ae2
- (unsigned long long)_environmentForConnection:(id)arg1;	// IMP=0x0000000000027a59
- (id)_connectionForEnvironment:(unsigned long long)arg1;	// IMP=0x0000000000027a26
- (void)_stopProdConnectionForEnvironmentIfNeeded:(unsigned long long)arg1;	// IMP=0x0000000000027910
- (void)_setupConnectionForEnvironmentIfNeeded:(unsigned long long)arg1;	// IMP=0x0000000000027812
- (id)_staticTopics;	// IMP=0x0000000000027736
- (void)stopListeningForDEPPushMessage;	// IMP=0x000000000002771b
- (void)startListeningForDEPPushMessage;	// IMP=0x0000000000027700
- (void)stopListeningForAllMDMPushMessagesWithEnvironment:(unsigned long long)arg1;	// IMP=0x0000000000027645
- (void)startListeningForMDMPushMessageWithTopic:(id)arg1 environment:(unsigned long long)arg2;	// IMP=0x0000000000027633
- (void)requestAppTokenForTopic:(id)arg1 environment:(unsigned long long)arg2;	// IMP=0x0000000000027514
- (void)requestPublicTokenWithEnvironment:(unsigned long long)arg1;	// IMP=0x0000000000027383
- (void)addPushServiceObserver:(id)arg1;	// IMP=0x000000000002732f
- (void)dealloc;	// IMP=0x00000000000272d2
- (id)initWithChannel:(unsigned long long)arg1;	// IMP=0x0000000000027254

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

