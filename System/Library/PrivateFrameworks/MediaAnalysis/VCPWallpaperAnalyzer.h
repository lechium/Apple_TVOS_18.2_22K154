//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, VCPLoaned;

@interface VCPWallpaperAnalyzer : NSObject
{
    VCPLoaned *_modelEspresso;	// 8 = 0x8
    float *_inputsData;	// 16 = 0x10
    NSString *_resConfig;	// 24 = 0x18
}

+ (id)sharedModelPool;	// IMP=0x00600000000a66e6
- (void).cxx_destruct;	// IMP=0x00000000000a6dbf
- (int)analyzeWithSceneprint:(id)arg1 results:(id *)arg2 cancel:(CDUnknownBlockType)arg3;	// IMP=0x00000000000a69da
- (int)createModel;	// IMP=0x00000000000a696e
- (id)init;	// IMP=0x00000000000a686c

@end

