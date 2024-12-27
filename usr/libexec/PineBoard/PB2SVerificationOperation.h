//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <iTunesStore/ISOperation.h>

@class NSArray, NSDictionary, NSString;

@interface PB2SVerificationOperation : ISOperation
{
    unsigned long long _submitIndex;	// 96 = 0x60
    unsigned long long _sendCodeIndex;	// 104 = 0x68
    CDUnknownBlockType _codeHandler;	// 112 = 0x70
    CDUnknownBlockType _sendNewCode;	// 120 = 0x78
    NSString *_customerTitle;	// 128 = 0x80
    NSString *_customerMessage;	// 136 = 0x88
    NSArray *_devices;	// 144 = 0x90
    NSDictionary *_URLs;	// 152 = 0x98
    NSDictionary *_selectedDevice;	// 160 = 0xa0
    NSDictionary *_sendCodeLocalization;	// 168 = 0xa8
}

- (void).cxx_destruct;	// IMP=0x0020000000163013
@property(retain, nonatomic) NSDictionary *sendCodeLocalization; // @synthesize sendCodeLocalization=_sendCodeLocalization;
@property(retain, nonatomic) NSDictionary *selectedDevice; // @synthesize selectedDevice=_selectedDevice;
@property(retain, nonatomic) NSDictionary *URLs; // @synthesize URLs=_URLs;
@property(retain, nonatomic) NSArray *devices; // @synthesize devices=_devices;
@property(retain, nonatomic) NSString *customerMessage; // @synthesize customerMessage=_customerMessage;
@property(retain, nonatomic) NSString *customerTitle; // @synthesize customerTitle=_customerTitle;
@property(copy, nonatomic) CDUnknownBlockType sendNewCode; // @synthesize sendNewCode=_sendNewCode;
@property(copy, nonatomic) CDUnknownBlockType codeHandler; // @synthesize codeHandler=_codeHandler;
- (void)textEntryDidCancel:(id)arg1;	// IMP=0x0010000000162e2c
- (void)textEntry:(id)arg1 didSelectButtonAtIndex:(unsigned long long)arg2;	// IMP=0x0010000000162ca7
- (void)presentFailureAlertWithTitle:(id)arg1 message:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000001629e2
- (void)presentCodeEntryAlertWithTitle:(id)arg1 message:(id)arg2 newCodeLabel:(id)arg3 submitLabel:(id)arg4 newCodeRequestHandler:(CDUnknownBlockType)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x001000000016272a
- (void)presentDevicesAlertWithTitle:(id)arg1 message:(id)arg2 deviceList:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000016214a
- (id)_copyVerifyResponseWithCode:(id)arg1 fromDevice:(id)arg2 error:(id *)arg3;	// IMP=0x0010000000161d1e
- (id)_copySendCodeResponseForDevice:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000161a23
- (id)_copyDevicesResponseWithError:(id *)arg1;	// IMP=0x0010000000161804
- (_Bool)_verify2SVCode:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000161258
- (_Bool)_sendCodeToDevice:(id)arg1 error:(id *)arg2 showDialogs:(_Bool)arg3;	// IMP=0x0010000000160d4e
- (_Bool)_sendCodeToSelectedDevice;	// IMP=0x0010000000160ca8
- (void)_displayDeviceListWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000016037c
- (id)_copy2SVCodeFromUser;	// IMP=0x001000000016004a
- (id)_copyDeviceFromUser;	// IMP=0x001000000015fecb
- (void)run;	// IMP=0x001000000015fb24
- (void)setSerializedURLs:(id)arg1;	// IMP=0x001000000015fa74

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

