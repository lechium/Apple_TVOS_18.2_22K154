//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface PurchaseProtocolDataProvider
{
    NSString *_redirectActionParameters;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x002000000004d0fe
@property(copy) NSString *redirectActionParameters; // @synthesize redirectActionParameters=_redirectActionParameters;
- (_Bool)_runServerAuthenticationOperation:(id)arg1 error:(id *)arg2;	// IMP=0x001000000004bbd8
- (_Bool)_processBuyFailuresFromDictionary:(id)arg1 error:(id *)arg2;	// IMP=0x001000000004b4f7
- (_Bool)processDictionary:(id)arg1 error:(id *)arg2;	// IMP=0x001000000004b412
- (void)_performActionsForButton:(id)arg1 withDialog:(id)arg2;	// IMP=0x001000000004b340

@end

