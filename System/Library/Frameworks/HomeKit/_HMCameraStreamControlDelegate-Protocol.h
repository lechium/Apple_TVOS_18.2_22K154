//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKit/NSObject-Protocol.h>

@class NSError, _HMCameraStreamControl;

@protocol _HMCameraStreamControlDelegate <NSObject>
- (void)cameraStreamControl:(_HMCameraStreamControl *)arg1 didStopStreamWithError:(NSError *)arg2;
- (void)cameraStreamControlDidStartStream:(_HMCameraStreamControl *)arg1;
@end

