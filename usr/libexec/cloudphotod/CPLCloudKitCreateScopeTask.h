//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CPLCloudKitZoneIdentification, CPLScopeChange, NSString, NSURL;
@protocol CPLEngineStoreUserIdentifier, CPLEngineTransportGroup;

@interface CPLCloudKitCreateScopeTask
{
    CPLScopeChange *_updatedScope;	// 24 = 0x18
    CPLCloudKitZoneIdentification *_identificationToCleanIfNecessary;	// 32 = 0x20
    CDUnknownBlockType _completionHandler;	// 40 = 0x28
    NSURL *_tempCKAssetURL;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0020000000052762
@property(copy, nonatomic) NSURL *tempCKAssetURL; // @synthesize tempCKAssetURL=_tempCKAssetURL;
- (void)_createLibraryShareWithScopeChange:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000005267c
- (void)_createLibraryWithScopeChange:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000052554
- (void)_createMomentShareWithScopeChange:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000005244e
- (void)_createZoneWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000051884
- (void)_createCKShareWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000051121
- (void)_createCKShare:(id)arg1 andRootRecord:(id)arg2 currentUserID:(id)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00100000000508ec
- (void)_runOperations;	// IMP=0x001000000005016d
- (void)runOperations;	// IMP=0x00100000000500b0
- (void)_clearPartiallyCreatedZoneIfNecessary;	// IMP=0x001000000004fc7e
- (id)scope;	// IMP=0x001000000004fc25
- (id)initWithController:(id)arg1 scope:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000004fb97

// Remaining properties
@property(nonatomic) _Bool allowsFetchCache;
@property(nonatomic, getter=isBackgroundTask) _Bool backgroundTask;
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(retain, nonatomic) id fetchCache;
@property(nonatomic, getter=isForcedTask) _Bool forcedTask;
@property(nonatomic) _Bool foreground;
@property(readonly) unsigned long long hash;
@property(nonatomic, getter=isHighPriorityBackground) _Bool highPriorityBackground;
@property(readonly) Class superclass;
@property(retain, nonatomic) id <CPLEngineTransportGroup> transportGroup;
@property(retain, nonatomic) id <CPLEngineStoreUserIdentifier> transportUserIdentifier;

@end

