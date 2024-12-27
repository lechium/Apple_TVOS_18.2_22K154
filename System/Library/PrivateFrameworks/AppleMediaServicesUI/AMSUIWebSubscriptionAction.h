//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AMSUIWebClientContext, NSString;

__attribute__((visibility("hidden")))
@interface AMSUIWebSubscriptionAction
{
    _Bool _extendedCarrierCheck;	// 8 = 0x8
    long long _cachePolicy;	// 16 = 0x10
    long long _mediaType;	// 24 = 0x18
}

@property(nonatomic) long long mediaType; // @synthesize mediaType=_mediaType;
@property(nonatomic) _Bool extendedCarrierCheck; // @synthesize extendedCarrierCheck=_extendedCarrierCheck;
@property(nonatomic) long long cachePolicy; // @synthesize cachePolicy=_cachePolicy;
- (id)runAction;	// IMP=0x00000000000b4822
- (id)initWithJSObject:(id)arg1 context:(id)arg2;	// IMP=0x00000000000b45f4

// Remaining properties
@property(readonly, nonatomic) AMSUIWebClientContext *context;
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

