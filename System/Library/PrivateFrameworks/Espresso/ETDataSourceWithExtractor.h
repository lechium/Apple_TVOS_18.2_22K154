//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ETImageDescriptorExtractor;
@protocol ETDataSource;

__attribute__((visibility("hidden")))
@interface ETDataSourceWithExtractor : NSObject
{
    id <ETDataSource> _source;	// 8 = 0x8
    ETImageDescriptorExtractor *_extractor;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000077b234
- (int)numberOfDataPoints;	// IMP=0x000000000077b21e
- (id)dataPointAtIndex:(int)arg1;	// IMP=0x000000000077b1ba
- (id)initWithDataSource:(id)arg1 extractor:(id)arg2;	// IMP=0x000000000077b103

@end

