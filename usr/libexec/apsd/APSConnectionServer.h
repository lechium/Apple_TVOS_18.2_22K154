//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class APSPayloadMessageStats, NSData, NSSet, NSString;
@protocol APSConnectionServerDelegate><APSConnectionServerTokenDelegate, APSUser, APSUserPreferences, OS_dispatch_queue, OS_xpc_object;

@interface APSConnectionServer : NSObject
{
    id <APSConnectionServerDelegate><APSConnectionServerTokenDelegate> _delegate;	// 8 = 0x8
    NSString *_environmentName;	// 16 = 0x10
    NSData *_publicToken;	// 24 = 0x18
    unsigned int _connectionMachPort;	// 32 = 0x20
    NSString *_connectionPortName;	// 40 = 0x28
    int _clientPID;	// 48 = 0x30
    NSSet *_enabledTopics;	// 56 = 0x38
    NSSet *_ignoredTopics;	// 64 = 0x40
    NSSet *_opportunisticTopics;	// 72 = 0x48
    NSSet *_nonWakingTopics;	// 80 = 0x50
    long long _publicTokenDeliveryRetries;	// 88 = 0x58
    unsigned long long _messageSize;	// 96 = 0x60
    unsigned long long _largeMessageSize;	// 104 = 0x68
    NSObject<OS_xpc_object> *_connection;	// 112 = 0x70
    NSString *_processName;	// 120 = 0x78
    double _dateCreated;	// 128 = 0x80
    APSPayloadMessageStats *_payloadMessageStats;	// 136 = 0x88
    long long _numberNotifications;	// 144 = 0x90
    double _lastNotificationTime;	// 152 = 0x98
    long long _numberNotificationsQueued;	// 160 = 0xa0
    long long _numberNotificationsDropped;	// 168 = 0xa8
    long long _numberNotificationsLost;	// 176 = 0xb0
    long long _numberNotificationsSent;	// 184 = 0xb8
    double _lastNotificationSentTime;	// 192 = 0xc0
    long long _numberNotificationsAcknowledged;	// 200 = 0xc8
    double _lastNotificationAcknowledgedTime;	// 208 = 0xd0
    NSString *_name;	// 216 = 0xd8
    _Bool _enableDarkWake;	// 224 = 0xe0
    _Bool _hasChosenDarkWakeTopics;	// 225 = 0xe1
    NSSet *_pushWakeTopics;	// 232 = 0xe8
    NSSet *_darkWakeTopics;	// 240 = 0xf0
    NSSet *_criticalWakeTopics;	// 248 = 0xf8
    NSSet *_ultraConstrainedTopics;	// 256 = 0x100
    NSObject<OS_dispatch_queue> *_queue;	// 264 = 0x108
    unsigned long long _enqueuedBlockCount;	// 272 = 0x110
    _Bool _isQueueSuspended;	// 280 = 0x118
    _Bool _enableCriticalReliability;	// 281 = 0x119
    _Bool _enableStatusChangeNotifications;	// 282 = 0x11a
    _Bool _freshMachPort;	// 283 = 0x11b
    _Bool _isPublicTokenAcknowledged;	// 284 = 0x11c
    _Bool _isClosed;	// 285 = 0x11d
    _Bool _trackActivityPresence;	// 286 = 0x11e
    _Bool _isInitialized;	// 287 = 0x11f
    struct os_unfair_lock_s _connectionLock;	// 288 = 0x120
    id <APSUser> _user;	// 296 = 0x128
    id <APSUserPreferences> _userPreferences;	// 304 = 0x130
}

+ (id)environmentForNamedPort:(id)arg1 userPreferences:(id)arg2;	// IMP=0x00200000000635e9
+ (void)serversWithEnvironmentName:(id)arg1 user:(id)arg2 userPreferences:(id)arg3 excludeServers:(id)arg4 delegate:(id)arg5 returnServers:(id)arg6;	// IMP=0x001000000005c0da
+ (id)serversWithEnvironmentName:(id)arg1 user:(id)arg2 userPreferences:(id)arg3 excludeServers:(id)arg4 delegate:(id)arg5;	// IMP=0x001000000005bf4f
+ (id)serverEnvironmentNamesForUserPreferences:(id)arg1;	// IMP=0x001000000005bc8f
- (void).cxx_destruct;	// IMP=0x00200000000665e3
@property(nonatomic) struct os_unfair_lock_s connectionLock; // @synthesize connectionLock=_connectionLock;
@property(nonatomic) _Bool isInitialized; // @synthesize isInitialized=_isInitialized;
@property(retain, nonatomic) id <APSUserPreferences> userPreferences; // @synthesize userPreferences=_userPreferences;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) _Bool isClosed; // @synthesize isClosed=_isClosed;
@property(nonatomic) long long publicTokenDeliveryRetries; // @synthesize publicTokenDeliveryRetries=_publicTokenDeliveryRetries;
@property(nonatomic) _Bool trackActivityPresence; // @synthesize trackActivityPresence=_trackActivityPresence;
@property(readonly, nonatomic) _Bool enableDarkWake; // @synthesize enableDarkWake=_enableDarkWake;
@property(retain, nonatomic) NSString *processName; // @synthesize processName=_processName;
@property(readonly, retain, nonatomic) NSSet *nonWakingTopics; // @synthesize nonWakingTopics=_nonWakingTopics;
@property(retain, nonatomic) id <APSUser> user; // @synthesize user=_user;
@property(retain, nonatomic) NSSet *ultraConstrainedTopics; // @synthesize ultraConstrainedTopics=_ultraConstrainedTopics;
@property(retain, nonatomic) NSSet *pushWakeTopics; // @synthesize pushWakeTopics=_pushWakeTopics;
@property(readonly, retain, nonatomic) NSString *environmentName; // @synthesize environmentName=_environmentName;
@property(nonatomic) _Bool enableStatusChangeNotifications; // @synthesize enableStatusChangeNotifications=_enableStatusChangeNotifications;
// Error: Property attributes should begin with the type ('T') attribute, property name: enableCriticalReliability
// Property attributes: (null)

