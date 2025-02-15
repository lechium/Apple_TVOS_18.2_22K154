//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <iTunesStore/ISOperation.h>

@class NSString, SSPlayInfoRequestContext, SSPlayInfoResponse;

@interface GetPlayInfoOperation : ISOperation
{
    NSString *_clientIdentifierHeader;	// 96 = 0x60
    SSPlayInfoRequestContext *_context;	// 104 = 0x68
    SSPlayInfoResponse *_response;	// 112 = 0x70
    NSString *_userAgent;	// 120 = 0x78
}

- (void)_setResponseForOutput:(id)arg1;	// IMP=0x002000000008bbf4
- (void)_setPlayInfoResponse:(id)arg1;	// IMP=0x001000000008bb9a
- (void)_failWithError:(id)arg1;	// IMP=0x001000000008bb10
- (id)_copyRequestBody:(id *)arg1;	// IMP=0x001000000008b50e
- (void)run;	// IMP=0x001000000008af3d
@property(copy) NSString *userAgent;
@property(copy) NSString *clientIdentifierHeader;
@property(readonly) SSPlayInfoResponse *playInfoResponse;
@property(readonly) SSPlayInfoRequestContext *playInfoContext;
- (void)dealloc;	// IMP=0x001000000008ace7
- (id)initWithPlayInfoRequestContext:(id)arg1;	// IMP=0x001000000008ac89

@end

