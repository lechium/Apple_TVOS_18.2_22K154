//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AdID/NSObject-Protocol.h>

@class ADBackgroundTaskRequest, NSObject, NSString;
@protocol OS_xpc_object;

@protocol BackgroundTaskDelegate <NSObject>
- (_Bool)runTask:(ADBackgroundTaskRequest *)arg1;

@optional
- (void)checkOnTask:(NSString *)arg1 activity:(NSObject<OS_xpc_object> *)arg2;
@end

