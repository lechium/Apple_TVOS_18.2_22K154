//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/INObject.h>

@class NSNumber;

@interface VolumeLevel : INObject
{
}

+ (_Bool)supportsSecureCoding;	// IMP=0x004000000020ae2a
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000020b0d2
- (id)initWithIdentifier:(id)arg1 displayString:(id)arg2 pronunciationHint:(id)arg3;	// IMP=0x000000000020afd6

// Remaining properties
@property(nonatomic, retain) NSNumber *currentVolumeOutput; // @dynamic currentVolumeOutput;
@property(nonatomic, retain) NSNumber *resolvedVolumeOutput; // @dynamic resolvedVolumeOutput;
@property(nonatomic) long long volumeSettingQualifier; // @dynamic volumeSettingQualifier;
@property(nonatomic) long long volumeSettingState; // @dynamic volumeSettingState;
@property(nonatomic) long long volumeSettingType; // @dynamic volumeSettingType;
@property(nonatomic) long long volumeSettingUnit; // @dynamic volumeSettingUnit;
@property(nonatomic, retain) NSNumber *volumeSettingValue; // @dynamic volumeSettingValue;

@end

