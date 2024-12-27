//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MGGroupQuery, NSArray, NSError, NSPredicate, NSString, NSURLRequest;

__attribute__((visibility("hidden")))
@interface MGRemoteQueryServerHandlerQuery : NSObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    _Bool _pendingUpdate;	// 12 = 0xc
    NSArray *_queryGroups;	// 16 = 0x10
    NSError *_queryError;	// 24 = 0x18
    CDUnknownBlockType _payloadProvider;	// 32 = 0x20
    NSURLRequest *_request;	// 40 = 0x28
    NSPredicate *_requestPredicate;	// 48 = 0x30
    NSString *_responseBoundary;	// 56 = 0x38
    MGGroupQuery *_query;	// 64 = 0x40
}

+ (id)handlerForRequest:(id)arg1;	// IMP=0x001000000000950b
+ (id)urlPath;	// IMP=0x00100000000094fa
- (void).cxx_destruct;	// IMP=0x000000000000ace3
@property(retain, nonatomic) MGGroupQuery *query; // @synthesize query=_query;
@property(retain, nonatomic) NSString *responseBoundary; // @synthesize responseBoundary=_responseBoundary;
@property(retain, nonatomic) NSPredicate *requestPredicate; // @synthesize requestPredicate=_requestPredicate;
@property(readonly, nonatomic) NSURLRequest *request; // @synthesize request=_request;
- (void)_withLock:(CDUnknownBlockType)arg1;	// IMP=0x000000000000ac4a
@property(nonatomic) _Bool pendingUpdate; // @synthesize pendingUpdate=_pendingUpdate;
@property(copy, nonatomic) CDUnknownBlockType payloadProvider; // @synthesize payloadProvider=_payloadProvider;
@property(retain, nonatomic) NSError *queryError; // @synthesize queryError=_queryError;
@property(retain, nonatomic) NSArray *queryGroups; // @synthesize queryGroups=_queryGroups;
- (void)_querySendResults;	// IMP=0x000000000000a3cc
- (void)_queryHandleResults:(id)arg1 error:(id)arg2;	// IMP=0x000000000000a151
- (void)_queryStart;	// IMP=0x0000000000009d06
- (void)_requestParse;	// IMP=0x000000000000992a
- (void)provideResponseData:(CDUnknownBlockType)arg1;	// IMP=0x00000000000097b3
- (int)prepareResponse:(id)arg1;	// IMP=0x0000000000009680
- (_Bool)validateRequest;	// IMP=0x0000000000009554
@property(readonly, copy) NSString *description;
- (void)dealloc;	// IMP=0x00000000000093ee
- (id)_initWithRequest:(id)arg1;	// IMP=0x000000000000936b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

