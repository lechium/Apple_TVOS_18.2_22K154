//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface CSDThumperPushHandler : NSObject
{
    _Bool _thumperCallingAllowedOnDefaultPairedDeviceDefault;	// 8 = 0x8
}

@property(nonatomic) _Bool thumperCallingAllowedOnDefaultPairedDeviceDefault; // @synthesize thumperCallingAllowedOnDefaultPairedDeviceDefault=_thumperCallingAllowedOnDefaultPairedDeviceDefault;
- (void)updateUINotification;	// IMP=0x00100000000b4bd5
- (void)displayPinRequestFailure;	// IMP=0x00100000000b498e
- (void)displayIncomingPinCode:(id)arg1 fromID:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000b438a
- (void)pinCodeEnteredSuccessfully:(_Bool)arg1 cancelled:(_Bool)arg2 onPrimaryDevice:(id)arg3;	// IMP=0x00100000000b4223
- (void)resetOneTimeMessage;	// IMP=0x00100000000b421d
- (void)displayServiceConfirmationWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000b3e16
- (void)displayPinMessageForDevice:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000b385c
- (void)unenrollDevice:(id)arg1;	// IMP=0x00100000000b37f6
- (void)enrollDevice:(id)arg1 forSenderIdentityUUID:(id)arg2;	// IMP=0x00100000000b364a
- (id)serviceDescription;	// IMP=0x00100000000b35c9
- (struct __CFString *)ctServiceType;	// IMP=0x00100000000b35b9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

