//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE;

@interface AKApplicationMetadataRequestProvider
{
    MISSING_TYPE *clientID;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x004000000010d110
- (id)init;	// IMP=0x001000000010d090
- (id)initWithContext:(id)arg1 url:(id)arg2;	// IMP=0x001000000010cfc0
- (id)initWithContext:(id)arg1 urlBagKey:(id)arg2 shouldCacheResource:(_Bool)arg3 accountManager:(id)arg4;	// IMP=0x001000000010cf50
- (id)initWithContext:(id)arg1 urlBagKey:(id)arg2 shouldCacheResource:(_Bool)arg3;	// IMP=0x001000000010cee0
- (id)initWithContext:(id)arg1 urlBagKey:(id)arg2;	// IMP=0x001000000010ce80
- (id)initWithUrlBagKey:(id)arg1;	// IMP=0x001000000010ce30
- (_Bool)validateResponseData:(id)arg1 error:(id *)arg2;	// IMP=0x001000000010cd60
- (_Bool)signRequest:(id)arg1 error:(id *)arg2;	// IMP=0x001000000010ca10
- (unsigned long long)requestBodyType;	// IMP=0x001000000010c8a0
- (unsigned long long)expectedResponseType;	// IMP=0x001000000010c890

@end

