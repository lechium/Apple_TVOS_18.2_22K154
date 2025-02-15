//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BitrateLimits, NSMutableDictionary, NSMutableSet, VCAudioTier;

__attribute__((visibility("hidden")))
@interface VCAudioTierPicker : NSObject
{
    NSMutableDictionary *_tierTablesForRedNumPayloads;	// 8 = 0x8
    VCAudioTier *_defaultTier;	// 16 = 0x10
    VCAudioTier *_fallbackTier;	// 24 = 0x18
    BitrateLimits *_bitrateLimits;	// 32 = 0x20
    CDStruct_22a33d58 _config;	// 40 = 0x28
    NSMutableDictionary *_tierTablePlist;	// 88 = 0x58
    NSMutableSet *_audioPayloads;	// 96 = 0x60
}

+ (id)valueForNetworkBitrate:(id)arg1 networkBitrate:(unsigned int)arg2;	// IMP=0x00600000003709ea
+ (_Bool)shouldFilterTierForPayloadConfig:(id)arg1 bitRate:(unsigned int)arg2 packetsPerBundle:(unsigned int)arg3 mode:(unsigned char)arg4 redNumPayloads:(unsigned int)arg5 cellular:(_Bool)arg6;	// IMP=0x00600000003708cd
+ (id)selectHighestQualityAudioTiers:(id)arg1 forBitrateLimits:(id)arg2 isHardLimit:(_Bool)arg3;	// IMP=0x006000000036fcdf
+ (_Bool)loadVCAudioTierFromTierTable:(id)arg1 bitrate:(unsigned int)arg2 redNumPayloads:(unsigned int)arg3 outEntryArray:(id)arg4;	// IMP=0x006000000036f7e4
+ (_Bool)loadVCAudioTierFromTierTable:(id)arg1 config:(const CDStruct_22a33d58 *)arg2 allowRedAtLowBitrate:(_Bool)arg3 alwaysOnAudioRedundancyDisabled:(_Bool)arg4 redNumPayloads:(unsigned int)arg5 tierBitrate:(unsigned int)arg6 outEntryArray:(id)arg7;	// IMP=0x006000000036ef93
+ (_Bool)isAlwaysOnRedAudioTier:(unsigned int)arg1 redNumPayloads:(unsigned int)arg2 usingCellular:(_Bool)arg3;	// IMP=0x006000000036ef32
+ (_Bool)isLowBitrateAudioTier:(unsigned int)arg1;	// IMP=0x006000000036ef23
+ (_Bool)isU1ModeWithPlistSupport:(unsigned char)arg1;	// IMP=0x006000000036e1e0
+ (_Bool)isModePlistSupported:(unsigned char)arg1;	// IMP=0x006000000036e1bc
+ (_Bool)isModeLowLatency:(unsigned char)arg1;	// IMP=0x006000000036e1ad
+ (_Bool)isModeV2:(unsigned char)arg1;	// IMP=0x006000000036e19e
+ (_Bool)isModeAudioVideo:(unsigned char)arg1;	// IMP=0x006000000036e187
+ (_Bool)isModeAudioOnly:(unsigned char)arg1;	// IMP=0x006000000036e170
+ (_Bool)usePlistForAudioTierTableFromMode:(unsigned char)arg1;	// IMP=0x006000000036e116
+ (id)allPossibleCombinations:(id)arg1 supportedPacketsPerBundle:(id)arg2 redNumPayloads:(unsigned int)arg3 headerSize:(unsigned int)arg4 tierPickerMode:(unsigned char)arg5 usingCellular:(_Bool)arg6 useCaseWatchContinuity:(_Bool)arg7;	// IMP=0x006000000036d9f1
+ (_Bool)arrayHasObject:(id)arg1 withPayloadType:(int)arg2;	// IMP=0x006000000036d8ea
+ (unsigned char)operatingModeToTierPickerMode:(int)arg1 isLowLatency:(_Bool)arg2 preferPlistForTierTable:(_Bool)arg3;	// IMP=0x006000000036d25b
+ (int)tierPickerModeToAVConferenceOperatingMode:(unsigned char)arg1;	// IMP=0x006000000036d23d
@property(retain, nonatomic) BitrateLimits *bitrateLimits; // @synthesize bitrateLimits=_bitrateLimits;
@property CDStruct_22a33d58 config; // @synthesize config=_config;
@property(readonly) VCAudioTier *defaultTier; // @synthesize defaultTier=_defaultTier;
- (void)addPayloadsFromGFTRedNumPayloadsDict:(id)arg1 isDeviceClassWolf:(_Bool)arg2;	// IMP=0x00000000003734d3
- (void)addPayloadsFromGFTPayloadsArray:(id)arg1;	// IMP=0x000000000037333a
- (void)addPayloadsFromU1RedNumPayloadsDict:(id)arg1 config:(const CDStruct_22a33d58 *)arg2 mode:(id)arg3 isIPv4:(_Bool)arg4 isCellular:(_Bool)arg5;	// IMP=0x0000000000372e08
- (void)addPayloadsFromU1IPVerDict:(id)arg1 config:(const CDStruct_22a33d58 *)arg2 mode:(id)arg3;	// IMP=0x0000000000372ae1
- (void)addPayloadFromTier:(id)arg1;	// IMP=0x0000000000372a83
- (void)generateAudioPayloadsFromConfig:(const CDStruct_22a33d58 *)arg1;	// IMP=0x00000000003724e3
- (id)allPayloadsFromAllTierTables;	// IMP=0x00000000003724cd
- (id)allActiveAudioTiers;	// IMP=0x0000000000372382
- (unsigned long long)adjustedRedNumPayloadsForLowBitrateAudioTier:(id)arg1 redNumPayloads:(unsigned long long)arg2;	// IMP=0x00000000003722d3
- (id)tierForAudioBitrate:(unsigned long long)arg1 withRedNumPayloads:(unsigned long long)arg2;	// IMP=0x0000000000371b06
- (id)tierForNetworkBitrate:(unsigned long long)arg1 withRedNumPayloads:(unsigned long long)arg2;	// IMP=0x000000000037187f
- (id)chooseMultiwayAudioTierForRedPayload:(unsigned long long)arg1;	// IMP=0x00000000003713c5
- (id)tierForNetworkBitrate:(unsigned long long)arg1 withLegacyDuplication:(int)arg2;	// IMP=0x0000000000370a9f
- (void)printCreatedAudioTiers:(id)arg1;	// IMP=0x0000000000370501
- (id)loadAudioTiersFromPlist:(id)arg1;	// IMP=0x000000000036ee73
- (_Bool)addEntryMatchingPayloadToAudioTierMap:(id)arg1 config:(const CDStruct_22a33d58 *)arg2 entry:(id)arg3 bitrateTier:(id)arg4 forcedPayload:(int)arg5;	// IMP=0x000000000036ec04
- (id)generateAudioTiersDictFromPlistForBitrateLimits:(id)arg1 tierPickerConfig:(const CDStruct_22a33d58 *)arg2 redNumPayloads:(unsigned int)arg3;	// IMP=0x000000000036e226
- (void)dealloc;	// IMP=0x000000000036d86f
- (void)setupAlwaysOnRedTiersForSupportedRed:(id)arg1 usingCellular:(_Bool)arg2;	// IMP=0x000000000036d2e4
- (_Bool)setupTierPickerForConfig:(CDStruct_22a33d58)arg1;	// IMP=0x000000000036c747
- (void)logTierPickerConfig:(CDStruct_22a33d58)arg1;	// IMP=0x000000000036c463
- (id)configToString:(CDStruct_22a33d58)arg1;	// IMP=0x000000000036c3e8
- (_Bool)reconfigureTierPicker:(CDStruct_22a33d58)arg1;	// IMP=0x000000000036c2ae
- (id)initWithConfig:(CDStruct_22a33d58)arg1;	// IMP=0x000000000036c1ec

@end

