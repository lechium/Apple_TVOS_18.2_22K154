//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HMBCloudZone, HMBLocalZone;

__attribute__((visibility("hidden")))
@interface HMDDatabaseFetchZonesResult : NSObject
{
    HMBLocalZone *_localZone;	// 8 = 0x8
    HMBCloudZone *_cloudZone;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000064fca7
@property(readonly) HMBCloudZone *cloudZone; // @synthesize cloudZone=_cloudZone;
@property(readonly) HMBLocalZone *localZone; // @synthesize localZone=_localZone;
- (id)initWithLocalZone:(id)arg1 cloudZone:(id)arg2;	// IMP=0x000000000064fbe6

@end

