//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface CSDRelayCallDataSource
{
}

+ (Class)callClass;	// IMP=0x004000000020d97b
- (void)handleSendingAudioChanged:(id)arg1;	// IMP=0x004000000020faee
- (void)handleMutedChanged:(id)arg1;	// IMP=0x001000000020f8b4
- (void)handleRemoteMeterLevelChanged:(id)arg1;	// IMP=0x001000000020f774
- (void)handleLocalMeterLevelChanged:(id)arg1;	// IMP=0x001000000020f634
- (void)handleRemoteFrequencyChanged:(id)arg1;	// IMP=0x001000000020f507
- (void)handleLocalFrequencyChanged:(id)arg1;	// IMP=0x001000000020f3da
- (void)disconnectCalls:(id)arg1 whileHoldingCalls:(id)arg2 andUnholdingCalls:(id)arg3 andUngroupingCalls:(id)arg4;	// IMP=0x001000000020ee7a
- (void)disconnectAllCalls:(id)arg1 withReason:(int)arg2;	// IMP=0x001000000020ec4a
- (void)disconnectCall:(id)arg1 whileUngroupingCall:(id)arg2;	// IMP=0x001000000020eb5d
- (void)ungroupCall:(id)arg1 fromOtherCallsInGroup:(id)arg2;	// IMP=0x001000000020e94f
- (void)groupCalls:(id)arg1 withCalls:(id)arg2;	// IMP=0x001000000020e667
- (void)answerCall:(id)arg1 withRequest:(id)arg2 whileHoldingActiveCalls:(id)arg3;	// IMP=0x001000000020e39a
- (void)answerCall:(id)arg1 withRequest:(id)arg2 whileDisconnectingHeldCalls:(id)arg3 andHoldingCalls:(id)arg4;	// IMP=0x001000000020e0ac
- (void)answerCall:(id)arg1 withRequest:(id)arg2 whileDisconnectingActiveCalls:(id)arg3;	// IMP=0x001000000020db57
- (void)holdCalls:(id)arg1 whileUnholdingCalls:(id)arg2;	// IMP=0x001000000020d98c
- (void)dealloc;	// IMP=0x001000000020d906
- (id)initWithCallStateController:(id)arg1 queue:(id)arg2;	// IMP=0x001000000020d6b1

@end

