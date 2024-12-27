//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Rapport/NSObject-Protocol.h>

@class NSString;

@protocol RPStatusUpdatableSubscriber <NSObject>
- (void)unsubscribeToStatusUpdate:(NSString *)arg1 completion:(void (^)(NSError *))arg2;
- (void)subscribeToStatusUpdate:(NSString *)arg1 leeway:(double)arg2 configurationFlags:(unsigned long long)arg3 statusUpdateHandler:(void (^)(NSString *, RPCompanionLinkDevice *, int, NSDictionary *))arg4 completion:(void (^)(NSError *))arg5;
@end

