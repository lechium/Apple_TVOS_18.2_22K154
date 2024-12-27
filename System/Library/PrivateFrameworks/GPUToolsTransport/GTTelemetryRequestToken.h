//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol GTMTLTelemetryService, OS_dispatch_semaphore;

__attribute__((visibility("hidden")))
@interface GTTelemetryRequestToken : NSObject
{
    NSObject<OS_dispatch_semaphore> *_finished;	// 8 = 0x8
    id <GTMTLTelemetryService> _service;	// 16 = 0x10
    _Bool _completed;	// 24 = 0x18
    unsigned long long _tokenId;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000003566f
@property(readonly, nonatomic) unsigned long long tokenId; // @synthesize tokenId=_tokenId;
- (void)waitUntilCompleted;	// IMP=0x0000000000035650
- (void)completed;	// IMP=0x0000000000035642
- (id)initWithService:(id)arg1 andTokenId:(unsigned long long)arg2;	// IMP=0x00000000000355a4

@end

