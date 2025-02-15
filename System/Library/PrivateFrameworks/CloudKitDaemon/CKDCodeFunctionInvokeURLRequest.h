//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CKDURLRequest.h"

@class CKDTrustedTargetWrappedKey, NSArray, NSData, NSString;

@interface CKDCodeFunctionInvokeURLRequest : CKDURLRequest
{
    CDUnknownBlockType _serializedResultsCallback;	// 8 = 0x8
    NSString *_serviceName;	// 16 = 0x10
    NSString *_functionName;	// 24 = 0x18
    NSData *_serializedParameters;	// 32 = 0x20
    NSData *_attestationEntropy;	// 40 = 0x28
    NSArray *_pccWrappedInvocationKeys;	// 48 = 0x30
    CKDTrustedTargetWrappedKey *_trustedTargetWrappedInvocationKey;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000000001da6bc
@property(copy, nonatomic) CKDTrustedTargetWrappedKey *trustedTargetWrappedInvocationKey; // @synthesize trustedTargetWrappedInvocationKey=_trustedTargetWrappedInvocationKey;
@property(copy, nonatomic) NSArray *pccWrappedInvocationKeys; // @synthesize pccWrappedInvocationKeys=_pccWrappedInvocationKeys;
@property(retain, nonatomic) NSData *attestationEntropy; // @synthesize attestationEntropy=_attestationEntropy;
@property(retain, nonatomic) NSData *serializedParameters; // @synthesize serializedParameters=_serializedParameters;
@property(copy, nonatomic) NSString *functionName; // @synthesize functionName=_functionName;
@property(copy, nonatomic) NSString *serviceName; // @synthesize serviceName=_serviceName;
@property(copy, nonatomic) CDUnknownBlockType serializedResultsCallback; // @synthesize serializedResultsCallback=_serializedResultsCallback;
- (void)requestDidParseNodeFailure:(id)arg1;	// IMP=0x00000000001da51f
- (id)requestDidParseProtobufObject:(id)arg1;	// IMP=0x00000000001da1cc
- (id)generateRequestOperations;	// IMP=0x00000000001d9cda
- (_Bool)requestGETPreAuth;	// IMP=0x00000000001d9c8f
- (id)requestOperationClasses;	// IMP=0x00000000001d9c23
- (long long)databaseScope;	// IMP=0x00000000001d9b83
- (id)additionalHeaderValues;	// IMP=0x00000000001d9a84
- (_Bool)allowsAnonymousAccount;	// IMP=0x00000000001d9a6a
- (void)fillOutEquivalencyPropertiesBuilder:(id)arg1;	// IMP=0x00000000001d9996
- (id)initWithOperation:(id)arg1 serviceName:(id)arg2 functionName:(id)arg3 serializedParameters:(id)arg4 attestationEntropy:(id)arg5 pccWrappedInvocationKeys:(id)arg6 trustedTargetWrappedInvocationKey:(id)arg7;	// IMP=0x00000000001d984e

@end

