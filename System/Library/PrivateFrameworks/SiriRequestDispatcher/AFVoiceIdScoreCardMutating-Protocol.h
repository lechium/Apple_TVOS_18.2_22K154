//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SiriRequestDispatcher/NSObject-Protocol.h>

@class NSDictionary, NSNumber, NSString;

@protocol AFVoiceIdScoreCardMutating <NSObject>
- (void)setDeltaScoreThreshold:(NSNumber *)arg1;
- (void)setConfidentScoreThreshold:(NSNumber *)arg1;
- (void)setHighScoreThreshold:(NSNumber *)arg1;
- (void)setLowScoreThreshold:(NSNumber *)arg1;
- (void)setUserIdentityClassification:(long long)arg1;
- (void)setUserClassified:(NSString *)arg1;
- (void)setSpIdAssetVersion:(NSString *)arg1;
- (void)setSpIdScoreThresholdingType:(NSString *)arg1;
- (void)setSpIdUserScoresVersion:(NSNumber *)arg1;
- (void)setSpIdKnownUserScores:(NSDictionary *)arg1;
- (void)setSpIdUnknownUserScore:(NSNumber *)arg1;
- (void)setSpIdAudioProcessedDuration:(NSNumber *)arg1;
@end

