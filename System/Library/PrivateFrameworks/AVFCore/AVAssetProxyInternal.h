//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVAssetInspectorLoader, AVDispatchOnce, NSArray;

__attribute__((visibility("hidden")))
@interface AVAssetProxyInternal : NSObject
{
    AVAssetInspectorLoader *loader;	// 8 = 0x8
    NSArray *tracks;	// 16 = 0x10
    AVDispatchOnce *makeTracksArrayOnce;	// 24 = 0x18
}

@end

