//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSSet;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AMSEngagementObserverInfo : NSObject
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 8 = 0x8
    NSMutableSet *_underlyingPlacements;	// 16 = 0x10
    NSMutableSet *_underlyingServiceTypes;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000398738
@property(retain, nonatomic) NSMutableSet *underlyingServiceTypes; // @synthesize underlyingServiceTypes=_underlyingServiceTypes;
@property(retain, nonatomic) NSMutableSet *underlyingPlacements; // @synthesize underlyingPlacements=_underlyingPlacements;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
- (void)removeServiceType:(id)arg1;	// IMP=0x000000000039867e
- (void)addServiceType:(id)arg1;	// IMP=0x0000000000398615
- (void)removePlacement:(id)arg1;	// IMP=0x00000000003985ac
- (void)addPlacements:(id)arg1;	// IMP=0x0000000000398543
@property(readonly, nonatomic) NSSet *serviceTypes;
@property(readonly, nonatomic) NSSet *placements;
- (id)initWithQueue:(id)arg1;	// IMP=0x00000000003983a6

@end

