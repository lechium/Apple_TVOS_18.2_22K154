//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface HAP2EncodedListPairingsResponseThread
{
    NSArray *_pairings;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000014eddd
@property(readonly, nonatomic) NSArray *pairings; // @synthesize pairings=_pairings;
- (id)initWithBTLEResponse:(id)arg1 pairings:(id)arg2;	// IMP=0x000000000014ed54

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly, nonatomic, getter=isEncrypted) _Bool encrypted;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

