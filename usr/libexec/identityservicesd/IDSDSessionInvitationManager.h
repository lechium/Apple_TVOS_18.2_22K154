//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IDSDSessionMessenger, IDSDSessionSharedState, MISSING_TYPE, NSData, NSDictionary;
@protocol IDSDSession><IDSDSessionAWDMetrics;

@interface IDSDSessionInvitationManager : NSObject
{
    unsigned char keyMaterial[60];	// 8 = 0x8
    MISSING_TYPE *_remoteAssumeRemoteDeviceEncryption;	// 68 = 0x44
    _Bool _useStunMICheck;	// 69 = 0x45
    unsigned int _seqRecvStart;	// 72 = 0x48
    unsigned int _SSRCRecv;	// 76 = 0x4c
    unsigned int _seqSendStart;	// 80 = 0x50
    unsigned int _SSRCSend;	// 84 = 0x54
    id <IDSDSession><IDSDSessionAWDMetrics> _delegate;	// 88 = 0x58
    NSDictionary *_preferences;	// 96 = 0x60
    NSData *_quickRelaySessionToken;	// 104 = 0x68
    NSData *_remoteBlob;	// 112 = 0x70
    IDSDSessionMessenger *_messenger;	// 120 = 0x78
    IDSDSessionSharedState *_sharedState;	// 128 = 0x80
}

- (void).cxx_destruct;	// IMP=0x0020000000352c7c
@property(nonatomic) _Bool useStunMICheck; // @synthesize useStunMICheck=_useStunMICheck;
@property(nonatomic) unsigned int SSRCSend; // @synthesize SSRCSend=_SSRCSend;
@property(retain, nonatomic) IDSDSessionSharedState *sharedState; // @synthesize sharedState=_sharedState;
@property(nonatomic) unsigned int seqSendStart; // @synthesize seqSendStart=_seqSendStart;
@property(nonatomic) _Bool remoteAssumeRemoteDeviceEncryption; // @synthesize remoteAssumeRemoteDeviceEncryption=_remoteAssumeRemoteDeviceEncryption;
@property(retain, nonatomic) IDSDSessionMessenger *messenger; // @synthesize messenger=_messenger;
@property(nonatomic) unsigned int SSRCRecv; // @synthesize SSRCRecv=_SSRCRecv;
@property(nonatomic) unsigned int seqRecvStart; // @synthesize seqRecvStart=_seqRecvStart;
@property(retain, nonatomic) NSData *remoteBlob; // @synthesize remoteBlob=_remoteBlob;
@property(retain, nonatomic) NSData *quickRelaySessionToken; // @synthesize quickRelaySessionToken=_quickRelaySessionToken;
@property(retain, nonatomic) NSDictionary *preferences; // @synthesize preferences=_preferences;
@property(nonatomic) __weak id <IDSDSession><IDSDSessionAWDMetrics> delegate; // @synthesize delegate=_delegate;
- (void)receivedCancelMessage:(id)arg1 fromURI:(id)arg2;	// IMP=0x00100000003524c5
- (_Bool)_isValidDestination:(id)arg1;	// IMP=0x00100000003520a4
- (void)receivedDeclineMessage:(id)arg1 fromURI:(id)arg2;	// IMP=0x0010000000351735
- (void)receivedAcceptMessage:(id)arg1 fromURI:(id)arg2;	// IMP=0x001000000034edbe
- (id)publicIdentityDataFromLocalFullIdentity;	// IMP=0x001000000034e803
- (_Bool)_isLocalDeviceSafeviewAdviserInitiatorOnLoboMacOrLaterAndRemoteDeviceIsPreTiboAnyPlatform;	// IMP=0x001000000034e7fb
- (void)declineInvitationWithData:(id)arg1 forceFromURI:(id)arg2 additionalMessageAttributes:(id)arg3;	// IMP=0x001000000034e334
- (void)declineInvitationWithData:(id)arg1;	// IMP=0x001000000034e31d
- (void)declineInvitation;	// IMP=0x001000000034e309
- (void)_sendAcceptMessageWithContext:(id)arg1 connectionData:(id)arg2;	// IMP=0x001000000034d777
- (void)acceptInvitationWithData:(id)arg1;	// IMP=0x001000000034b91c
- (void)acceptInvitation;	// IMP=0x001000000034b908
- (void)cancelInvitationWithRemoteEndedReasonOverride:(unsigned int)arg1;	// IMP=0x001000000034b8af
- (void)cancelInvitationWithData:(id)arg1;	// IMP=0x001000000034b858
- (void)cancelInvitation;	// IMP=0x001000000034b802
- (id)_acceptedDeviceToken;	// IMP=0x001000000034b4c5
- (id)_acceptedDeviceUniqueID;	// IMP=0x001000000034b039
- (void)sendCancelInvitationToDestinations:(id)arg1 remoteEndReason:(unsigned int)arg2 data:(id)arg3;	// IMP=0x001000000034aa86
- (void)_sendCancelInvitationToDestinations:(id)arg1 withData:(id)arg2;	// IMP=0x001000000034aa6f
- (void)_setLinkPreferences:(id)arg1;	// IMP=0x001000000034aa69
- (void)_sendInvitationMessageToDestinations:(id)arg1 withOptions:(id)arg2 contextData:(id)arg3 declineOnError:(_Bool)arg4 connectionData:(id)arg5;	// IMP=0x0010000000349045
- (void)_sendInvitationWithOptions:(id)arg1 data:(id)arg2 declineOnError:(_Bool)arg3;	// IMP=0x0010000000347008
- (void)sendInvitationWithData:(id)arg1 declineOnError:(_Bool)arg2;	// IMP=0x0010000000346fee
- (void)sendInvitationWithOptions:(id)arg1 declineOnError:(_Bool)arg2;	// IMP=0x0010000000346fd7
- (id)initWithDictionary:(id)arg1 sharedState:(id)arg2 messenger:(id)arg3;	// IMP=0x0010000000346e9a

@end

