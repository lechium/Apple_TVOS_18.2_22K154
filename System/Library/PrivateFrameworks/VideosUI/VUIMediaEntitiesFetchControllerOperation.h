//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <VideosUICore/VUIAsynchronousOperation.h>

@class NSArray, NSError, NSOperation, VUIMediaEntitiesFetchControllerResult, VUIMediaLibrary;

__attribute__((visibility("hidden")))
@interface VUIMediaEntitiesFetchControllerOperation : VUIAsynchronousOperation
{
    long long _fetchReason;	// 8 = 0x8
    NSArray *_requests;	// 16 = 0x10
    NSArray *_currentFetchResponses;	// 24 = 0x18
    VUIMediaEntitiesFetchControllerResult *_result;	// 32 = 0x20
    NSError *_error;	// 40 = 0x28
    VUIMediaLibrary *_mediaLibrary;	// 48 = 0x30
    NSOperation *_currentSubOperation;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000000000abd7f
@property(retain, nonatomic) NSOperation *currentSubOperation; // @synthesize currentSubOperation=_currentSubOperation;
@property(retain, nonatomic) VUIMediaLibrary *mediaLibrary; // @synthesize mediaLibrary=_mediaLibrary;
@property(copy, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) VUIMediaEntitiesFetchControllerResult *result; // @synthesize result=_result;
@property(copy, nonatomic) NSArray *currentFetchResponses; // @synthesize currentFetchResponses=_currentFetchResponses;
@property(copy, nonatomic) NSArray *requests; // @synthesize requests=_requests;
@property(nonatomic) long long fetchReason; // @synthesize fetchReason=_fetchReason;
- (id)_resultWithResponses:(id)arg1;	// IMP=0x00000000000abc19
- (void)_startChangesOperationWithMediaEntityFetchResponses:(id)arg1 currentFetchResponses:(id)arg2;	// IMP=0x00000000000ab997
- (void)_handleCompletdFetchWithResponses:(id)arg1 error:(id)arg2;	// IMP=0x00000000000ab7df
- (void)_startMediaLibraryFetchOperation;	// IMP=0x00000000000ab3f8
- (void)cancel;	// IMP=0x00000000000ab37a
- (void)executionDidBegin;	// IMP=0x00000000000ab368
- (id)initWithMediaLibrary:(id)arg1 fetchReason:(long long)arg2 requests:(id)arg3;	// IMP=0x00000000000ab29f

@end

