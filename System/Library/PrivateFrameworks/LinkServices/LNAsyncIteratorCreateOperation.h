//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class LNAsyncIteratorOptions, LNAsyncIteratorReference, LNAsyncSequenceReference;

__attribute__((visibility("hidden")))
@interface LNAsyncIteratorCreateOperation
{
    LNAsyncSequenceReference *_sequence;	// 8 = 0x8
    LNAsyncIteratorOptions *_options;	// 16 = 0x10
    LNAsyncIteratorReference *_iteratorReference;	// 24 = 0x18
    CDUnknownBlockType _completionHandler;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000007083c
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(copy, nonatomic) LNAsyncIteratorReference *iteratorReference; // @synthesize iteratorReference=_iteratorReference;
@property(readonly, copy, nonatomic) LNAsyncIteratorOptions *options; // @synthesize options=_options;
@property(readonly, copy, nonatomic) LNAsyncSequenceReference *sequence; // @synthesize sequence=_sequence;
- (void)finishWithError:(id)arg1;	// IMP=0x0000000000070697
- (void)start;	// IMP=0x00000000000704c2
- (id)initWithConnectionInterface:(id)arg1 sequence:(id)arg2 options:(id)arg3 queue:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x0000000000070162

@end

