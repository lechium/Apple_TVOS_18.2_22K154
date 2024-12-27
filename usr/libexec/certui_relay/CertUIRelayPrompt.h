//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CPDistributedMessagingDelayedReplyContext, NSDictionary, NSString;

@interface CertUIRelayPrompt : NSObject
{
    NSDictionary *_messageInfo;	// 8 = 0x8
    CPDistributedMessagingDelayedReplyContext *_replyContext;	// 16 = 0x10
    CDUnknownBlockType _completion;	// 24 = 0x18
    NSDictionary *_handlerDict;	// 32 = 0x20
    NSString *_localizedOriginatingAppName;	// 40 = 0x28
}

+ (id)_actualCenter;	// IMP=0x004000000000233e
@property(retain, nonatomic) NSString *localizedOriginatingAppName; // @synthesize localizedOriginatingAppName=_localizedOriginatingAppName;
@property(retain, nonatomic) CPDistributedMessagingDelayedReplyContext *replyContext; // @synthesize replyContext=_replyContext;
- (void)showPromptWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000002e9c
- (void)_showAlert;	// IMP=0x0010000000002d43
- (id)_copyCancelOnlyUserNotificationInfo;	// IMP=0x0010000000002c64
- (id)_copyUserNotificationInfo;	// IMP=0x0010000000002a39
- (_Bool)showCertificateDetails;	// IMP=0x0010000000002a31
- (_Bool)showContinue;	// IMP=0x00100000000029d4
- (_Bool)allowCertificateTrust;	// IMP=0x0010000000002964
- (_Bool)isCertificateTrustRestricted;	// IMP=0x0010000000002924
- (id)_localizedUntrustedCertAcceptNotAllowedMessage;	// IMP=0x001000000000279f
- (id)_localizedUntrustedCertAlertMessage;	// IMP=0x001000000000261a
- (id)_localizedUntrustedCertAlertTitle;	// IMP=0x00100000000025d0
- (id)trustDigest;	// IMP=0x00100000000025b0
- (id)_hostname;	// IMP=0x0010000000002590
- (void)_receivedCancelOnlyResponseForNotification:(struct __CFUserNotification *)arg1 responseFlags:(unsigned long long)arg2;	// IMP=0x001000000000255d
- (void)_receivedResponseForNotification:(struct __CFUserNotification *)arg1 responseFlags:(unsigned long long)arg2;	// IMP=0x00100000000024fb
- (void)_showDetails;	// IMP=0x001000000000248b
- (void)_actualMessagingCenter:(id)arg1 receivedReply:(id)arg2 error:(id)arg3 context:(void *)arg4;	// IMP=0x0010000000002476
- (_Bool)_launchSheetApp;	// IMP=0x00100000000023d7
- (void)_invokeCompletionWithReply:(id)arg1;	// IMP=0x00100000000023a7
- (id)_replyDictionaryWithCertUIResponse:(int)arg1;	// IMP=0x0010000000002361
- (void)dealloc;	// IMP=0x00100000000022df
- (id)initWithMessageInfo:(id)arg1 localizedOriginatingAppName:(id)arg2 replyContext:(id)arg3;	// IMP=0x001000000000225f

@end

