//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface VUIMetricsJetEngine : NSObject
{
    MISSING_TYPE *sharedPipeline;	// 12912792 = 0xc50898
    MISSING_TYPE *recorder;	// 1485392136 = 0x58894908
    MISSING_TYPE *wrappedPipeline;	// 276584 = 0x43868
}

+ (id)convertClickDataToImpressionsData:(id)arg1 index:(long long)arg2 ignoreHosted:(_Bool)arg3;	// IMP=0x00400000005cc571
+ (id)convertClickDataToLocationData:(id)arg1 index:(long long)arg2;	// IMP=0x00400000005cbfa9
+ (id)sharedInstance;	// IMP=0x00400000005cab40
- (void).cxx_destruct;	// IMP=0x00000000005cc629
- (void)setMonitorsLifecycleEvents:(_Bool)arg1;	// IMP=0x00000000005cbac5
- (void)flushMetricsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000005cba2f
- (_Bool)isSharedContent:(id)arg1;	// IMP=0x00000000005cb93f
- (void)flushMetrics;	// IMP=0x00000000005cb912
- (id)recordEventWithTopic:(id)arg1 eventType:(id)arg2 eventData:(id)arg3 pageData:(id)arg4;	// IMP=0x00000000005cb7f1
- (id)init;	// IMP=0x00000000005cb1bf
@property(nonatomic, retain) NSObject *wrappedPipeline; // @synthesize wrappedPipeline;

@end

