//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol MTLDevice;

__attribute__((visibility("hidden")))
@interface MADImageRemoveBackgroundTask : NSObject
{
    struct atomic<bool> _canceled;	// 8 = 0x8
    NSString *_signpostPayload;	// 16 = 0x10
    id <MTLDevice> _preferredMetalDevice;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000033231d
@property(retain, nonatomic) id <MTLDevice> preferredMetalDevice; // @synthesize preferredMetalDevice=_preferredMetalDevice;
@property(readonly, nonatomic) NSString *signpostPayload; // @synthesize signpostPayload=_signpostPayload;
- (id)generateMaskWithRequestHandler:(id)arg1 regionOfInterest:(struct CGRect)arg2 error:(id *)arg3;	// IMP=0x0000000000331cb2
- (_Bool)computeRegionOfInterest:(struct CGRect *)arg1 pixelBuffer:(struct __CVBuffer *)arg2 orientation:(unsigned int)arg3 error:(id *)arg4;	// IMP=0x0000000000331c24
- (id)computeSensitivityOfPixelBuffer:(struct __CVBuffer *)arg1;	// IMP=0x00000000003317b1
- (float)resourceRequirement;	// IMP=0x00000000003317a3
- (void)cancel;	// IMP=0x0000000000331798
@property(readonly, nonatomic) _Bool canceled;
- (_Bool)autoCancellable;	// IMP=0x0000000000331785
- (id)initWithSignpostPayload:(id)arg1;	// IMP=0x0000000000331706

@end

