//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class LNActionOutput, LNValue;

__attribute__((visibility("hidden")))
@interface LNFetchActionOutputValueOperation
{
    LNActionOutput *_actionOutput;	// 8 = 0x8
    LNValue *_value;	// 16 = 0x10
    CDUnknownBlockType _completionHandler;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000095472
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(retain, nonatomic) LNValue *value; // @synthesize value=_value;
@property(retain, nonatomic) LNActionOutput *actionOutput; // @synthesize actionOutput=_actionOutput;
- (void)finishWithError:(id)arg1;	// IMP=0x00000000000952c7
- (void)start;	// IMP=0x00000000000950d8
- (id)initWithConnectionInterface:(id)arg1 actionOutput:(id)arg2 queue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000094e33

@end

