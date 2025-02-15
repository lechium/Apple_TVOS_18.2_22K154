//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol GTMTLCaptureService, OS_dispatch_semaphore;

__attribute__((visibility("hidden")))
@interface GTCaptureRequestToken : NSObject
{
    NSObject<OS_dispatch_semaphore> *_finished;	// 8 = 0x8
    id <GTMTLCaptureService> _service;	// 16 = 0x10
    unsigned long long _tokenId;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000000d2e4
@property(readonly, nonatomic) unsigned long long tokenId; // @synthesize tokenId=_tokenId;
- (void)waitUntilCompleted;	// IMP=0x000000000000d2c5
- (void)completed;	// IMP=0x000000000000d2b7
- (id)description;	// IMP=0x000000000000d239
- (id)initWithCaptureService:(id)arg1 andTokenId:(unsigned long long)arg2;	// IMP=0x000000000000d19b

@end

