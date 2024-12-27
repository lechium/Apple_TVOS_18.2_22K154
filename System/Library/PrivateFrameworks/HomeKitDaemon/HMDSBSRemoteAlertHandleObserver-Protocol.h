//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemon/NSObject-Protocol.h>

@class NSError;
@protocol HMDSBSRemoteAlertHandle;

@protocol HMDSBSRemoteAlertHandleObserver <NSObject>
- (void)remoteAlertHandle:(id <HMDSBSRemoteAlertHandle>)arg1 didInvalidateWithError:(NSError *)arg2;
- (void)remoteAlertHandleDidDeactivate:(id <HMDSBSRemoteAlertHandle>)arg1;
- (void)remoteAlertHandleDidActivate:(id <HMDSBSRemoteAlertHandle>)arg1;
@end

