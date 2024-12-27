//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol CATAssertionProviding, CATIDSServiceConnectionInvitationInboxDelegate, CATTimerSource, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface CATIDSServiceConnectionInvitationInbox : NSObject
{
    id <CATTimerSource> mTimerSource;	// 8 = 0x8
    id <CATAssertionProviding> mAssertionProvider;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *mWorkQueue;	// 24 = 0x18
    double mAcknowledgeTimeout;	// 32 = 0x20
    NSMutableDictionary *mInvitationsByInvitationID;	// 40 = 0x28
    NSMutableDictionary *mAcknowledgeTimersByInvitationID;	// 48 = 0x30
    id <CATIDSServiceConnectionInvitationInboxDelegate> _delegate;	// 56 = 0x38
}

+ (id)acknowledgeTimerIdentifier;	// IMP=0x00600000000099a8
- (void).cxx_destruct;	// IMP=0x0000000000009a29
@property(nonatomic) __weak id <CATIDSServiceConnectionInvitationInboxDelegate> delegate; // @synthesize delegate=_delegate;
- (void)acknowledgeTimerFiredWithInvitationIdentifier:(id)arg1;	// IMP=0x0000000000009830
- (void)receiveAcknowledgeForInvitationIdentifier:(id)arg1 connectionIdentifier:(id)arg2;	// IMP=0x00000000000094ea
- (void)receiveInvitationWithIdentifier:(id)arg1 senderAppleID:(id)arg2 senderAddress:(id)arg3 messagingVersion:(unsigned long long)arg4 userInfo:(id)arg5;	// IMP=0x0000000000008eed
- (id)initWithTimerSource:(id)arg1 assertionProvider:(id)arg2 workQueue:(id)arg3 acknowledgeTimeout:(double)arg4;	// IMP=0x0000000000008deb
- (void)dealloc;	// IMP=0x0000000000008c8b

@end

