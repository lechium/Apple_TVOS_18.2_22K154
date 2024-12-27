//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "HAP2LoggingObject.h"

@class HAPBTLEResponse, NSString;

__attribute__((visibility("hidden")))
@interface HAP2EncodedResponseThread : HAP2LoggingObject
{
    HAPBTLEResponse *_btleResponse;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000016b0bf
@property(readonly, nonatomic) HAPBTLEResponse *btleResponse; // @synthesize btleResponse=_btleResponse;
@property(readonly, nonatomic, getter=isEncrypted) _Bool encrypted;
- (id)initWithBTLEResponse:(id)arg1;	// IMP=0x000000000016affc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

