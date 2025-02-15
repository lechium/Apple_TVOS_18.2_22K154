//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IDSDAccountController, IDSDSessionSharedState, IDSPushHandler, NSNumber;
@protocol IDSDSession><IDSDSessionAWDMetrics;

@interface IDSDSessionMessenger : NSObject
{
    unsigned char keyMaterial[60];	// 8 = 0x8
    _Bool _alwaysSkipSelf;	// 68 = 0x44
    IDSPushHandler *_pushHandler;	// 72 = 0x48
    id <IDSDSession><IDSDSessionAWDMetrics> _delegate;	// 80 = 0x50
    NSNumber *_remoteUsePhoneContinuityLocalMessage;	// 88 = 0x58
    IDSDSessionSharedState *_sharedState;	// 96 = 0x60
    IDSDAccountController *_accountController;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x002000000005b077
@property(retain, nonatomic) IDSDAccountController *accountController; // @synthesize accountController=_accountController;
@property(retain, nonatomic) IDSDSessionSharedState *sharedState; // @synthesize sharedState=_sharedState;
@property(retain, nonatomic) NSNumber *remoteUsePhoneContinuityLocalMessage; // @synthesize remoteUsePhoneContinuityLocalMessage=_remoteUsePhoneContinuityLocalMessage;
@property(nonatomic) __weak id <IDSDSession><IDSDSessionAWDMetrics> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) IDSPushHandler *pushHandler; // @synthesize pushHandler=_pushHandler;
@property(nonatomic) _Bool alwaysSkipSelf; // @synthesize alwaysSkipSelf=_alwaysSkipSelf;
- (void)sendReinitiateMessageWithSubcommand:(long long)arg1;	// IMP=0x001000000005a9e7
- (void)receivedEndMessage:(id)arg1 fromURI:(id)arg2;	// IMP=0x001000000005a626
- (void)receivedSessionMessage:(id)arg1 fromURI:(id)arg2;	// IMP=0x001000000005a292
- (_Bool)_canSendMessageLocally:(id)arg1 toDestinations:(id)arg2 withCommand:(id)arg3;	// IMP=0x001000000005a01f
- (void)_sendSinglePathMessage:(id)arg1 toDestinations:(id)arg2 withCommand:(id)arg3 forceLocalDelivery:(_Bool)arg4 messageGUID:(id)arg5 fromURI:(id)arg6 willSendBlock:(CDUnknownBlockType)arg7 completionBlock:(CDUnknownBlockType)arg8;	// IMP=0x0010000000058cdb
- (void)sendMessage:(id)arg1 toDestinations:(id)arg2 withCommand:(id)arg3 fromURI:(id)arg4 willSendBlock:(CDUnknownBlockType)arg5 completionBlock:(CDUnknownBlockType)arg6;	// IMP=0x0010000000058760
- (void)sendMessage:(id)arg1 toDestinations:(id)arg2 withCommand:(id)arg3 fromURI:(id)arg4;	// IMP=0x001000000005873e
- (void)sendMessage:(id)arg1 toDestinations:(id)arg2 withCommand:(id)arg3;	// IMP=0x0010000000058719
- (void)sendMessage:(id)arg1 withCommand:(id)arg2;	// IMP=0x001000000005866a
- (void)sendSessionMessage:(id)arg1 toDestinations:(id)arg2;	// IMP=0x001000000005823e
- (id)initWithDictionary:(id)arg1 sharedState:(id)arg2 accountController:(id)arg3;	// IMP=0x001000000005807d

@end

