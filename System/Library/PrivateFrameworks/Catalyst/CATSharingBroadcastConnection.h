//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CATOperationQueue, CATSharingDevice, NSError, NSString;
@protocol CATSharingBroadcastPrimitives, CATSharingConnectionDelegate, CATTimer, CATTimerSource;

__attribute__((visibility("hidden")))
@interface CATSharingBroadcastConnection : NSObject
{
    id <CATSharingBroadcastPrimitives> mBroadcastPrimitives;	// 8 = 0x8
    _Bool mIsClosing;	// 16 = 0x10
    id <CATTimerSource> mTimerSource;	// 24 = 0x18
    id <CATTimer> mTombstoneTimer;	// 32 = 0x20
    CATOperationQueue *mOutgoingQueue;	// 40 = 0x28
    CATOperationQueue *mCatalystQueue;	// 48 = 0x30
    _Bool _closed;	// 56 = 0x38
    id <CATSharingConnectionDelegate> _delegate;	// 64 = 0x40
    NSError *_closedError;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x000000000000fc69
@property(retain, nonatomic) NSError *closedError; // @synthesize closedError=_closedError;
@property(nonatomic, getter=isClosed) _Bool closed; // @synthesize closed=_closed;
@property(nonatomic) __weak id <CATSharingConnectionDelegate> delegate; // @synthesize delegate=_delegate;
- (void)sendTearDownMessageWithError:(id)arg1;	// IMP=0x000000000000f98a
- (void)handleSentMessage:(id)arg1;	// IMP=0x000000000000f88d
- (void)handleCloseMessage:(id)arg1;	// IMP=0x000000000000f7af
- (void)handleUnparsableMessageDictionary:(id)arg1;	// IMP=0x000000000000f6d9
- (void)messageReceived:(id)arg1;	// IMP=0x000000000000f56a
- (void)removeBroadcastPrimitiveHandlers;	// IMP=0x000000000000f512
- (void)addBroadcastPrimitiveHandlers;	// IMP=0x000000000000f22d
- (void)tombstoneWithError:(id)arg1;	// IMP=0x000000000000f141
- (void)closeWithError:(id)arg1 reportToRemote:(_Bool)arg2;	// IMP=0x000000000000f0ae
- (void)sendMessage:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000000ee18
- (void)_close;	// IMP=0x000000000000edb3
- (void)_sendData:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000000ec97
- (void)close;	// IMP=0x000000000000eb62
- (void)sendData:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000000e992
@property(readonly, nonatomic) CATSharingDevice *remoteDevice;
- (id)initWithBroadcastPrimitives:(id)arg1 timerSource:(id)arg2;	// IMP=0x000000000000e870

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

