//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AuthKit/AKAdaptiveServiceInterface-Protocol.h>

@protocol AKRemoteViewSessionInterface <AKAdaptiveServiceInterface>
- (oneway void)invalidate;
- (oneway void)activateWithCompletionHandler:(void (^)(AKRemoteViewServiceConfiguration *, NSError *))arg1;
@end

