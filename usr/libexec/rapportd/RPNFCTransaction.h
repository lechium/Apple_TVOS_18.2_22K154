//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSError, NSString, NSUUID, RPIdentity, RPNearFieldTapEvent, RPTransportServiceHandoverMessage;
@protocol RPNFCTransactionDelegate;

@interface RPNFCTransaction : NSObject
{
    _Bool _connected;	// 8 = 0x8
    id <RPNFCTransactionDelegate> _delegate;	// 16 = 0x10
    NSUUID *_identifier;	// 24 = 0x18
    NSDate *_connectionDate;	// 32 = 0x20
    long long _state;	// 40 = 0x28
    RPNearFieldTapEvent *_tapEvent;	// 48 = 0x30
    RPIdentity *_remoteIdentity;	// 56 = 0x38
    NSError *_error;	// 64 = 0x40
    long long _role;	// 72 = 0x48
    RPTransportServiceHandoverMessage *_localAuthenticationMessage;	// 80 = 0x50
    RPTransportServiceHandoverMessage *_localValidationMessage;	// 88 = 0x58
    RPTransportServiceHandoverMessage *_remoteAuthenticationMessage;	// 96 = 0x60
    RPTransportServiceHandoverMessage *_remoteValidationMessage;	// 104 = 0x68
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0020000000001ab0
- (void).cxx_destruct;	// IMP=0x00200000000029ca
@property(retain, nonatomic) RPTransportServiceHandoverMessage *remoteValidationMessage; // @synthesize remoteValidationMessage=_remoteValidationMessage;
@property(retain, nonatomic) RPTransportServiceHandoverMessage *remoteAuthenticationMessage; // @synthesize remoteAuthenticationMessage=_remoteAuthenticationMessage;
@property(retain, nonatomic) RPTransportServiceHandoverMessage *localValidationMessage; // @synthesize localValidationMessage=_localValidationMessage;
@property(retain, nonatomic) RPTransportServiceHandoverMessage *localAuthenticationMessage; // @synthesize localAuthenticationMessage=_localAuthenticationMessage;
@property(nonatomic, getter=isConnected) _Bool connected; // @synthesize connected=_connected;
@property(readonly, nonatomic) long long role; // @synthesize role=_role;
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) RPIdentity *remoteIdentity; // @synthesize remoteIdentity=_remoteIdentity;
@property(retain, nonatomic) RPNearFieldTapEvent *tapEvent; // @synthesize tapEvent=_tapEvent;
@property(readonly, nonatomic) long long state; // @synthesize state=_state;
@property(readonly, nonatomic) NSDate *connectionDate; // @synthesize connectionDate=_connectionDate;
@property(readonly, copy, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) __weak id <RPNFCTransactionDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) _Bool isInitiator;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0010000000002504
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000002386
- (void)setState:(long long)arg1;	// IMP=0x001000000000217e
- (void)setError:(id)arg1;	// IMP=0x0010000000001b65
- (id)initWithRole:(long long)arg1;	// IMP=0x0010000000001ab8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

