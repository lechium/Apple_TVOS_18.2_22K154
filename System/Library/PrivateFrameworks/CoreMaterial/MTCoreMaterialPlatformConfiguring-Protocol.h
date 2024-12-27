//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreMaterial/NSObject-Protocol.h>

@class NSString, NSURL;

@protocol MTCoreMaterialPlatformConfiguring <NSObject>
@property(readonly, copy, nonatomic) NSURL *overrideRecipeBundleURL;

@optional
@property(readonly, nonatomic, getter=isDitherOptimizationSupported) _Bool ditherOptimizationSupported;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,R,N,GisDitherOptimizationSupported

@property(readonly, copy, nonatomic) NSString *blurEdgesOptimization;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C,N

@end

