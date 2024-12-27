//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MPCPlaybackIntent, NSData, NSString;

__attribute__((visibility("hidden")))
@interface MusicKit_SoftLinking_MPCPlaybackIntent : NSObject
{
    MPCPlaybackIntent *_underlyingPlaybackIntent;	// 8 = 0x8
}

+ (id)emptyPlaybackIntent;	// IMP=0x0040000000017c80
- (void).cxx_destruct;	// IMP=0x0000000000017dbb
@property(nonatomic, setter=setShuffleMode:) long long shuffleMode;
@property(nonatomic, setter=setRepeatMode:) long long repeatMode;
@property(copy, nonatomic, setter=setPlayActivityRecommendationData:) NSData *playActivityRecommendationData;
@property(copy, nonatomic, setter=setPlayActivityFeatureName:) NSString *playActivityFeatureName;
- (id)_underlyingPlaybackIntent;	// IMP=0x0000000000017ca7
@property(readonly, nonatomic) id rawPlaybackIntent;
- (id)initWithStationSeedingIdentifierSet:(id)arg1;	// IMP=0x0000000000017652
- (id)initWithLegacyModelStationSeeding:(id)arg1;	// IMP=0x000000000001721a
- (id)initWithLegacyLibraryRequest:(id)arg1 allowedIdentifiers:(id)arg2 startIdentifierSet:(id)arg3 onlyLibraryContent:(_Bool)arg4;	// IMP=0x0000000000016fff
- (id)initWithStoreIDs:(id)arg1 startIdentifierSet:(id)arg2;	// IMP=0x0000000000016daf
- (id)init;	// IMP=0x0000000000016c8a

@end

