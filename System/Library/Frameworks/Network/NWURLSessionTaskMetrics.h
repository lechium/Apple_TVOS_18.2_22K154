//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CFNetwork/NSURLSessionTaskMetrics.h>

@class NSArray, NSDateInterval, NSObject;
@protocol OS_nw_protocol_metadata;

__attribute__((visibility("hidden")))
@interface NWURLSessionTaskMetrics : NSURLSessionTaskMetrics
{
    NSObject<OS_nw_protocol_metadata> *_clientMetadata;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000513fb0
@property(readonly, nonatomic) unsigned long long redirectCount;
@property(readonly, copy, nonatomic) NSDateInterval *taskInterval;
@property(readonly, copy, nonatomic) NSArray *transactionMetrics;
- (_Bool)isKindOfClass:(Class)arg1;	// IMP=0x0000000000512f30

@end

