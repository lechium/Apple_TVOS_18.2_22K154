//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UIWindowScene;

__attribute__((visibility("hidden")))
@interface _UISceneScreenBasedMetricsCalculator : NSObject
{
    UIWindowScene *_scene;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000004945fc
@property(nonatomic, setter=_setScene:) __weak UIWindowScene *_scene; // @synthesize _scene;
- (void)_updateMetricsOnWindows:(id)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000494205

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

