//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSLock, NSString;

@interface IHKBilateralHarmonizer : NSObject
{
    struct unique_ptr<ik::EspressoNet, std::default_delete<ik::EspressoNet>> _net;	// 8 = 0x8
    struct PixelBufferTensor _fgInput;	// 16 = 0x10
    struct PixelBufferTensor _bgInput;	// 72 = 0x48
    NSString *_fgName;	// 128 = 0x80
    NSString *_bgName;	// 136 = 0x88
    NSString *_outName;	// 144 = 0x90
    NSString *_gatingOutName;	// 152 = 0x98
    float _gatingThreshold;	// 160 = 0xa0
    float _baseHarmonizationStrength;	// 164 = 0xa4
    NSLock *_lock;	// 168 = 0xa8
    unsigned char _supportsAlpha;	// 176 = 0xb0
    NSString *_networkPath;	// 184 = 0xb8
}

+ (id)getDefault;	// IMP=0x006000000001af70
- (id).cxx_construct;	// IMP=0x000000000001c4b0
- (void).cxx_destruct;	// IMP=0x000000000001c380
@property(readonly) unsigned char supportsAlpha; // @synthesize supportsAlpha=_supportsAlpha;
@property(readonly) NSString *networkPath; // @synthesize networkPath=_networkPath;
- (id)harmonize:(id)arg1;	// IMP=0x000000000001b940
- (struct CGImage *)handleRequest:(id)arg1;	// IMP=0x000000000001b810
- (void)load;	// IMP=0x000000000001b500
- (id)initWithNetwork:(id)arg1 supportsAlpha:(unsigned char)arg2 fgName:(id)arg3 bgName:(id)arg4 outName:(id)arg5 gatingOutName:(id)arg6 gatingThreshold:(float)arg7 inputResolution:(unsigned long long)arg8 baseHarmonizationStrength:(float)arg9;	// IMP=0x000000000001b100
- (id)initWithNetwork:(id)arg1 supportsAlpha:(unsigned char)arg2 fgName:(id)arg3 bgName:(id)arg4 outName:(id)arg5 gatingOutName:(id)arg6 gatingThreshold:(float)arg7 inputResolution:(unsigned long long)arg8;	// IMP=0x000000000001b0d0
- (id)initWithNetwork:(id)arg1 supportsAlpha:(unsigned char)arg2 fgName:(id)arg3 bgName:(id)arg4 outName:(id)arg5 inputResolution:(unsigned long long)arg6;	// IMP=0x000000000001b0a0

@end

