//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <DoNotDisturb/NSObject-Protocol.h>

@class DNDRequestDetails;

@protocol DNDRemoteServiceServerMeDeviceStateProtocol <NSObject>
- (void)queryMeDeviceStateWithRequestDetails:(DNDRequestDetails *)arg1 completionHandler:(void (^)(DNDMeDeviceState *, NSError *))arg2;
@end

