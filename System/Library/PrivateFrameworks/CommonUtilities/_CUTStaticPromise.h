//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CUTPromise.h"

@class CUTResult;

@interface _CUTStaticPromise : CUTPromise
{
    CUTResult *_result;	// 8 = 0x8
    _Bool _safe;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000000749c
@property(retain, nonatomic) CUTResult *result; // @synthesize result=_result;
- (id)then:(CDUnknownBlockType)arg1;	// IMP=0x000000000000743b
- (void)registerResultBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000007422
- (id)initWithResult:(id)arg1 safe:(_Bool)arg2;	// IMP=0x00000000000073a3

@end

