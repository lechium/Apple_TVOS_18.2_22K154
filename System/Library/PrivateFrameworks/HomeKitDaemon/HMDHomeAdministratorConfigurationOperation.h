//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFOperation.h>

@class HMDHome, HMFMessage, HMFMessageDispatcher, NSString;

__attribute__((visibility("hidden")))
@interface HMDHomeAdministratorConfigurationOperation : HMFOperation
{
    _Bool _shouldSuspendSyncing;	// 8 = 0x8
    CDUnknownBlockType _sendCompletionBlock;	// 16 = 0x10
    CDUnknownBlockType _responseHandler;	// 24 = 0x18
    HMFMessage *_message;	// 32 = 0x20
    HMDHome *_home;	// 40 = 0x28
    HMFMessageDispatcher *_dispatcher;	// 48 = 0x30
}

+ (id)logCategory;	// IMP=0x0010000000998800
+ (double)timeout;	// IMP=0x0010000000998722
- (void).cxx_destruct;	// IMP=0x000000000099854a
@property(readonly) HMFMessageDispatcher *dispatcher; // @synthesize dispatcher=_dispatcher;
@property(readonly) __weak HMDHome *home; // @synthesize home=_home;
@property(readonly) HMFMessage *message; // @synthesize message=_message;
@property(copy) CDUnknownBlockType responseHandler; // @synthesize responseHandler=_responseHandler;
@property(copy) CDUnknownBlockType sendCompletionBlock; // @synthesize sendCompletionBlock=_sendCompletionBlock;
@property _Bool shouldSuspendSyncing; // @synthesize shouldSuspendSyncing=_shouldSuspendSyncing;
- (id)logIdentifier;	// IMP=0x000000000099841b
- (void)main;	// IMP=0x0000000000998227
- (id)initWithMessage:(id)arg1 home:(id)arg2 dispatcher:(id)arg3;	// IMP=0x00000000009980ad

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

