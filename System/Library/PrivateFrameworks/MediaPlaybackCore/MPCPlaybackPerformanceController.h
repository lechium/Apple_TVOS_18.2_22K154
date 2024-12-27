//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface MPCPlaybackPerformanceController : NSObject
{
    NSMutableDictionary *_trialExperiments;	// 8 = 0x8
    struct os_unfair_lock_s _lock;	// 16 = 0x10
    NSDate *_lastCDNWarming;	// 24 = 0x18
}

+ (id)sharedController;	// IMP=0x0040000000213865
- (void).cxx_destruct;	// IMP=0x00000000002136d5
@property(retain, nonatomic) NSDate *lastCDNWarming; // @synthesize lastCDNWarming=_lastCDNWarming;
- (void)loadAVAssetWithURL:(id)arg1;	// IMP=0x000000000021357e
- (void)markCDNConnectionWarmed;	// IMP=0x0000000000213518
- (void)warmCDNConnection;	// IMP=0x00000000002132ce
- (id)trialExperimentWithNamespaceName:(id)arg1;	// IMP=0x00000000002131d4
@property(readonly, copy, nonatomic) NSString *deploymentID;
@property(readonly, copy, nonatomic) NSString *treatmentID;
@property(readonly, copy, nonatomic) NSString *experimentID;
- (id)sortedExperiments;	// IMP=0x0000000000212f73
- (id)init;	// IMP=0x0000000000212e7d

@end

