//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NetworkExtension/NEFilterExtensionProviderProtocol-Protocol.h>

@class NEFilterFlow, NEFilterReport;

@protocol NEFilterControlExtensionProviderProtocol <NEFilterExtensionProviderProtocol>
- (void)handleReport:(NEFilterReport *)arg1;
- (void)handleNewFlow:(NEFilterFlow *)arg1 completionHandler:(void (^)(NEFilterControlVerdict *))arg2;
@end

