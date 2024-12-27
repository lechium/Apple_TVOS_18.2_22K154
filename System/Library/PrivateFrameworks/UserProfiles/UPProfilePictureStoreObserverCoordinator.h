//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class TVSObserverSet;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface UPProfilePictureStoreObserverCoordinator : NSObject
{
    TVSObserverSet *_observers;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_calloutQueue;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000027a16
- (void)notifyObservers;	// IMP=0x0000000000027884
- (id)observeWithUpdateHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000002779d
- (id)initWithCalloutQueue:(id)arg1;	// IMP=0x0000000000027703

@end

