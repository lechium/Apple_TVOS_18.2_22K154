//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSString;
@protocol OS_dispatch_queue, TPPublicKey;

__attribute__((visibility("hidden")))
@interface TPTypedSignedData : NSObject
{
    _Bool _lastSigValidationResult;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    NSData *_sig;	// 24 = 0x18
    NSString *_sigTypeName;	// 32 = 0x20
    id <TPPublicKey> _lastSigValidationPubkey;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_sigValidationQueue;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000001d379
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *sigValidationQueue; // @synthesize sigValidationQueue=_sigValidationQueue;
@property(nonatomic) _Bool lastSigValidationResult; // @synthesize lastSigValidationResult=_lastSigValidationResult;
@property(retain, nonatomic) id <TPPublicKey> lastSigValidationPubkey; // @synthesize lastSigValidationPubkey=_lastSigValidationPubkey;
@property(readonly, nonatomic) NSString *sigTypeName; // @synthesize sigTypeName=_sigTypeName;
@property(readonly, nonatomic) NSData *sig; // @synthesize sig=_sig;
@property(readonly, nonatomic) NSData *data; // @synthesize data=_data;
- (_Bool)checkSignatureWithKey:(id)arg1;	// IMP=0x000000000001d0ab
- (id)initWithData:(id)arg1 sig:(id)arg2 signatureTypeName:(id)arg3;	// IMP=0x000000000001d093
- (id)initWithData:(id)arg1 key:(id)arg2 signatureTypeName:(id)arg3 error:(id *)arg4;	// IMP=0x000000000001cf9a
- (id)initWithData:(id)arg1 sig:(id)arg2 pubkey:(id)arg3 sigTypeName:(id)arg4;	// IMP=0x000000000001ce0d

@end

