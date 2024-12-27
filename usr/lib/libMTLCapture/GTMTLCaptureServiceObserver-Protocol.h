//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class GTCaptureDescriptor, GTCaptureObjects, GTCaptureProgress, GTUnsupportedFenumInfo;

@protocol GTMTLCaptureServiceObserver
- (void)notifyUnsupportedFenum:(GTUnsupportedFenumInfo *)arg1;
- (void)notifyCaptureProgress:(GTCaptureProgress *)arg1;
- (void)notifyCaptureObjectsChanged:(GTCaptureObjects *)arg1;
- (void)notifyCaptureRequest:(GTCaptureDescriptor *)arg1;
@end

