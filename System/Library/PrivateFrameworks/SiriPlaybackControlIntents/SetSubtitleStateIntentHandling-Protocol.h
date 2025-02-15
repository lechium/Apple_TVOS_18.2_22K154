//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SiriPlaybackControlIntents/NSObject-Protocol.h>

@class SetSubtitleStateIntent;

@protocol SetSubtitleStateIntentHandling <NSObject>
- (void)resolveLanguageForSetSubtitleState:(SetSubtitleStateIntent *)arg1 withCompletion:(void (^)(SetSubtitleStateLanguageResolutionResult *))arg2;
- (void)resolveDeviceForSetSubtitleState:(SetSubtitleStateIntent *)arg1 withCompletion:(void (^)(SetSubtitleStateDeviceResolutionResult *))arg2;
- (void)handleSetSubtitleState:(SetSubtitleStateIntent *)arg1 completion:(void (^)(SetSubtitleStateIntentResponse *))arg2;

@optional
- (void)confirmSetSubtitleState:(SetSubtitleStateIntent *)arg1 completion:(void (^)(SetSubtitleStateIntentResponse *))arg2;
@end

