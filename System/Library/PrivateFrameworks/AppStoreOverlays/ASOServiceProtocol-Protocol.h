//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AppStoreOverlays/NSObject-Protocol.h>

@protocol ASOOverlayConfiguration, ASORemoteAppOverlayDelegate;

@protocol ASOServiceProtocol <NSObject>
- (void)dismissOverlayWithReply:(void (^)(void))arg1;
- (void)presentOverlayWithConfiguration:(id <ASOOverlayConfiguration>)arg1 delegate:(id <ASORemoteAppOverlayDelegate>)arg2 reply:(void (^)(NSError *))arg3;
@end

