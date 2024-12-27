//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "TVHKAsynchronousOperation.h"

@class NSData, NSError, NSNumber, NSString, SSAuthorizationRequest;

__attribute__((visibility("hidden")))
@interface TVHKStoreAuthorizationOperation : TVHKAsynchronousOperation
{
    NSData *_keybagData;	// 8 = 0x8
    NSError *_error;	// 16 = 0x10
    NSNumber *_accountIdentifier;	// 24 = 0x18
    NSData *_tokenData;	// 32 = 0x20
    NSString *_keybagPath;	// 40 = 0x28
    SSAuthorizationRequest *_authorizationRequest;	// 48 = 0x30
}

+ (id)new;	// IMP=0x006000000000afa5
- (void).cxx_destruct;	// IMP=0x000000000000b7ca
@property(retain, nonatomic) SSAuthorizationRequest *authorizationRequest; // @synthesize authorizationRequest=_authorizationRequest;
@property(readonly, copy, nonatomic) NSString *keybagPath; // @synthesize keybagPath=_keybagPath;
@property(readonly, copy, nonatomic) NSData *tokenData; // @synthesize tokenData=_tokenData;
@property(readonly, copy, nonatomic) NSNumber *accountIdentifier; // @synthesize accountIdentifier=_accountIdentifier;
@property(copy, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) NSData *keybagData; // @synthesize keybagData=_keybagData;
- (void)cancel;	// IMP=0x000000000000b6ad
- (void)executionDidBegin;	// IMP=0x000000000000b1d3
- (id)initWithAccountIdentifier:(id)arg1 tokenData:(id)arg2 keybagPath:(id)arg3;	// IMP=0x000000000000b043
- (id)init;	// IMP=0x000000000000afd4

@end

