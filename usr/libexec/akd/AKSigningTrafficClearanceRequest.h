//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AKClient, NSDate;

@interface AKSigningTrafficClearanceRequest : NSObject
{
    _Bool _shouldProvisionIfNeccessary;	// 8 = 0x8
    unsigned int _requestQosClass;	// 12 = 0xc
    AKClient *_client;	// 16 = 0x10
    NSDate *_requestDate;	// 24 = 0x18
    CDUnknownBlockType _signingBlock;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0020000000099a08
@property(nonatomic) _Bool shouldProvisionIfNeccessary; // @synthesize shouldProvisionIfNeccessary=_shouldProvisionIfNeccessary;
@property(readonly, nonatomic) CDUnknownBlockType signingBlock; // @synthesize signingBlock=_signingBlock;
@property(readonly, nonatomic) NSDate *requestDate; // @synthesize requestDate=_requestDate;
@property(readonly, nonatomic) unsigned int requestQosClass; // @synthesize requestQosClass=_requestQosClass;
@property(readonly, nonatomic) AKClient *client; // @synthesize client=_client;
- (id)description;	// IMP=0x00100000000998c8
- (id)initWithClient:(id)arg1 signingBlock:(CDUnknownBlockType)arg2;	// IMP=0x00100000000997ec

@end

