//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSProgress, NSString, SHLLibraryBatch, SHLSyncSession;
@protocol SHLSyncSessionModifyTaskDelegate;

@interface SHLSyncSessionModifyTask : NSObject
{
    NSProgress *_progress;	// 8 = 0x8
    NSString *_identifier;	// 16 = 0x10
    long long _retryCount;	// 24 = 0x18
    SHLSyncSession *session;	// 32 = 0x20
    NSString *_syncStartCondition;	// 40 = 0x28
    id <SHLSyncSessionModifyTaskDelegate> _delegate;	// 48 = 0x30
    SHLLibraryBatch *_tracksToModify;	// 56 = 0x38
    SHLLibraryBatch *_groupsToModify;	// 64 = 0x40
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0020000000052e4e
- (void).cxx_destruct;	// IMP=0x0020000000053019
@property(retain, nonatomic) SHLLibraryBatch *groupsToModify; // @synthesize groupsToModify=_groupsToModify;
@property(retain, nonatomic) SHLLibraryBatch *tracksToModify; // @synthesize tracksToModify=_tracksToModify;
@property(nonatomic) __weak id <SHLSyncSessionModifyTaskDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) NSString *syncStartCondition; // @synthesize syncStartCondition=_syncStartCondition;
@property(nonatomic) __weak SHLSyncSession *session; // @synthesize session;
@property(nonatomic) long long retryCount; // @synthesize retryCount=_retryCount;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) NSProgress *progress; // @synthesize progress=_progress;
- (void)updateProgress;	// IMP=0x0010000000052e56
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0010000000052d7c
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000052b8d
@property(readonly, nonatomic) NSArray *allItemIdentifiers;
@property(readonly, nonatomic) long long size;
@property(readonly, nonatomic) long long type;
- (id)subdivideTaskIntoBatchesOfSize:(long long)arg1;	// IMP=0x001000000005214c
- (id)_init;	// IMP=0x0010000000052026
- (id)initWithTracksToModify:(id)arg1 groupsToModify:(id)arg2;	// IMP=0x0010000000051ea8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

