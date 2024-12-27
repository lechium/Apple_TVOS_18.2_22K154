//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, VNInstanceMaskObservation;

__attribute__((visibility("hidden")))
@interface MADRemoveBackgroundCachedMaskState : NSObject
{
    NSString *_identifier;	// 8 = 0x8
    VNInstanceMaskObservation *_instanceMaskObservation;	// 16 = 0x10
    struct CGRect _regionOfInterest;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000038f279
@property(readonly, nonatomic) struct CGRect regionOfInterest; // @synthesize regionOfInterest=_regionOfInterest;
@property(readonly, nonatomic) VNInstanceMaskObservation *instanceMaskObservation; // @synthesize instanceMaskObservation=_instanceMaskObservation;
- (_Bool)matchesImageAsset:(id)arg1;	// IMP=0x000000000038f202
- (id)initWithImageAsset:(id)arg1 instanceMaskObservation:(id)arg2 regionOfInterest:(struct CGRect)arg3;	// IMP=0x000000000038f136

@end

