//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MLE5OutputPortBinder, MLFeatureDescription, MLFeatureValue, MLPixelBufferPool, NSString;

__attribute__((visibility("hidden")))
@interface MLE5OutputPort : NSObject
{
    NSString *_name;	// 8 = 0x8
    struct e5rt_io_port *_portHandle;	// 16 = 0x10
    MLFeatureDescription *_featureDescription;	// 24 = 0x18
    MLE5OutputPortBinder *_binder;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000288bee
@property(retain) MLE5OutputPortBinder *binder; // @synthesize binder=_binder;
@property(readonly) MLFeatureDescription *featureDescription; // @synthesize featureDescription=_featureDescription;
@property(readonly) struct e5rt_io_port *portHandle; // @synthesize portHandle=_portHandle;
@property(readonly) NSString *name; // @synthesize name=_name;
- (void)reset;	// IMP=0x00000000002889f5
- (_Bool)prepareWithOptions:(id)arg1 error:(id *)arg2;	// IMP=0x00000000002888a7
- (_Bool)reusableForOutputBacking:(id)arg1 willBindDirectly:(_Bool *)arg2;	// IMP=0x0000000000288815
@property(readonly, nonatomic) _Bool boundFeatureDirectly;
@property(readonly, nonatomic) _Bool outputBackingWasDirectlyBound;
@property(retain, nonatomic) MLPixelBufferPool *pixelBufferPool;
@property(readonly) MLFeatureValue *featureValue;
@property(readonly, copy) NSString *description;
- (void)dealloc;	// IMP=0x0000000000288511
- (id)initWithPortHandle:(struct e5rt_io_port *)arg1 name:(id)arg2 featureDescription:(id)arg3;	// IMP=0x00000000002883fc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

