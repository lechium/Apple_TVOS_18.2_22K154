//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface HMDCloudHomeZone
{
    _Bool _sharedHome;	// 72 = 0x48
}

+ (void)createHomeZoneWithName:(id)arg1 owner:(id)arg2 cacheZone:(id)arg3 cloudCache:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x00600000003485cb
+ (id)zoneSubscriptionName:(id)arg1;	// IMP=0x00600000003485af
+ (id)zoneSharedRootRecordName;	// IMP=0x00600000003485a2
+ (id)zoneRootRecordName;	// IMP=0x0060000000348595
@property(readonly, nonatomic, getter=isSharedHome) _Bool sharedHome; // @synthesize sharedHome=_sharedHome;
- (void)setServerChangeToken:(id)arg1;	// IMP=0x0000000000348544
- (id)createCloudZoneChangeTemporaryCache:(_Bool)arg1;	// IMP=0x000000000034850b
- (id)description;	// IMP=0x0000000000348478

@end

