//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CPLCloudKitScope, CPLCloudKitZoneIdentification, CPLEngineScope, CPLEngineScopeFlagsUpdate, CPLScopeChange, NSString;
@protocol CPLEngineStoreUserIdentifier, CPLEngineTransportGroup;

@interface CPLCloudKitAcceptSharedScopeTask
{
    CPLScopeChange *_scope;	// 8 = 0x8
    CPLCloudKitScope *_cloudKitScope;	// 16 = 0x10
    CPLEngineScope *_engineScope;	// 24 = 0x18
    CPLCloudKitZoneIdentification *_identification;	// 32 = 0x20
    CPLEngineScopeFlagsUpdate *_flags;	// 40 = 0x28
    CDUnknownBlockType _completionHandler;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x002000000005728e
- (void)_acceptShareWithMetadata:(id)arg1 currentUserID:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000005681c
- (void)_fetchMetadataForShareURL:(id)arg1 currentUserID:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000055502
- (void)_acceptShareWithURL:(id)arg1 currentUserID:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000553bd
- (void)_updateScopeParticipantsWithCKShare:(id)arg1 currentUserID:(id)arg2;	// IMP=0x00100000000552a3
- (void)_updateScopeAndFlagsWithCKRecord:(id)arg1 currentUserID:(id)arg2;	// IMP=0x001000000005518d
- (void)runOperations;	// IMP=0x0010000000054995
- (id)initWithController:(id)arg1 scope:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000548dc

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

