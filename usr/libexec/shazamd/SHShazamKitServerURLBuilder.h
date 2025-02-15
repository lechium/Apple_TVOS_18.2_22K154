//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class SHStorefront;

@interface SHShazamKitServerURLBuilder : NSObject
{
    SHStorefront *_storefront;	// 8 = 0x8
}

+ (void)updateTokensForEndpoint:(id)arg1 language:(id)arg2 storefront:(id)arg3 installationID:(id)arg4;	// IMP=0x00400000000562ff
- (void).cxx_destruct;	// IMP=0x00200000000563a5
@property(readonly, nonatomic) SHStorefront *storefront; // @synthesize storefront=_storefront;
- (void)defaultValuesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000056257
- (void)loadEndpointForClientIdentifier:(id)arg1 clientType:(long long)arg2 endpointType:(long long)arg3 installationID:(id)arg4 callback:(CDUnknownBlockType)arg5;	// IMP=0x0010000000055b14
- (void)loadHapticsEndpointForClientIdentifier:(id)arg1 clientType:(long long)arg2 callback:(CDUnknownBlockType)arg3;	// IMP=0x00100000000553e1
- (void)loadMatchEndpointForClientIdentifier:(id)arg1 clientType:(long long)arg2 installationID:(id)arg3 callback:(CDUnknownBlockType)arg4;	// IMP=0x00100000000553b6
- (void)loadLookupEndpointForClientIdentifier:(id)arg1 clientType:(long long)arg2 callback:(CDUnknownBlockType)arg3;	// IMP=0x001000000005538a

@end

