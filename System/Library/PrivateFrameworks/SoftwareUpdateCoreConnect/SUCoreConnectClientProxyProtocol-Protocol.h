//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SoftwareUpdateCoreConnect/NSObject-Protocol.h>

@class SUCoreProgress;

@protocol SUCoreConnectClientProxyProtocol <NSObject>

@optional
- (void)executeProgressBlock:(SUCoreProgress *)arg1 disableVerboseLogging:(_Bool)arg2;
- (void)executeProgressBlock:(SUCoreProgress *)arg1;
- (void)executeGenericBlock:(id)arg1 disableVerboseLogging:(_Bool)arg2;
- (void)executeGenericBlock:(id)arg1;
@end