@property(nonatomic) unsigned long long largeMessageSize; // @synthesize largeMessageSize=_largeMessageSize;
@property(nonatomic) unsigned long long messageSize; // @synthesize messageSize=_messageSize;
@property(readonly, copy, nonatomic) NSData *publicToken; // @synthesize publicToken=_publicToken;
@property(readonly, retain, nonatomic) NSSet *opportunisticTopics; // @synthesize opportunisticTopics=_opportunisticTopics;
@property(readonly, retain, nonatomic) NSSet *ignoredTopics; // @synthesize ignoredTopics=_ignoredTopics;
@property(readonly, retain, nonatomic) NSSet *enabledTopics; // @synthesize enabledTopics=_enabledTopics;
@property(nonatomic) __weak id <APSConnectionServerDelegate><APSConnectionServerTokenDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, copy) NSString *description;
- (void)appendPrettyStatusToStatusPrinter:(id)arg1 forTopics:(id)arg2 type:(id)arg3;	// IMP=0x0010000000065c67
- (void)appendPrettyStatusToStatusPrinter:(id)arg1;	// IMP=0x001000000006489c
- (id)JSONDebugState;	// IMP=0x0010000000064419
- (void)handleNotificationAcknowledged;	// IMP=0x00100000000643e5
- (id)entitledTopicsFromSet:(id)arg1 unentitledTopics:(id *)arg2;	// IMP=0x00100000000643cf
- (void)setKeepAliveConfiguration:(unsigned long long)arg1;	// IMP=0x001000000006437e
- (void)_savePersistentConnection;	// IMP=0x0010000000063057
- (void)_savePersistentConnectionTopics;	// IMP=0x0010000000063045
@property(readonly, nonatomic) _Bool isConnected; // @dynamic isConnected;
- (void)saveAndUpdateDelegate;	// IMP=0x0010000000062e68
- (void)setEnabledTopics:(id)arg1 ignoredTopics:(id)arg2 opportunisticTopics:(id)arg3 nonWakingTopics:(id)arg4;	// IMP=0x00100000000621ca
- (_Bool)_containsInvalidTopic:(id)arg1;	// IMP=0x001000000006207c
- (void)_informTopicManagerOfChangedFilter:(long long)arg1 newTopics:(id)arg2 oldTopics:(id)arg3;	// IMP=0x0010000000061c3b
- (void)_warnIfOverlappingTopics:(id)arg1 againstTopics:(id)arg2 string:(id)arg3;	// IMP=0x00100000000619be
- (void)handleChannelSubscriptionFailures:(id)arg1 forTopic:(id)arg2;	// IMP=0x00100000000617d2
- (void)acknowledgeDidReceivePublicToken:(id)arg1;	// IMP=0x0010000000061229
@property(nonatomic) _Bool isPublicTokenAcknowledged;
- (void)_redeliverCurrentPublicToken;	// IMP=0x0010000000061093
- (void)handlePublicTokenDeliveryReply:(id)arg1;	// IMP=0x0010000000060da9
@property(readonly, nonatomic) double publicTokenDeliveryDelay;
- (void)setPublicToken:(id)arg1 needsAck:(_Bool)arg2;	// IMP=0x0010000000060af7
- (void)handleAckIncomingMessageWithGuid:(id)arg1 topic:(id)arg2 tracingUUID:(id)arg3;	// IMP=0x0010000000060a5f
- (void)handleIncomingMessageReceiptWithTopic:(id)arg1 tracingUUID:(id)arg2;	// IMP=0x00100000000609e1
- (void)handleUnsubscribeFromChannels:(id)arg1 forTopic:(id)arg2;	// IMP=0x0010000000060963
- (void)handleSubscribeToChannels:(id)arg1 forTopic:(id)arg2;	// IMP=0x00100000000608e5
- (void)_handleInvalidateTokenForInfo:(id)arg1;	// IMP=0x0010000000060879
- (void)handleInvalidatePerAppTokenForInfo:(id)arg1;	// IMP=0x00100000000607a0
- (void)handleInvalidateURLTokenForTopic:(id)arg1;	// IMP=0x001000000006069a
- (void)handleInvalidatePerAppTokenForTopic:(id)arg1 identifier:(id)arg2;	// IMP=0x0010000000060608
- (void)handleInvalidateTokenForInfo:(id)arg1;	// IMP=0x00100000000605f6
- (void)_sendClientToken:(id)arg1 forInfo:(id)arg2;	// IMP=0x0010000000060155
- (void)handleCurrentURLTokenForInfo:(id)arg1;	// IMP=0x00100000000600f9
- (void)handleCurrentTokenForInfo:(id)arg1;	// IMP=0x001000000006009d
- (void)handleReceivedTokenError:(id)arg1 forInfo:(id)arg2;	// IMP=0x001000000005feb9
- (void)handleReceivedToken:(id)arg1 forInfo:(id)arg2;	// IMP=0x001000000005fd94
- (void)_handleRequestTokenForInfo:(id)arg1;	// IMP=0x001000000005fd28
- (void)handleRequestURLTokenForInfo:(id)arg1;	// IMP=0x001000000005fc4f
- (void)handleRequestTokenForInfo:(id)arg1;	// IMP=0x001000000005fb76
- (void)handleRequestPerAppTokenForTopic:(id)arg1 identifier:(id)arg2;	// IMP=0x001000000005fae4
- (void)handleFakeMessage:(id)arg1;	// IMP=0x001000000005fa88
- (void)handleCancelOutgoingMessageWithID:(unsigned long long)arg1;	// IMP=0x001000000005fa43
- (void)handleSendOutgoingMessage:(id)arg1;	// IMP=0x001000000005f976
- (void)handleResult:(id)arg1 forSendingOutgoingMessageWithID:(unsigned long long)arg2 sendRTT:(unsigned long long)arg3 ackTimestamp:(unsigned long long)arg4;	// IMP=0x001000000005f7c8
- (void)handleResult:(id)arg1 forSendingOutgoingMessageWithID:(unsigned long long)arg2;	// IMP=0x001000000005f7b0
- (void)handleResult:(id)arg1 forSendingOutgoingMessage:(id)arg2;	// IMP=0x001000000005f706
- (void)handleReceivedMessage:(id)arg1;	// IMP=0x001000000005f486
- (void)_initiateConnectionIfNecessary;	// IMP=0x001000000005eda5
- (void)handleConnectionStatusChanged:(_Bool)arg1;	// IMP=0x001000000005ecde
- (id)connectionPortName;	// IMP=0x001000000005ecd0
- (void)connectionInvalidated;	// IMP=0x001000000005ec81
- (void)_suspendQueue;	// IMP=0x001000000005ec50
- (void)_resumeQueue;	// IMP=0x001000000005ec1f
- (void)connectionHandshakeDidComplete;	// IMP=0x001000000005ebad
@property(retain, nonatomic) NSObject<OS_xpc_object> *connection;
- (void)_migratePersistentTopicsIfNeeded;	// IMP=0x001000000005e5bd
- (id)aps_prettyDescription;	// IMP=0x001000000005dc8f
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

