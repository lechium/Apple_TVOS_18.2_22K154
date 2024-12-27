//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDBiomeEventManager, NSString;
@protocol HMDBiomeLogEventObserverDataSource;

__attribute__((visibility("hidden")))
@interface HMDBiomeLogEventObserver : HMFObject
{
    HMDBiomeEventManager *_biomeEventManager;	// 8 = 0x8
    id <HMDBiomeLogEventObserverDataSource> _dataSource;	// 16 = 0x10
}

+ (id)shortDescription;	// IMP=0x0010000000143922
- (void).cxx_destruct;	// IMP=0x00000000001438f3
- (void)didReceiveEventFromDispatcher:(id)arg1;	// IMP=0x000000000014341f
- (id)initWithBiomeEventManager:(id)arg1 dataSource:(id)arg2;	// IMP=0x000000000014337d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

