//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface VCTestMonitorManager : NSObject
{
    _Bool _toneInjectionEnabled;	// 8 = 0x8
    _Bool _forceNetworkCellular;	// 9 = 0x9
    _Bool _enableLoopbackInterface;	// 10 = 0xa
    _Bool _enableAudioPowerSpectrumReport;	// 11 = 0xb
    double _emulatedRxPLR;	// 16 = 0x10
    int _forcedTargetBitrate;	// 24 = 0x18
    int _forcedCapBitrate;	// 28 = 0x1c
    NSString *_emulatedNetworkConfigPath;	// 32 = 0x20
    NSNumber *_initialMemoryUsage;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_xpcCommandQueue;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_xpcCallbackQueue;	// 56 = 0x38
    _Bool _enableOneToOneMode;	// 64 = 0x40
}

+ (id)sharedManager;	// IMP=0x00600000004760aa
@property(nonatomic) _Bool enableOneToOneMode; // @synthesize enableOneToOneMode=_enableOneToOneMode;
@property(nonatomic) _Bool enableAudioPowerSpectrumReport; // @synthesize enableAudioPowerSpectrumReport=_enableAudioPowerSpectrumReport;
@property(retain, nonatomic) NSString *emulatedNetworkConfigPath; // @synthesize emulatedNetworkConfigPath=_emulatedNetworkConfigPath;
@property(nonatomic) int forcedCapBitrate; // @synthesize forcedCapBitrate=_forcedCapBitrate;
@property(nonatomic) int forcedTargetBitrate; // @synthesize forcedTargetBitrate=_forcedTargetBitrate;
@property(nonatomic) double emulatedRxPLR; // @synthesize emulatedRxPLR=_emulatedRxPLR;
@property(nonatomic) _Bool enableLoopbackInterface; // @synthesize enableLoopbackInterface=_enableLoopbackInterface;
@property _Bool forceNetworkCellular; // @synthesize forceNetworkCellular=_forceNetworkCellular;
@property _Bool toneInjectionEnabled; // @synthesize toneInjectionEnabled=_toneInjectionEnabled;
- (void)registerBlocksForService;	// IMP=0x0000000000476423
- (void)reportSessionMediaDaemonStats:(id)arg1;	// IMP=0x00000000004760f9
- (void)dealloc;	// IMP=0x000000000047603a
- (id)init;	// IMP=0x0000000000475f98

@end

