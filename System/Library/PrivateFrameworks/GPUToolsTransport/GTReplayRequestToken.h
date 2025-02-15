//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol GTMTLReplayService, OS_dispatch_semaphore;

@interface GTReplayRequestToken : NSObject
{
    NSObject<OS_dispatch_semaphore> *_finished;	// 8 = 0x8
    id <GTMTLReplayService> _replayer;	// 16 = 0x10
    unsigned long long _tokenId;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000008b39
@property(readonly, nonatomic) unsigned long long tokenId; // @synthesize tokenId=_tokenId;
- (_Bool)resume;	// IMP=0x0000000000008b12
- (_Bool)pause;	// IMP=0x0000000000008af5
- (_Bool)cancel;	// IMP=0x0000000000008ad8
- (void)waitUntilCompleted;	// IMP=0x0000000000008ac3
- (void)completed;	// IMP=0x0000000000008ab5
- (id)initWithService:(id)arg1 andTokenId:(unsigned long long)arg2;	// IMP=0x0000000000008a17

@end

