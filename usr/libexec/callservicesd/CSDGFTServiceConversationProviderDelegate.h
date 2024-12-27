//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;
@protocol CSDProcessObserverProtocol;

@interface CSDGFTServiceConversationProviderDelegate
{
    id <CSDProcessObserverProtocol> _processObserver;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x002000000019e254
@property(readonly, nonatomic) id <CSDProcessObserverProtocol> processObserver; // @synthesize processObserver=_processObserver;
- (_Bool)shouldHandleProvider:(id)arg1;	// IMP=0x001000000019e223
- (_Bool)shouldHandleProviderWithIdentifier:(id)arg1;	// IMP=0x001000000019e19e
- (_Bool)shouldHandleUpdateForProvider:(id)arg1;	// IMP=0x001000000019e18c
- (void)conversationManager:(id)arg1 conversationChanged:(id)arg2;	// IMP=0x001000000019d6c3
- (_Bool)isManagingCallWithUUID:(id)arg1;	// IMP=0x001000000019d536
- (void)provider:(id)arg1 performSetSendingVideoCallAction:(id)arg2;	// IMP=0x001000000019d452
- (void)provider:(id)arg1 performSetRelayingCallAction:(id)arg2;	// IMP=0x001000000019d36e
- (void)provider:(id)arg1 performEndCallAction:(id)arg2;	// IMP=0x001000000019d067
- (void)provider:(id)arg1 performJoinCallAction:(id)arg2;	// IMP=0x001000000019c633
- (_Bool)isProviderForeground:(id)arg1;	// IMP=0x001000000019c471
- (id)initWithConversationManager:(id)arg1 queue:(id)arg2 invitationResolver:(id)arg3;	// IMP=0x001000000019bfa8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

