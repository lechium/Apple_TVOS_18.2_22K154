//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HHAMessageService, NSMutableSet;
@protocol HHAHubAttributeRetrieverDelegate, HHATimer, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HHAHubAttributeRetriever : NSObject
{
    id <HHAHubAttributeRetrieverDelegate> _delegate;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    NSMutableSet *_attributeRequests;	// 24 = 0x18
    HHAMessageService *_messageService;	// 32 = 0x20
    id <HHATimer> _attributeRequestTimer;	// 40 = 0x28
    unsigned long long _hubAttributeRetrievalAttempts;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000001f603
@property(readonly, nonatomic) unsigned long long hubAttributeRetrievalAttempts; // @synthesize hubAttributeRetrievalAttempts=_hubAttributeRetrievalAttempts;
@property(readonly, nonatomic) id <HHATimer> attributeRequestTimer; // @synthesize attributeRequestTimer=_attributeRequestTimer;
@property(readonly, nonatomic) __weak HHAMessageService *messageService; // @synthesize messageService=_messageService;
@property(readonly, nonatomic) NSMutableSet *attributeRequests; // @synthesize attributeRequests=_attributeRequests;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) __weak id <HHAHubAttributeRetrieverDelegate> delegate; // @synthesize delegate=_delegate;
- (void)clearAllRequests;	// IMP=0x000000000001f58c
- (void)clearRequestForHub:(id)arg1;	// IMP=0x000000000001f541
- (void)requestAttributesForHubsWithIds:(id)arg1;	// IMP=0x000000000001f50f
- (void)startWithMessageService:(id)arg1;	// IMP=0x000000000001f4e4
- (id)initWithQueue:(id)arg1 timerFactory:(id)arg2;	// IMP=0x000000000001f338
- (void)_handleAttributeRequestTimerFired;	// IMP=0x000000000001f1be
- (void)_sendRequests;	// IMP=0x000000000001f04a
- (void)_retrievalComplete;	// IMP=0x000000000001efec

@end

