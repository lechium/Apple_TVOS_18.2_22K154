//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CUTUnsafePromise.h"

@class CUTResult, NSMutableArray;

@interface _CUTUnsafePromise : CUTUnsafePromise
{
    _Bool _done;	// 8 = 0x8
    CUTResult *_result;	// 16 = 0x10
    NSMutableArray *_resultBlocks;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000058c4
@property(retain, nonatomic) NSMutableArray *resultBlocks; // @synthesize resultBlocks=_resultBlocks;
@property(retain, nonatomic) CUTResult *result; // @synthesize result=_result;
@property(nonatomic) _Bool done; // @synthesize done=_done;
- (void)registerResultBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000057bf
- (void)_fulfillWithResult:(id)arg1;	// IMP=0x00000000000055c9
- (id)initWithResult:(id)arg1;	// IMP=0x000000000000554f
- (id)init;	// IMP=0x00000000000054e7

@end

