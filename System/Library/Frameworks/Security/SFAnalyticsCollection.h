//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString, SECSFAVersion;
@protocol OS_dispatch_queue, SFAnalyticsCollectionAction;

__attribute__((visibility("hidden")))
@interface SFAnalyticsCollection : NSObject
{
    _Bool _excludedVersion;	// 8 = 0x8
    NSMutableDictionary *_matchingRules;	// 16 = 0x10
    NSString *_processName;	// 24 = 0x18
    NSMutableDictionary *_allowedEvents;	// 32 = 0x20
    CDUnknownBlockType _tearDownMetricsHook;	// 40 = 0x28
    id <SFAnalyticsCollectionAction> _actions;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_queue;	// 56 = 0x38
    SECSFAVersion *_selfVersion;	// 64 = 0x40
}

+ (id)parseVersion:(id)arg1 platform:(id)arg2;	// IMP=0x00600000000526b7
- (void).cxx_destruct;	// IMP=0x0000000000051b69
@property(retain) SECSFAVersion *selfVersion; // @synthesize selfVersion=_selfVersion;
@property(retain) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain) id <SFAnalyticsCollectionAction> actions; // @synthesize actions=_actions;
@property(copy) CDUnknownBlockType tearDownMetricsHook; // @synthesize tearDownMetricsHook=_tearDownMetricsHook;
@property(retain) NSMutableDictionary *allowedEvents; // @synthesize allowedEvents=_allowedEvents;
@property(retain) NSString *processName; // @synthesize processName=_processName;
@property(retain) NSMutableDictionary *matchingRules; // @synthesize matchingRules=_matchingRules;
@property _Bool excludedVersion; // @synthesize excludedVersion=_excludedVersion;
- (void)drainSetupQueue;	// IMP=0x0000000000051a24
- (unsigned int)match:(id)arg1 eventClass:(long long)arg2 attributes:(id)arg3 bucket:(unsigned int)arg4 logger:(id)arg5;	// IMP=0x00000000000517f0
- (void)storeCollection:(id)arg1 logger:(id)arg2;	// IMP=0x000000000005161b
- (void)loadCollection:(id)arg1;	// IMP=0x0000000000051492
- (void)stopMetricCollection;	// IMP=0x0000000000051421
- (void)onQueue_stopMetricCollection;	// IMP=0x0000000000051304
- (void)setupMetricsHook:(id)arg1;	// IMP=0x000000000005124c
- (id)parseCollection:(id)arg1 logger:(id)arg2;	// IMP=0x0000000000050a6b
- (_Bool)allowedVersionsWithSelf:(id)arg1;	// IMP=0x00000000000506e6
- (_Bool)matchRuleWithSelf:(id)arg1;	// IMP=0x0000000000050367
- (void)dealloc;	// IMP=0x0000000000050329
- (id)initWithActionInterface:(id)arg1 product:(id)arg2 build:(id)arg3;	// IMP=0x00000000000501d6
- (id)init;	// IMP=0x000000000005004f

@end

