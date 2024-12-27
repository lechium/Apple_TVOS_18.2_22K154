//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MAAutoAssetSelector, MAAutoAssetStatus;

__attribute__((visibility("hidden")))
@interface MANAutoAssetSummary : NSObject
{
    _Bool _assetWasPatched;	// 8 = 0x8
    _Bool _assetIsStaged;	// 9 = 0x9
    MAAutoAssetSelector *_assetSelector;	// 16 = 0x10
    long long _assetRepresentation;	// 24 = 0x18
    MAAutoAssetStatus *_jobStatus;	// 32 = 0x20
    long long _scheduledIntervalSecs;	// 40 = 0x28
    long long _scheduledRemainingSecs;	// 48 = 0x30
    long long _pushDelaySecs;	// 56 = 0x38
    long long _activeClientCount;	// 64 = 0x40
    long long _activeMonitorCount;	// 72 = 0x48
    long long _maximumClientCount;	// 80 = 0x50
    long long _totalClientCount;	// 88 = 0x58
}

+ (id)summaryPaddedBanner:(id)arg1;	// IMP=0x001000000023f33a
+ (id)summaryPaddedHeader:(id)arg1;	// IMP=0x001000000023ee35
+ (id)summaryPaddedString:(id)arg1 paddingToLenghtOfString:(id)arg2 paddingWith:(id)arg3 paddingBefore:(_Bool)arg4;	// IMP=0x001000000023ecce
+ (id)summaryNewMaxColumnStrings;	// IMP=0x001000000023ebc4
+ (id)assetRepresentationName:(long long)arg1;	// IMP=0x001000000023eaca
+ (_Bool)supportsSecureCoding;	// IMP=0x001000000023d504
- (void).cxx_destruct;	// IMP=0x000000000023f923
@property(nonatomic) long long totalClientCount; // @synthesize totalClientCount=_totalClientCount;
@property(nonatomic) long long maximumClientCount; // @synthesize maximumClientCount=_maximumClientCount;
@property(nonatomic) long long activeMonitorCount; // @synthesize activeMonitorCount=_activeMonitorCount;
@property(nonatomic) long long activeClientCount; // @synthesize activeClientCount=_activeClientCount;
@property(nonatomic) long long pushDelaySecs; // @synthesize pushDelaySecs=_pushDelaySecs;
@property(nonatomic) long long scheduledRemainingSecs; // @synthesize scheduledRemainingSecs=_scheduledRemainingSecs;
@property(nonatomic) long long scheduledIntervalSecs; // @synthesize scheduledIntervalSecs=_scheduledIntervalSecs;
@property(retain, nonatomic) MAAutoAssetStatus *jobStatus; // @synthesize jobStatus=_jobStatus;
@property(nonatomic) _Bool assetIsStaged; // @synthesize assetIsStaged=_assetIsStaged;
@property(nonatomic) _Bool assetWasPatched; // @synthesize assetWasPatched=_assetWasPatched;
@property(nonatomic) long long assetRepresentation; // @synthesize assetRepresentation=_assetRepresentation;
@property(retain, nonatomic) MAAutoAssetSelector *assetSelector; // @synthesize assetSelector=_assetSelector;
- (id)assetRepresentationName;	// IMP=0x000000000023ea95
- (id)summaryPadded:(id)arg1;	// IMP=0x000000000023e20c
- (void)summaryBuildMaxColumnStrings:(id)arg1;	// IMP=0x000000000023da66
- (id)summary;	// IMP=0x000000000023d722
- (id)description;	// IMP=0x000000000023d50c
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000023d305
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000023d14c
- (id)initWithAssetSelector:(id)arg1 withAssetRepresentation:(long long)arg2 withAssetWasPatched:(_Bool)arg3 withAssetIsStaged:(_Bool)arg4 withJobStatus:(id)arg5 withScheduledIntervalSecs:(long long)arg6 withScheduledRemainingSecs:(long long)arg7 withPushDelaySecs:(long long)arg8 withActiveClientCount:(long long)arg9 withActiveMonitorCount:(long long)arg10 withMaximumClientCount:(long long)arg11 withTotalClientCount:(long long)arg12;	// IMP=0x000000000023cfb8

@end

