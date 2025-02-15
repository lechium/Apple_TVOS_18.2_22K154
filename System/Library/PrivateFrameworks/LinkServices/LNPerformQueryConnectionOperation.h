//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class LNQueryOutput, LNQueryRequest;

__attribute__((visibility("hidden")))
@interface LNPerformQueryConnectionOperation
{
    LNQueryRequest *_queryRequest;	// 8 = 0x8
    CDUnknownBlockType _completionHandler;	// 16 = 0x10
    LNQueryOutput *_output;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000096ca0
@property(copy, nonatomic) LNQueryOutput *output; // @synthesize output=_output;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(readonly, nonatomic) LNQueryRequest *queryRequest; // @synthesize queryRequest=_queryRequest;
- (void)finishWithError:(id)arg1;	// IMP=0x0000000000096b0c
- (void)start;	// IMP=0x0000000000096a3b
- (id)initWithConnectionInterface:(id)arg1 query:(id)arg2 queue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000096796

@end

