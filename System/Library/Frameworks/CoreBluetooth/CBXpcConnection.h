//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol CBXpcConnectionDelegate, OS_dispatch_queue, OS_xpc_object;

__attribute__((visibility("hidden")))
@interface CBXpcConnection : NSObject
{
    NSObject<OS_dispatch_queue> *_eventQueue;	// 8 = 0x8
    NSMutableDictionary *_options;	// 16 = 0x10
    int _sessionType;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_xpcQueue;	// 32 = 0x20
    NSObject<OS_xpc_object> *_xpcConnection;	// 40 = 0x28
    _Bool _uiAppIsBackgrounded;	// 48 = 0x30
    _Bool _xpcConnectionConnected;	// 49 = 0x31
    CDUnknownBlockType _whbReplyHandler;	// 56 = 0x38
    NSMutableDictionary *_whbRemoteToLocalUuidMap;	// 64 = 0x40
    id <CBXpcConnectionDelegate> _delegate;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x0000000000062960
@property(nonatomic) __weak id <CBXpcConnectionDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_applicationWillEnterForegroundNotification;	// IMP=0x0000000000062910
- (void)_applicationDidEnterBackgroundNotification;	// IMP=0x00000000000628f0
- (void)_handleConnectionEvent:(id)arg1;	// IMP=0x0000000000062790
- (void)_handleFinalized;	// IMP=0x0000000000062720
- (void)_handleInvalid;	// IMP=0x0000000000062630
- (void)_handleReset;	// IMP=0x0000000000062530
- (void)_handleMsg:(id)arg1;	// IMP=0x0000000000062260
- (id)_allocXpcMsg:(unsigned short)arg1 args:(id)arg2;	// IMP=0x00000000000621a0
- (id)_nameForMessage:(unsigned short)arg1;	// IMP=0x0000000000062140
- (void)_sendBarrier;	// IMP=0x0000000000062050
- (void)_checkOut;	// IMP=0x0000000000062030
- (void)_checkIn;	// IMP=0x0000000000061e90
- (void)setTargetQueue:(id)arg1;	// IMP=0x0000000000061e40
- (void)disconnect;	// IMP=0x0000000000061dc0
- (void)connect;	// IMP=0x0000000000061d70
- (void)removeWhbRemoteId:(id)arg1;	// IMP=0x0000000000061c90
- (id)getWhbLocalIdForRemoteId:(id)arg1;	// IMP=0x0000000000061c70
- (void)setWhbLocalId:(id)arg1 forRemoteId:(id)arg2;	// IMP=0x0000000000061b40
- (void)setWhbReplyHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000061650
- (void)didReceiveForwardedDelegateCallbackMessage:(id)arg1;	// IMP=0x0000000000061320
- (void)didReceiveForwardedMessage:(id)arg1;	// IMP=0x0000000000060ed0
- (void)forwardWhbMsg:(unsigned short)arg1 args:(id)arg2 cnx:(id)arg3;	// IMP=0x0000000000060a00
- (void)sendMsgWithReply:(unsigned short)arg1 args:(id)arg2 replyBlock:(CDUnknownBlockType)arg3;	// IMP=0x00000000000607a0
- (id)sendSyncMsg:(unsigned short)arg1 args:(id)arg2;	// IMP=0x00000000000602a0
- (void)sendMsg:(unsigned short)arg1 args:(id)arg2;	// IMP=0x0000000000060130
- (id)getEventQueue;	// IMP=0x0000000000060120
- (id)initWithDelegate:(id)arg1 queue:(id)arg2 options:(id)arg3 sessionType:(int)arg4;	// IMP=0x000000000005fc80

@end

