//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMDCloudRecord;

__attribute__((visibility("hidden")))
@interface HMDCloudMetadataZone
{
    HMDCloudRecord *_metadataRecord;	// 72 = 0x48
}

+ (void)createMetadataZoneWithName:(id)arg1 owner:(id)arg2 cacheZone:(id)arg3 cloudCache:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x00600000003480ba
+ (id)zoneSubscriptionName:(id)arg1;	// IMP=0x00600000003480ad
+ (id)zoneRootRecordName;	// IMP=0x00600000003480a0
- (void).cxx_destruct;	// IMP=0x000000000034808d
@property(retain, nonatomic) HMDCloudRecord *metadataRecord; // @synthesize metadataRecord=_metadataRecord;
- (void)setServerChangeToken:(id)arg1;	// IMP=0x0000000000348027

@end

