//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface MADAnalyticsCacheDeleteResults : NSObject
{
    long long _reclaimV2AssetSpace;	// 8 = 0x8
    long long _reclaimV2AssetCount;	// 16 = 0x10
    long long _reclaimUnlockedUnreferencedAutoAssetSpace;	// 24 = 0x18
    long long _reclaimUnlockedUnreferencedAutoAssetCount;	// 32 = 0x20
    long long _reclaimUnlockedReferencedAutoAssetSpace;	// 40 = 0x28
    long long _reclaimUnlockedReferencedAutoAssetCount;	// 48 = 0x30
    long long _reclaimLockedOverridableAutoAssetSpace;	// 56 = 0x38
    long long _reclaimLockedOverridableAutoAssetCount;	// 64 = 0x40
    long long _reclaimLockedNeverRemoveAutoAssetSpace;	// 72 = 0x48
    long long _reclaimLockedNeverRemoveAutoAssetCount;	// 80 = 0x50
    long long _reclaimStagedAutoAssetSpace;	// 88 = 0x58
    long long _reclaimStagedAutoAssetCount;	// 96 = 0x60
    long long _reclaimMetadataBlockedSpace;	// 104 = 0x68
    long long _reclaimMetadataBlockedCount;	// 112 = 0x70
}

+ (id)copyWith:(id)arg1;	// IMP=0x0060000000002015
@property(nonatomic) long long reclaimMetadataBlockedCount; // @synthesize reclaimMetadataBlockedCount=_reclaimMetadataBlockedCount;
@property(nonatomic) long long reclaimMetadataBlockedSpace; // @synthesize reclaimMetadataBlockedSpace=_reclaimMetadataBlockedSpace;
@property(nonatomic) long long reclaimStagedAutoAssetCount; // @synthesize reclaimStagedAutoAssetCount=_reclaimStagedAutoAssetCount;
@property(nonatomic) long long reclaimStagedAutoAssetSpace; // @synthesize reclaimStagedAutoAssetSpace=_reclaimStagedAutoAssetSpace;
@property(nonatomic) long long reclaimLockedNeverRemoveAutoAssetCount; // @synthesize reclaimLockedNeverRemoveAutoAssetCount=_reclaimLockedNeverRemoveAutoAssetCount;
@property(nonatomic) long long reclaimLockedNeverRemoveAutoAssetSpace; // @synthesize reclaimLockedNeverRemoveAutoAssetSpace=_reclaimLockedNeverRemoveAutoAssetSpace;
@property(nonatomic) long long reclaimLockedOverridableAutoAssetCount; // @synthesize reclaimLockedOverridableAutoAssetCount=_reclaimLockedOverridableAutoAssetCount;
@property(nonatomic) long long reclaimLockedOverridableAutoAssetSpace; // @synthesize reclaimLockedOverridableAutoAssetSpace=_reclaimLockedOverridableAutoAssetSpace;
@property(nonatomic) long long reclaimUnlockedReferencedAutoAssetCount; // @synthesize reclaimUnlockedReferencedAutoAssetCount=_reclaimUnlockedReferencedAutoAssetCount;
@property(nonatomic) long long reclaimUnlockedReferencedAutoAssetSpace; // @synthesize reclaimUnlockedReferencedAutoAssetSpace=_reclaimUnlockedReferencedAutoAssetSpace;
@property(nonatomic) long long reclaimUnlockedUnreferencedAutoAssetCount; // @synthesize reclaimUnlockedUnreferencedAutoAssetCount=_reclaimUnlockedUnreferencedAutoAssetCount;
@property(nonatomic) long long reclaimUnlockedUnreferencedAutoAssetSpace; // @synthesize reclaimUnlockedUnreferencedAutoAssetSpace=_reclaimUnlockedUnreferencedAutoAssetSpace;
@property(nonatomic) long long reclaimV2AssetCount; // @synthesize reclaimV2AssetCount=_reclaimV2AssetCount;
@property(nonatomic) long long reclaimV2AssetSpace; // @synthesize reclaimV2AssetSpace=_reclaimV2AssetSpace;
- (id)summary;	// IMP=0x000000000000244d
- (id)description;	// IMP=0x00000000000022eb
- (id)copy;	// IMP=0x0000000000002191
- (id)initWithReclaimV2AssetSpace:(long long)arg1 reclaimV2AssetCount:(long long)arg2 reclaimUnlockedUnreferencedAutoAssetSpace:(long long)arg3 reclaimUnlockedUnreferencedAutoAssetCount:(long long)arg4 reclaimUnlockedReferencedAutoAssetSpace:(long long)arg5 reclaimUnlockedReferencedAutoAssetCount:(long long)arg6 reclaimLockedOverridableAutoAssetSpace:(long long)arg7 reclaimLockedOverridableAutoAssetCount:(long long)arg8 reclaimLockedNeverRemoveAutoAssetSpace:(long long)arg9 reclaimLockedNeverRemoveAutoAssetCount:(long long)arg10 reclaimStagedAutoAssetSpace:(long long)arg11 reclaimStagedAutoAssetCount:(long long)arg12 reclaimMetadataBlockedSpace:(long long)arg13 reclaimMetadataBlockedCount:(long long)arg14;	// IMP=0x0000000000001ec3
- (id)init;	// IMP=0x0000000000001e70

@end

