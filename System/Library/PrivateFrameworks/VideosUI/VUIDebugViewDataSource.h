//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface VUIDebugViewDataSource : NSObject
{
    NSArray *_metricsDataSource;	// 8 = 0x8
    NSArray *_defaultsDataSource;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000bd6bb
@property(retain, nonatomic) NSArray *defaultsDataSource; // @synthesize defaultsDataSource=_defaultsDataSource;
@property(retain, nonatomic) NSArray *metricsDataSource; // @synthesize metricsDataSource=_metricsDataSource;
- (id)_createMetricsDataSource;	// IMP=0x00000000000bd3d2
- (id)_createDefaultsDataSource;	// IMP=0x00000000000bd03f
- (id)init;	// IMP=0x00000000000bcfad

@end

