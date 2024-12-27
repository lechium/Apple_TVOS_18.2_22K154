//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AVKit/NSObject-Protocol.h>

@class AVPlayerItem, AVPlayerViewController;

@protocol AVScanningDelegate <NSObject>

@optional
- (_Bool)playerViewController:(AVPlayerViewController *)arg1 shouldHandleScanningForPlayerItem:(AVPlayerItem *)arg2;
- (void)stopScanningPlayerViewController:(AVPlayerViewController *)arg1;
- (long long)playerViewController:(AVPlayerViewController *)arg1 scanFromElapsedTime:(CDStruct_1b6d18a9)arg2 rate:(double)arg3 imageBlock:(void (^)(struct, UIImage *))arg4;
@end

