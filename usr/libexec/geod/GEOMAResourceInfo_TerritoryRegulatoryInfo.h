//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MAAssetQuery, MADownloadOptions, NSString, NSURL;

@interface GEOMAResourceInfo_TerritoryRegulatoryInfo
{
}

+ (id)_defaultQueryParameters;	// IMP=0x002000000002865f
+ (id)_defaultQueryType;	// IMP=0x0010000000028652
+ (id)allExisitngInfos;	// IMP=0x0010000000028420
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000002873b
@property(readonly) unsigned long long hash;
- (_Bool)shouldPrefetchResource:(id)arg1;	// IMP=0x0010000000028729
@property(readonly, nonatomic) MADownloadOptions *downloadOptions;
@property(readonly, nonatomic) double timeToLive;
@property(readonly, nonatomic) unsigned long long policy;
- (id)init;	// IMP=0x0010000000028378

// Remaining properties
@property(readonly, nonatomic) NSURL *baseURL;
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly, nonatomic, getter=isExpired) _Bool expired;
@property(readonly, nonatomic) double lastAccessedTime;
@property(readonly, nonatomic) MAAssetQuery *query;
@property(readonly) Class superclass;

@end

