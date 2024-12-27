//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "MPAsyncOperation.h"

@class MPModelLibraryKeepLocalChangeRequest, NSOperationQueue;

__attribute__((visibility("hidden")))
@interface MPModelLibraryKeepLocalChangeRequestOperation : MPAsyncOperation
{
    NSOperationQueue *_operationQueue;	// 8 = 0x8
    CDUnknownBlockType _responseHandler;	// 16 = 0x10
    MPModelLibraryKeepLocalChangeRequest *_request;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000002da2e9
@property(copy, nonatomic) MPModelLibraryKeepLocalChangeRequest *request; // @synthesize request=_request;
@property(copy, nonatomic) CDUnknownBlockType responseHandler; // @synthesize responseHandler=_responseHandler;
- (void)_handleKeepLocalUpdateStatus:(long long)arg1 forLibraryIdentifier:(long long)arg2 mediaType:(long long)arg3 completedWithError:(id)arg4;	// IMP=0x00000000002da1c9
- (void)_handlePersistentID:(long long)arg1 modelClass:(Class)arg2 keepLocal:(long long)arg3 keepLocalConstraints:(unsigned long long)arg4 mediaLibrary:(id)arg5;	// IMP=0x00000000002d9b31
- (void)execute;	// IMP=0x00000000002d9761

@end

