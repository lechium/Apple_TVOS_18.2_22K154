//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SiriInferenceIntents/NSObject-Protocol.h>

@class SiriLinkFlowIntent;

@protocol SiriLinkFlowIntentHandling <NSObject>
- (void)handleSiriLinkFlow:(SiriLinkFlowIntent *)arg1 completion:(void (^)(SiriLinkFlowIntentResponse *))arg2;

@optional
- (void)confirmSiriLinkFlow:(SiriLinkFlowIntent *)arg1 completion:(void (^)(SiriLinkFlowIntentResponse *))arg2;
@end

