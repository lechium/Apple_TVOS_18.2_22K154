//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AKClient, NSString;

@interface AKPrivateEmailServiceController
{
    AKClient *_client;	// 8 = 0x8
    NSString *_altDSID;	// 16 = 0x10
    _Bool _isSecondCall;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x002000000007bc96
@property(nonatomic) _Bool isSecondCall; // @synthesize isSecondCall=_isSecondCall;
- (id)_constructRequestProviderForClient:(id)arg1 altDSID:(id)arg2;	// IMP=0x001000000007bb94
- (void)executeFetchHmeListRequestWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000007b6e6
- (id)initWithClient:(id)arg1 altDSID:(id)arg2;	// IMP=0x001000000007b5f3

@end

