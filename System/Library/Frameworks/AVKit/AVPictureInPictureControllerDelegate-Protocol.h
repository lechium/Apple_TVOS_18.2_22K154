//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AVKit/NSObject-Protocol.h>

@class AVPictureInPictureController, NSError;

@protocol AVPictureInPictureControllerDelegate <NSObject>

@optional
- (void)pictureInPictureController:(AVPictureInPictureController *)arg1 restoreUserInterfaceForPictureInPictureStopWithCompletionHandler:(void (^)(_Bool))arg2;
- (void)pictureInPictureControllerDidStopPictureInPicture:(AVPictureInPictureController *)arg1;
- (void)pictureInPictureControllerWillStopPictureInPicture:(AVPictureInPictureController *)arg1;
- (void)pictureInPictureController:(AVPictureInPictureController *)arg1 failedToStartPictureInPictureWithError:(NSError *)arg2;
- (void)pictureInPictureControllerDidStartPictureInPicture:(AVPictureInPictureController *)arg1;
- (void)pictureInPictureControllerWillStartPictureInPicture:(AVPictureInPictureController *)arg1;
@end

