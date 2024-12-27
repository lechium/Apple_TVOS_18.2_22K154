//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MLModelConfiguration, NSMutableSet;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface MLE5ExecutionStreamPool : NSObject
{
    MLModelConfiguration *_modelConfiguration;	// 8 = 0x8
    NSMutableSet *_pool;	// 16 = 0x10
    NSMutableSet *_allStreams;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_serialQueue;	// 32 = 0x20
    unsigned long long _modelSignpostId;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000015a02a
@property(readonly, nonatomic) unsigned long long modelSignpostId; // @synthesize modelSignpostId=_modelSignpostId;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // @synthesize serialQueue=_serialQueue;
@property(readonly, nonatomic) NSMutableSet *allStreams; // @synthesize allStreams=_allStreams;
@property(readonly, nonatomic) NSMutableSet *pool; // @synthesize pool=_pool;
@property(readonly, copy, nonatomic) MLModelConfiguration *modelConfiguration; // @synthesize modelConfiguration=_modelConfiguration;
- (void)enableInstrumentsTracing;	// IMP=0x0000000000159f87
- (void)_emitMappingTracepointForStream:(id)arg1;	// IMP=0x0000000000159f18
- (void)putBack:(id)arg1;	// IMP=0x0000000000159d5d
- (id)takeOut;	// IMP=0x0000000000159c3f
- (id)initWithModelConfiguration:(id)arg1 modelSignpostId:(unsigned long long)arg2;	// IMP=0x0000000000159b2a

@end

