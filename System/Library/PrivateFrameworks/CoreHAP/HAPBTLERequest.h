//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HAPBTLEControlOutputStream, HAPBTLETransactionIdentifier, HAPCharacteristic, HAPService, HMFBlockOperation, HMFTimer, NSData;

__attribute__((visibility("hidden")))
@interface HAPBTLERequest : HMFObject
{
    unsigned char _type;	// 8 = 0x8
    _Bool _encrypted;	// 9 = 0x9
    _Bool _finished;	// 10 = 0xa
    HAPBTLETransactionIdentifier *_identifier;	// 16 = 0x10
    HAPService *_service;	// 24 = 0x18
    HAPCharacteristic *_characteristic;	// 32 = 0x20
    NSData *_body;	// 40 = 0x28
    double _timeoutInterval;	// 48 = 0x30
    HMFBlockOperation *_operation;	// 56 = 0x38
    HAPBTLEControlOutputStream *_controlOutputStream;	// 64 = 0x40
    HMFTimer *_responseTimer;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x0000000000139d92
@property(retain, nonatomic) HMFTimer *responseTimer; // @synthesize responseTimer=_responseTimer;
@property(retain, nonatomic) HAPBTLEControlOutputStream *controlOutputStream; // @synthesize controlOutputStream=_controlOutputStream;
@property(nonatomic) __weak HMFBlockOperation *operation; // @synthesize operation=_operation;
@property(readonly, nonatomic) double timeoutInterval; // @synthesize timeoutInterval=_timeoutInterval;
@property(readonly, copy, nonatomic) NSData *body; // @synthesize body=_body;
@property(readonly, nonatomic, getter=isFinished) _Bool finished; // @synthesize finished=_finished;
@property(readonly, nonatomic, getter=isEncrypted) _Bool encrypted; // @synthesize encrypted=_encrypted;
@property(readonly, nonatomic) HAPCharacteristic *characteristic; // @synthesize characteristic=_characteristic;
@property(readonly, nonatomic) HAPService *service; // @synthesize service=_service;
@property(readonly, nonatomic) unsigned char type; // @synthesize type=_type;
@property(readonly, nonatomic) HAPBTLETransactionIdentifier *identifier; // @synthesize identifier=_identifier;
- (id)_serializeHeader;	// IMP=0x0000000000139a00
- (id)serialize;	// IMP=0x00000000001398f0
- (void)cancelWithError:(id)arg1;	// IMP=0x0000000000139841
- (id)description;	// IMP=0x000000000013982d
- (id)debugDescription;	// IMP=0x0000000000139816
- (id)descriptionWithPointer:(_Bool)arg1;	// IMP=0x000000000013962e
- (id)shortDescription;	// IMP=0x000000000013961c
- (id)initWithRequestType:(unsigned char)arg1 bodyData:(id)arg2 shouldEncrypt:(_Bool)arg3 timeoutInterval:(double)arg4;	// IMP=0x00000000001395fd
- (id)initWithCharacteristic:(id)arg1 requestType:(unsigned char)arg2 bodyData:(id)arg3 shouldEncrypt:(_Bool)arg4 timeoutInterval:(double)arg5;	// IMP=0x00000000001394a9
- (id)_initWithCharacteristic:(id)arg1 requestType:(unsigned char)arg2 bodyData:(id)arg3 shouldEncrypt:(_Bool)arg4 timeoutInterval:(double)arg5;	// IMP=0x000000000013912c
- (id)init;	// IMP=0x0000000000139084

@end

