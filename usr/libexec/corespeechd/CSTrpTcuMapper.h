//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CSAttSiriCachedEndpointInfo, CSEndpointerProxy, NSMutableArray, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface CSTrpTcuMapper : NSObject
{
    CSEndpointerProxy *_proxy;	// 8 = 0x8
    NSMutableArray *_hardEndpointerCache;	// 16 = 0x10
    CSAttSiriCachedEndpointInfo *_relaxedEndpointerCache;	// 24 = 0x18
    NSMutableDictionary *_trpIdToRCMap;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_queue;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x002000000007adf9
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSMutableDictionary *trpIdToRCMap; // @synthesize trpIdToRCMap=_trpIdToRCMap;
@property(retain, nonatomic) CSAttSiriCachedEndpointInfo *relaxedEndpointerCache; // @synthesize relaxedEndpointerCache=_relaxedEndpointerCache;
@property(retain, nonatomic) NSMutableArray *hardEndpointerCache; // @synthesize hardEndpointerCache=_hardEndpointerCache;
@property(nonatomic, setter=registerEndpointerProxy:) __weak CSEndpointerProxy *proxy; // @synthesize proxy=_proxy;
- (void)_resetEndpointCaches;	// IMP=0x001000000007acb3
- (void)_cacheRelaxedEndPointerMetric:(double)arg1 withMetrics:(id)arg2;	// IMP=0x001000000007aba1
- (void)_cacheHardEndPointerMetric:(double)arg1 withMetrics:(id)arg2;	// IMP=0x001000000007aa83
- (id)processTRPWithId:(id)arg1 withSpeechPackage:(id)arg2 enforceTrpSelection:(_Bool)arg3;	// IMP=0x001000000007a1e2
- (id)getMatchingRelaxedEPMetricsForTrp:(id)arg1;	// IMP=0x001000000007a043
- (void)processTCUFinalizedForTrpId:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000079cb3
- (id)getSelectedTrpIdForEndpointEvent:(double)arg1 withMetrics:(id)arg2 OfType:(long long)arg3;	// IMP=0x0010000000079807
- (void)resetForNewRequest;	// IMP=0x00100000000797f5
- (id)initWithQueue:(id)arg1;	// IMP=0x0010000000079693

@end

