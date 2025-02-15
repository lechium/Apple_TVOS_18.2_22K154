//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <iTunesStore/ISOperation.h>

@class NSArray, NSNumber, NSString, SSURLConnectionResponse;

@interface SyncRentalOperation : ISOperation
{
    NSArray *_sinfs;	// 96 = 0x60
    NSNumber *_accountIdentifier;	// 104 = 0x68
    NSNumber *_rentalKeyIdentifier;	// 112 = 0x70
    NSString *_clientIdentifierHeader;	// 120 = 0x78
    NSString *_userAgent;	// 128 = 0x80
    SSURLConnectionResponse *_URLResponse;	// 136 = 0x88
}

- (void).cxx_destruct;	// IMP=0x0020000000030ae1
@property(readonly) SSURLConnectionResponse *URLResponse; // @synthesize URLResponse=_URLResponse;
@property(copy) NSString *userAgent; // @synthesize userAgent=_userAgent;
@property(copy) NSString *clientIdentifierHeader; // @synthesize clientIdentifierHeader=_clientIdentifierHeader;
@property(readonly) NSNumber *rentalKeyIdentifier; // @synthesize rentalKeyIdentifier=_rentalKeyIdentifier;
@property(readonly) NSNumber *accountIdentifier; // @synthesize accountIdentifier=_accountIdentifier;
@property(readonly) NSArray *sinfs; // @synthesize sinfs=_sinfs;
- (void)_run;	// IMP=0x00100000000304f8
- (_Bool)_handleResponse:(id)arg1 error:(id *)arg2;	// IMP=0x001000000002fce6
- (id)_bodyData;	// IMP=0x001000000002f5e6
- (void)run;	// IMP=0x001000000002f599
- (id)initWithAccountIdentifier:(id)arg1;	// IMP=0x001000000002f49d
- (id)initWithAccountIdentifier:(id)arg1 rentalKeyIdentifier:(id)arg2;	// IMP=0x001000000002f48b
- (id)initWithSinfs:(id)arg1;	// IMP=0x001000000002f321

@end

