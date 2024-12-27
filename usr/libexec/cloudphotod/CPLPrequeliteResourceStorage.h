//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CPLPrequeliteVariable, MISSING_TYPE, NSString;

@interface CPLPrequeliteResourceStorage
{
    CPLPrequeliteVariable *_totalSizeVar;	// 8 = 0x8
    CPLPrequeliteVariable *_totalOriginalSizeVar;	// 16 = 0x10
    CPLPrequeliteVariable *_largestResourceSizeVar;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00200000001aefbb
- (id)status;	// IMP=0x00100000001aeec1
- (_Bool)resetWithError:(id *)arg1;	// IMP=0x00100000001aed5e
- (unsigned long long)totalOriginalResourceSize;	// IMP=0x00100000001aed0f
- (unsigned long long)totalResourceSize;	// IMP=0x00100000001aecc0
- (_Bool)_refreshLargestResourceSizeWithError:(id *)arg1;	// IMP=0x00100000001aea5c
- (void)enumerateIdentitiesWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x00100000001ae4ec
- (unsigned long long)retainCountForIdentity:(id)arg1;	// IMP=0x00100000001ae3e2
- (_Bool)releaseIdentity:(id)arg1 lastReference:(_Bool *)arg2 isTrackedOriginal:(_Bool)arg3 error:(id *)arg4;	// IMP=0x00100000001add2f
- (_Bool)retainIdentity:(id)arg1 isTrackedOriginal:(_Bool)arg2 error:(id *)arg3;	// IMP=0x00100000001ad98c
- (_Bool)openWithError:(id *)arg1;	// IMP=0x00100000001ad84c
- (MISSING_TYPE *)upgradeStorageToVersion: /* Error: Ran out of types for this method. */;	// IMP=0x00100000001ad55c
- (_Bool)initializeStorage;	// IMP=0x00100000001ad415
- (id)initWithAbstractObject:(id)arg1;	// IMP=0x00100000001ad2bf

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool isAlive;
@property(readonly, nonatomic) _Bool isEmpty;
@property(readonly, nonatomic) _Bool shouldIncludeInStatus;
@property(readonly) Class superclass;

@end

