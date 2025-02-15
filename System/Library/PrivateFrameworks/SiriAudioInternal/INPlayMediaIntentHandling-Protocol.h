//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SiriAudioInternal/NSObject-Protocol.h>

@class INPlayMediaIntent;

@protocol INPlayMediaIntentHandling <NSObject>
- (void)handlePlayMedia:(INPlayMediaIntent *)arg1 completion:(void (^)(INPlayMediaIntentResponse *))arg2;

@optional
- (void)resolvePlaybackSpeedForPlayMedia:(INPlayMediaIntent *)arg1 withCompletion:(void (^)(INPlayMediaPlaybackSpeedResolutionResult *))arg2;
- (void)resolvePlaybackQueueLocationForPlayMedia:(INPlayMediaIntent *)arg1 withCompletion:(void (^)(INPlaybackQueueLocationResolutionResult *))arg2;
- (void)resolveResumePlaybackForPlayMedia:(INPlayMediaIntent *)arg1 withCompletion:(void (^)(INBooleanResolutionResult *))arg2;
- (void)resolvePlaybackRepeatModeForPlayMedia:(INPlayMediaIntent *)arg1 withCompletion:(void (^)(INPlaybackRepeatModeResolutionResult *))arg2;
- (void)resolvePlayShuffledForPlayMedia:(INPlayMediaIntent *)arg1 withCompletion:(void (^)(INBooleanResolutionResult *))arg2;
- (void)resolveMediaItemsForPlayMedia:(INPlayMediaIntent *)arg1 withCompletion:(void (^)(NSArray *))arg2;
- (void)confirmPlayMedia:(INPlayMediaIntent *)arg1 completion:(void (^)(INPlayMediaIntentResponse *))arg2;
@end

