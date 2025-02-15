//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MLFeatureDescription, MLFeatureValue, MLPixelBufferPool, NSString;

__attribute__((visibility("hidden")))
@interface MLE5InputPortBinder : NSObject
{
    struct __CVBuffer *_temporarilyBoundPixelBuffer;	// 8 = 0x8
    unsigned char _bindingMode;	// 16 = 0x10
    MLPixelBufferPool *_pixelBufferPool;	// 24 = 0x18
    struct e5rt_io_port *_portHandle;	// 32 = 0x20
    MLFeatureDescription *_featureDescription;	// 40 = 0x28
    MLFeatureValue *_directlyBoundFeatureValue;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000000fa128
@property(retain, nonatomic) MLFeatureValue *directlyBoundFeatureValue; // @synthesize directlyBoundFeatureValue=_directlyBoundFeatureValue;
@property(readonly) MLFeatureDescription *featureDescription; // @synthesize featureDescription=_featureDescription;
@property(readonly) struct e5rt_io_port *portHandle; // @synthesize portHandle=_portHandle;
@property(nonatomic) unsigned char bindingMode; // @synthesize bindingMode=_bindingMode;
@property(retain, nonatomic) MLPixelBufferPool *pixelBufferPool; // @synthesize pixelBufferPool=_pixelBufferPool;
- (void)reset;	// IMP=0x00000000000fa07f
- (_Bool)copyFeatureValue:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000f9ef1
- (_Bool)bindMemoryObjectForFeatureValue:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000f9c9e
- (_Bool)reusableForFeatureValue:(id)arg1 willBindDirectly:(_Bool *)arg2;	// IMP=0x00000000000f9918
- (_Bool)_reusableForFeatureValue:(id)arg1 directMode:(unsigned char)arg2;	// IMP=0x00000000000f95a4
- (void)dealloc;	// IMP=0x00000000000f952d
- (id)initWithPort:(struct e5rt_io_port *)arg1 featureDescription:(id)arg2;	// IMP=0x00000000000f949c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

