//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "GEOMapRequest.h"

@class GEOZilchDecoder, NSError, NSObject;
@protocol OS_dispatch_semaphore;

__attribute__((visibility("hidden")))
@interface GEOZilchDecoderRequest : GEOMapRequest
{
    struct unique_ptr<geo::ZilchMapModel, std::default_delete<geo::ZilchMapModel>> _mapModel;	// 40 = 0x28
    GEOZilchDecoder *_decoder;	// 48 = 0x30
    shared_ptr_27244a92 _message;	// 56 = 0x38
    CDUnknownBlockType _pathHandler;	// 72 = 0x48
    CDUnknownBlockType _errorHandler;	// 80 = 0x50
    NSError *_firstTileLoadingError;	// 88 = 0x58
    NSObject<OS_dispatch_semaphore> *_finishedSemaphore;	// 96 = 0x60
}

- (id).cxx_construct;	// IMP=0x0000000000fc4c1d
- (void).cxx_destruct;	// IMP=0x0000000000fc4b87
@property(copy) CDUnknownBlockType errorHandler; // @synthesize errorHandler=_errorHandler;
@property(copy) CDUnknownBlockType pathHandler; // @synthesize pathHandler=_pathHandler;
- (void)cancel;	// IMP=0x0000000000fc4a8e
- (void)decodeWithPathHandler:(CDUnknownBlockType)arg1 errorHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000fc3bc9
- (void)_finishedDecodingWithPath:(Path_3f73a495)arg1;	// IMP=0x0000000000fc3a35
- (id)initWithDecoder:(id)arg1 message:(shared_ptr_27244a92)arg2;	// IMP=0x0000000000fc3848

@end

