//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CloudPhotoLibrary/NSObject-Protocol.h>

@class CPLNetworkState, CPLNetworkWatcher;

@protocol CPLNetworkWatcherDelegate <NSObject>
- (void)watcher:(CPLNetworkWatcher *)arg1 stateDidChangeToNetworkState:(CPLNetworkState *)arg2;
@end

