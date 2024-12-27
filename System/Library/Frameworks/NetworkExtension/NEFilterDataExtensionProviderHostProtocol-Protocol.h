//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NetworkExtension/NEFilterExtensionProviderHostProtocol-Protocol.h>

@class NEAppInfo, NEFilterFlow, NEFilterReport, NEFilterSettings;

@protocol NEFilterDataExtensionProviderHostProtocol <NEFilterExtensionProviderHostProtocol>
- (void)applySettings:(NEFilterSettings *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)report:(NEFilterReport *)arg1;
- (void)fetchCurrentRulesForFlow:(NEFilterFlow *)arg1 completionHandler:(void (^)(NEFilterControlVerdict *))arg2;
- (void)sendSocketContentFilterRequest;
- (void)sendBrowserContentFilterServerRequest;

@optional
- (void)getSourceAppInfo:(NEAppInfo *)arg1 completionHandler:(void (^)(NEAppInfo *))arg2;
@end

