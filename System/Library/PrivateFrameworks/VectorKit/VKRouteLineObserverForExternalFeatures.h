//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class VKRouteLine;

__attribute__((visibility("hidden")))
@interface VKRouteLineObserverForExternalFeatures : NSObject
{
    void *_routeLineSupport;	// 8 = 0x8
    VKRouteLine *_routeLine;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000e91750
- (void)routeLineDidUpdateSections:(id)arg1;	// IMP=0x0000000000e91690
- (void)dealloc;	// IMP=0x0000000000e915f0
- (id)initWithRouteLineSupport:(void *)arg1 andRouteLine:(id)arg2;	// IMP=0x0000000000e91510

@end

