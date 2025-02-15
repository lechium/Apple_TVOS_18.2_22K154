//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSString;

@interface MRDRouteRecommendationDemotionContext : NSObject
{
    MISSING_TYPE *primaryBundleIdentifier;	// 8 = 0x8
    MISSING_TYPE *recommendationType;	// 24 = 0x18
    MISSING_TYPE *isASELocal;	// 32 = 0x20
    MISSING_TYPE *localOutputContextHasAirPlay;	// 33 = 0x21
    MISSING_TYPE *isSourceEndpointPlaying;	// 34 = 0x22
    MISSING_TYPE *isTargetEndpointPlaying;	// 35 = 0x23
    MISSING_TYPE *targetNowPlayingBundleIdentifier;	// 40 = 0x28
    MISSING_TYPE *targetEndpointContainsDiscoverableGroupLeader;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00400000002a3790
- (id)init;	// IMP=0x00100000002a3740
- (id)initWithPrimaryBundleIdentifier:(id)arg1 recommendationType:(long long)arg2 isASELocal:(_Bool)arg3 localOutputContextHasAirPlay:(_Bool)arg4 isSourceEndpointPlaying:(_Bool)arg5 isTargetEndpointPlaying:(_Bool)arg6 targetNowPlayingBundleIdentifier:(id)arg7 targetEndpointContainsDiscoverableGroupLeader:(_Bool)arg8;	// IMP=0x00100000002a36b0
@property(nonatomic, copy) NSString *targetNowPlayingBundleIdentifier;
@property(nonatomic) _Bool isTargetEndpointPlaying; // @synthesize isTargetEndpointPlaying;
@property(nonatomic) _Bool isSourceEndpointPlaying; // @synthesize isSourceEndpointPlaying;
@property(nonatomic) _Bool localOutputContextHasAirPlay; // @synthesize localOutputContextHasAirPlay;
@property(nonatomic) _Bool isASELocal; // @synthesize isASELocal;
@property(nonatomic) long long recommendationType; // @synthesize recommendationType;
@property(nonatomic, copy) NSString *primaryBundleIdentifier;

@end

