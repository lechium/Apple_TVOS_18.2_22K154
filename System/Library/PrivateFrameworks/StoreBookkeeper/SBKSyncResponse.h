//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SBKResponse.h"

@class SBKSyncResponseData;

__attribute__((visibility("hidden")))
@interface SBKSyncResponse : SBKResponse
{
    SBKSyncResponseData *_syncResponseData;	// 8 = 0x8
}

+ (id)responseWithResponse:(id)arg1 transaction:(id)arg2;	// IMP=0x006000000001bdb5
- (void).cxx_destruct;	// IMP=0x000000000001bed3
@property(readonly, nonatomic) SBKSyncResponseData *syncResponseData; // @synthesize syncResponseData=_syncResponseData;
- (void)deserializeResponseBodyWithTransaction:(id)arg1;	// IMP=0x000000000001be29

@end

