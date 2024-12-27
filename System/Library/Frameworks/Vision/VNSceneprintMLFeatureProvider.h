//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSSet, NSString, VNSceneprint;
@protocol MLFeatureProvider;

__attribute__((visibility("hidden")))
@interface VNSceneprintMLFeatureProvider : NSObject
{
    VNSceneprint *_sceneprint;	// 8 = 0x8
    NSString *_sceneprintKey;	// 16 = 0x10
    long long _sceneprintDataType;	// 24 = 0x18
    id <MLFeatureProvider> _originalFeatureProvider;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000333400
- (id)featureValueForName:(id)arg1;	// IMP=0x0000000000333262
@property(readonly, nonatomic) NSSet *featureNames;
- (id)initWithSceneprint:(id)arg1 dataType:(long long)arg2 forKey:(id)arg3 originalFeatureProvider:(id)arg4;	// IMP=0x00000000003330b5

@end

