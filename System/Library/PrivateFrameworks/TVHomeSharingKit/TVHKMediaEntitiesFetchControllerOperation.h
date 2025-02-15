//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "TVHKAsynchronousOperation.h"

@class NSArray, NSError, NSOperation, TVHKMediaEntitiesFetchControllerResultSet, TVHKMediaEntity, TVHKMediaLibrary;

__attribute__((visibility("hidden")))
@interface TVHKMediaEntitiesFetchControllerOperation : TVHKAsynchronousOperation
{
    TVHKMediaLibrary *_mediaLibrary;	// 8 = 0x8
    long long _queryReason;	// 16 = 0x10
    NSArray *_requests;	// 24 = 0x18
    TVHKMediaEntity *_sourceMediaEntity;	// 32 = 0x20
    NSArray *_currentFetchResponses;	// 40 = 0x28
    TVHKMediaEntitiesFetchControllerResultSet *_resultSet;	// 48 = 0x30
    NSError *_error;	// 56 = 0x38
    NSOperation *_currentSubOperation;	// 64 = 0x40
}

+ (id)new;	// IMP=0x00600000000485eb
- (void).cxx_destruct;	// IMP=0x000000000004973c
@property(retain) NSOperation *currentSubOperation; // @synthesize currentSubOperation=_currentSubOperation;
@property(copy, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) TVHKMediaEntitiesFetchControllerResultSet *resultSet; // @synthesize resultSet=_resultSet;
@property(copy, nonatomic) NSArray *currentFetchResponses; // @synthesize currentFetchResponses=_currentFetchResponses;
@property(readonly, nonatomic) TVHKMediaEntity *sourceMediaEntity; // @synthesize sourceMediaEntity=_sourceMediaEntity;
@property(readonly, copy, nonatomic) NSArray *requests; // @synthesize requests=_requests;
@property(readonly, nonatomic) long long queryReason; // @synthesize queryReason=_queryReason;
@property(readonly, nonatomic) TVHKMediaLibrary *mediaLibrary; // @synthesize mediaLibrary=_mediaLibrary;
- (void)_completeWithResultSet:(id)arg1 error:(id)arg2;	// IMP=0x000000000004957f
- (id)_resultSetWithResponses:(id)arg1;	// IMP=0x000000000004930c
- (void)_startChangesOperationWithMediaEntityFetchResponses:(id)arg1 currentFetchResponses:(id)arg2;	// IMP=0x0000000000048e59
- (void)_handleCompletdFetchWithResponses:(id)arg1 error:(id)arg2;	// IMP=0x0000000000048cb1
- (void)_startMediaServerFetchOperation;	// IMP=0x000000000004894b
- (void)cancel;	// IMP=0x0000000000048851
- (void)executionDidBegin;	// IMP=0x00000000000487b3
- (id)initWithMediaLibrary:(id)arg1 queryReason:(long long)arg2 requests:(id)arg3 sourceMediaEntity:(id)arg4;	// IMP=0x0000000000048689
- (id)init;	// IMP=0x000000000004861a

@end

