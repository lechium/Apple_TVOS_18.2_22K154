//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreSpeechFoundation/CSAsset.h>

@class NSString;

@interface CSAsset (VTReprompt)
- (id)blobName;	// IMP=0x00300000000226f7
- (id)blobVersion;	// IMP=0x003000000002265f
@property(readonly, nonatomic) _Bool useTDTIEnrollment;
@property(readonly, nonatomic) _Bool useSpeakerRecognitionAsset;
@property(readonly, nonatomic) _Bool containsMultiUserThresholds;
@property(readonly, nonatomic) _Bool satImplicitTrainingEnabled;
@property(readonly, nonatomic) NSString *keywordDetectorNDAPIConfigFilePath;
@property(readonly, nonatomic) NSString *keywordDetectorQuasarConfigFilePath;
@property(readonly, nonatomic) NSString *voiceProfilePruningCookie;
@property(readonly, nonatomic) unsigned long long maxAllowedEnrollmentUtterances;
@property(readonly, nonatomic) unsigned long long pruningNumRetentionUtterance;
@property(readonly, nonatomic) float pruningThresholdPSR;
@property(readonly, nonatomic) float pruningThresholdSAT;
@property(readonly, nonatomic) float pruningExplicitUttThresholdPSR;
@property(readonly, nonatomic) float pruningExplicitUttThresholdSAT;
@property(readonly, nonatomic) float satVTImplicitThreshold;
@property(readonly, nonatomic) float satImplicitProfileDeltaThreshold;
@property(readonly, nonatomic) float satImplicitProfileThreshold;
@property(readonly, nonatomic) float psrCombinationWeight;
@property(readonly, nonatomic) long long multiUserDeltaScoreThreshold;
- (long long)multiUserDeltaScoreThresholdForPhId:(unsigned long long)arg1;	// IMP=0x0030000000070ea3
@property(readonly, nonatomic) long long multiUserConfidentScoreThreshold;
- (long long)multiUserConfidentScoreThresholdForPhId:(unsigned long long)arg1;	// IMP=0x0030000000070d67
@property(readonly, nonatomic) long long multiUserHighScoreThreshold;
- (long long)multiUserHighScoreThresholdForPhId:(unsigned long long)arg1;	// IMP=0x0030000000070c2b
@property(readonly, nonatomic) long long multiUserLowScoreThreshold;
- (long long)multiUserLowScoreThresholdForPhId:(unsigned long long)arg1;	// IMP=0x0030000000070aef
@property(readonly, nonatomic) float satScoreThreshold;
- (float)satScoreThresholdForPhId:(unsigned long long)arg1;	// IMP=0x00300000000709b9
- (id)getPhraseConfig:(unsigned long long)arg1;	// IMP=0x00300000000708a9
@property(readonly, nonatomic) _Bool containsSpeakerRecognitionCategory;
@end

