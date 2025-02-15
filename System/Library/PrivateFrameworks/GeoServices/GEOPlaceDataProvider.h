//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface GEOPlaceDataProvider : NSObject
{
    _Bool _isLoading;	// 8 = 0x8
    CDUnknownBlockType _finishedHandler;	// 16 = 0x10
    CDUnknownBlockType _errorHandler;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000001265081
@property(copy, nonatomic) CDUnknownBlockType errorHandler; // @synthesize errorHandler=_errorHandler;
@property(copy, nonatomic) CDUnknownBlockType finishedHandler; // @synthesize finishedHandler=_finishedHandler;
@property(nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;
- (void)providerDidCancel;	// IMP=0x0000000001265022
- (void)providerReceivedErrorCode:(long long)arg1 userInfo:(id)arg2;	// IMP=0x0000000001264f56
- (void)providerReceivedResponse:(id)arg1 userInfo:(id)arg2;	// IMP=0x0000000001264ec6
- (void)cancelProviderRequest;	// IMP=0x0000000001264ec0
- (void)startProviderWithRequest:(id)arg1 appIdentifier:(id)arg2;	// IMP=0x0000000001264eba
- (void)cancelRequest;	// IMP=0x0000000001264ea8
- (void)startRequest:(id)arg1 appIdentifier:(id)arg2 finished:(CDUnknownBlockType)arg3 error:(CDUnknownBlockType)arg4;	// IMP=0x0000000001264db7
- (void)requestCompleted;	// IMP=0x0000000001264d76
- (void)dealloc;	// IMP=0x0000000001264d24

@end