- (id);	// IMP=0x001000000005daa4
- (void)close;	// IMP=0x001000000005d9dd
- (void)_lookUpMachPort;	// IMP=0x001000000005d87c
- (void)dealloc;	// IMP=0x001000000005d80d
- (id)initWithDelegate:(id)arg1 user:(id)arg2 userPreferences:(id)arg3 enableDarkWake:(_Bool)arg4 environmentName:(id)arg5 connectionPortName:(id)arg6 processName:(id)arg7 connection:(id)arg8;	// IMP=0x001000000005d39d
- (void)_enqueueXPCMessage:(CDUnknownBlockType)arg1 wakingClient:(_Bool)arg2 highPriority:(_Bool)arg3 shouldBoostPriority:(_Bool)arg4 withReply:(CDUnknownBlockType)arg5;	// IMP=0x001000000005cc62
- (void)_enqueueXPCMessage:(CDUnknownBlockType)arg1 wakingClient:(_Bool)arg2 highPriority:(_Bool)arg3 withReply:(CDUnknownBlockType)arg4;	// IMP=0x001000000005cc40
- (void)_enqueueXPCMessage:(CDUnknownBlockType)arg1 wakingClient:(_Bool)arg2 highPriority:(_Bool)arg3;	// IMP=0x001000000005cc2b

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

