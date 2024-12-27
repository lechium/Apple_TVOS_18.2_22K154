//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSString;
@protocol VNDetectorCacheDelegate;

__attribute__((visibility("hidden")))
@interface VNDetectorCache : NSObject
{
    id <VNDetectorCacheDelegate> _delegate;	// 8 = 0x8
    struct {
        unsigned int reportDidCacheDetector:1;
        unsigned int reportDidEvictDetector:1;
    } _delegateFlags;	// 16 = 0x10
    NSMutableSet *_detectors;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000002ea195
- (void)releaseDetectorsThatCanBeReplacedByDetectorOfClass:(Class)arg1 withConfiguration:(id)arg2;	// IMP=0x00000000002ea0da
- (id)loadedDetectors;	// IMP=0x00000000002ea07a
- (id)detectorOfClass:(Class)arg1 configuredWithOptions:(id)arg2 error:(id *)arg3;	// IMP=0x00000000002e9dd1
- (id)detectorOfType:(id)arg1 configuredWithOptions:(id)arg2 error:(id *)arg3;	// IMP=0x00000000002e9cfd
- (void)evictAllDetectors;	// IMP=0x00000000002e9c6a
- (void)evictDetectorsPassingTest:(CDUnknownBlockType)arg1;	// IMP=0x00000000002e9a0f
- (void)cacheDetector:(id)arg1;	// IMP=0x00000000002e9945
@property(retain) id <VNDetectorCacheDelegate> delegate;
- (id)init;	// IMP=0x00000000002e983a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

