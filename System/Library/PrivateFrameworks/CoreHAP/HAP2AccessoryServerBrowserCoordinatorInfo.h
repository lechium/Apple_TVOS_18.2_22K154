//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSError;
@protocol HAP2AccessoryServerCoordinatorPrivate;

__attribute__((visibility("hidden")))
@interface HAP2AccessoryServerBrowserCoordinatorInfo : NSObject
{
    id <HAP2AccessoryServerCoordinatorPrivate> _coordinator;	// 8 = 0x8
    NSError *_error;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000f61cf
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, nonatomic) id <HAP2AccessoryServerCoordinatorPrivate> coordinator; // @synthesize coordinator=_coordinator;
- (id)initWithCoordinator:(id)arg1;	// IMP=0x00000000000f613f

@end

