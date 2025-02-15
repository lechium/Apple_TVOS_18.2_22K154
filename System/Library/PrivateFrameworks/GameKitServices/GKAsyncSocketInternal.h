//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableData, NSObject, NSString;
@protocol OS_dispatch_queue, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface GKAsyncSocketInternal
{
    NSObject<OS_dispatch_source> *_receiveSource;	// 8 = 0x8
    NSObject<OS_dispatch_source> *_sendSource;	// 16 = 0x10
    _Bool _sendSourceSuspended;	// 24 = 0x18
    _Bool _invalidated;	// 25 = 0x19
    int _connectionSocket;	// 28 = 0x1c
    NSMutableData *_dataToSend;	// 32 = 0x20
    CDUnknownBlockType _receiveDataHandler;	// 40 = 0x28
    CDUnknownBlockType _connectedHandler;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_syncQueue;	// 56 = 0x38
    NSObject<OS_dispatch_queue> *_targetQueue;	// 64 = 0x40
    NSString *_socketName;	// 72 = 0x48
}

- (void)setSocketName:(id)arg1;	// IMP=0x00000000000781ea
- (id)socketName;	// IMP=0x00000000000781d9
- (void)setConnectedHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000781c8
- (CDUnknownBlockType)connectedHandler;	// IMP=0x00000000000781b7
- (void)setReceiveDataHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000781a6
- (CDUnknownBlockType)receiveDataHandler;	// IMP=0x0000000000078195
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *targetQueue; // @synthesize targetQueue=_targetQueue;
- (void)sendData;	// IMP=0x00000000000778be
- (void)receiveData;	// IMP=0x00000000000770b5
- (void)closeConnectionNow;	// IMP=0x0000000000076b4d
- (void)sendData:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000076739
- (void)invalidate;	// IMP=0x0000000000076575
- (void)dealloc;	// IMP=0x00000000000763b3
- (void)tcpConnectSockAddr:(const struct sockaddr *)arg1 port:(unsigned short)arg2;	// IMP=0x0000000000075afb
- (void)tcpAttachSocketDescriptor:(int)arg1;	// IMP=0x00000000000758e5
- (_Bool)setupSourcesWithSocket:(int)arg1 receiveEventHandler:(CDUnknownBlockType)arg2 sendEventHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000007529c
- (id)init;	// IMP=0x00000000000751cf

@end

