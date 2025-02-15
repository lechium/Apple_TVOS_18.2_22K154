//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class LNConfigurableQueryRequest, LNQueryOutput;

__attribute__((visibility("hidden")))
@interface LNPerformConfigurableQueryConnectionOperation
{
    LNConfigurableQueryRequest *_queryRequest;	// 8 = 0x8
    CDUnknownBlockType _completionHandler;	// 16 = 0x10
    LNQueryOutput *_output;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000e2c41
@property(copy, nonatomic) LNQueryOutput *output; // @synthesize output=_output;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(readonly, nonatomic) LNConfigurableQueryRequest *queryRequest; // @synthesize queryRequest=_queryRequest;
- (void)finishWithError:(id)arg1;	// IMP=0x00000000000e2aad
- (void)start;	// IMP=0x00000000000e29dc
- (id)initWithConnectionInterface:(id)arg1 query:(id)arg2 queue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000000e2737

@end

