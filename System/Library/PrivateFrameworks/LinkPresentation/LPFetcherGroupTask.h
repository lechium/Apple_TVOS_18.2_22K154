//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class LPFetcher, LPFetcherResponse;

__attribute__((visibility("hidden")))
@interface LPFetcherGroupTask : NSObject
{
    _Bool _hasStarted;	// 8 = 0x8
    LPFetcher *_fetcher;	// 16 = 0x10
    LPFetcherResponse *_response;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000a1190
@property(nonatomic) _Bool hasStarted; // @synthesize hasStarted=_hasStarted;
@property(retain, nonatomic) LPFetcherResponse *response; // @synthesize response=_response;
@property(retain, nonatomic) LPFetcher *fetcher; // @synthesize fetcher=_fetcher;

@end

