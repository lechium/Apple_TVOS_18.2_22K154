//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol CKSyncEngineDataSource;

@interface CKSyncEngineDataSourceAdapter : NSObject
{
    id <CKSyncEngineDataSource> _dataSource;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000160deb
@property(nonatomic) __weak id <CKSyncEngineDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (id)syncEngine:(id)arg1 relatedApplicationBundleIdentifiersForZoneIDs:(id)arg2 recordIDs:(id)arg3;	// IMP=0x0000000000160d00
- (_Bool)syncEngine:(id)arg1 shouldFetchAssetContentsForZoneID:(id)arg2;	// IMP=0x0000000000160c5f
- (_Bool)syncEngine:(id)arg1 shouldFetchChangesForZoneID:(id)arg2;	// IMP=0x0000000000160bb4
- (id)syncEngine:(id)arg1 nextRecordZoneChangeBatchForContext:(id)arg2;	// IMP=0x00000000001606a2
- (void)syncEngine:(id)arg1 handleEvent:(id)arg2;	// IMP=0x000000000015e5a8
- (id)initWithDataSource:(id)arg1;	// IMP=0x000000000015e544

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

