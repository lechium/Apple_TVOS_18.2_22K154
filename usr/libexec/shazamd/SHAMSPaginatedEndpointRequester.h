//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, SHAMSEndpointRequester;

@interface SHAMSPaginatedEndpointRequester : NSObject
{
    SHAMSEndpointRequester *_endpointRequester;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0020000000050a77
@property(retain, nonatomic) SHAMSEndpointRequester *endpointRequester; // @synthesize endpointRequester=_endpointRequester;
- (void)invalidate;	// IMP=0x0010000000050a1f
- (void)performRequests:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000050452
- (id)initWithClientIdentifier:(id)arg1 clientType:(long long)arg2;	// IMP=0x00100000000503c6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

