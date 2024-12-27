//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CATOperation.h"

@class CATIDSMessageOptions, NSArray, NSObject, NSString;
@protocol CATIDSPrimitives, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface CATSendSerialIDSMessagesOperation : CATOperation
{
    id <CATIDSPrimitives> mPrimitives;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *mWorkQueue;	// 16 = 0x10
    NSArray *mMessages;	// 24 = 0x18
    NSString *mDestinationAddress;	// 32 = 0x20
    NSString *mSourceAppleID;	// 40 = 0x28
    CATIDSMessageOptions *mOptions;	// 48 = 0x30
    struct os_unfair_lock_s mLock;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000000002300e
- (void)didSendMessagesWithError:(id)arg1;	// IMP=0x0000000000022fe7
- (void)sendMessages;	// IMP=0x0000000000022b09
- (void)main;	// IMP=0x0000000000022af7
- (_Bool)isAsynchronous;	// IMP=0x0000000000022aef
- (id)initWithIDSPrimitives:(id)arg1 workQueue:(id)arg2 messages:(id)arg3 destinationAddress:(id)arg4 sourceAppleID:(id)arg5 options:(id)arg6;	// IMP=0x000000000002295f

@end

