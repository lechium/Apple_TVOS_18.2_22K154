//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface MNCarPlayConnectionMonitor : NSObject
{
    _Bool _isConnected;	// 8 = 0x8
    _Bool _shouldWait;	// 9 = 0x9
}

+ (id)sharedInstance;	// IMP=0x00400000000c5b41
@property(readonly, nonatomic) _Bool isConnected; // @synthesize isConnected=_isConnected;
@property(readonly, nonatomic) _Bool isConnectedSynchronous;
- (void)dealloc;	// IMP=0x00000000000c5c3b
- (id)init;	// IMP=0x00000000000c5b96

@end

