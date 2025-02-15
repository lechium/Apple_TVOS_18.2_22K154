//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MPProtocolProxy, NSMapTable;
@protocol MPCQueueControllerPublisher;

__attribute__((visibility("hidden")))
@interface _MPCQueueControllerRegistry : NSObject
{
    MPProtocolProxy<MPCQueueControllerPublisher> *_publisherProxy;	// 8 = 0x8
    NSMapTable *_transportableExtensions;	// 16 = 0x10
}

+ (id)shared;	// IMP=0x0040000000290150
- (void).cxx_destruct;	// IMP=0x0000000000290128
@property(readonly, copy, nonatomic) NSMapTable *transportableExtensions; // @synthesize transportableExtensions=_transportableExtensions;
@property(readonly, nonatomic) MPProtocolProxy<MPCQueueControllerPublisher> *publisherProxy; // @synthesize publisherProxy=_publisherProxy;
- (id)init;	// IMP=0x000000000028fefa

@end

