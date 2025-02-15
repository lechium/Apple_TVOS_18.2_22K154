//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AKPiggybackRequestingController, NSMutableDictionary, NSOperationQueue, NSString;
@protocol OS_dispatch_queue;

@interface AKPiggybackController : NSObject
{
    NSMutableDictionary *_acceptingControllers;	// 8 = 0x8
    NSMutableDictionary *_pendingReplies;	// 16 = 0x10
    AKPiggybackRequestingController *_requestingController;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_piggybackingRequestQueue;	// 32 = 0x20
    NSOperationQueue *_circleRequestProcessingQueue;	// 40 = 0x28
    _Bool _requiresHSA2Repair;	// 48 = 0x30
}

+ (void)tearDown;	// IMP=0x00200000000cab57
+ (id)sharedController;	// IMP=0x00100000000ca9e3
- (void).cxx_destruct;	// IMP=0x00200000000ce9a8
- (double)_processingTimeOut;	// IMP=0x00100000000ce99a
- (void)_processUIIfNeededForError:(id)arg1 circleStep:(unsigned long long)arg2;	// IMP=0x00100000000ce84a
- (id)performCircleRequestWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000cc589
- (id)serviceControllerForContext:(id)arg1;	// IMP=0x00100000000cc507
- (void)startRequestSessionWithController:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000cc3b3
- (void)_removeAcceptingControllerForTransaction:(id)arg1;	// IMP=0x00100000000cc2ff
- (id)_acceptingControllerForTransactionId:(id)arg1;	// IMP=0x00100000000cc0e6
- (_Bool)_processPendingCompletionsForPayload:(id)arg1;	// IMP=0x00100000000cbe6f
- (_Bool)_hasPrimaryiCloudAccountForPayload:(id)arg1;	// IMP=0x00100000000cbdd6
- (void)_displaySwitchWiFiAlert;	// IMP=0x00100000000cb9d8
- (void)_processPiggybackPayload:(id)arg1;	// IMP=0x00100000000cb233
- (void)processPushMessage:(id)arg1;	// IMP=0x00100000000caec1
- (_Bool)shouldSuppressPushMessage:(id)arg1;	// IMP=0x00100000000cac1d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

