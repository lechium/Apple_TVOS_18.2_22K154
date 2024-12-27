//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface VCAudioSmartRoutingManager
{
    NSMutableDictionary *_optOutOfSmartRouting;	// 88 = 0x58
}

+ (void)removeClient:(id)arg1;	// IMP=0x0060000000020ee0
+ (void)addClient:(id)arg1;	// IMP=0x0060000000020ea8
+ (id)sharedInstance;	// IMP=0x0060000000020cbd
- (void)applyAudioScoreForOptOutOfSmartRouting:(_Bool)arg1 error:(id *)arg2;	// IMP=0x0000000000021f3f
- (void)updateOptOutOfSmartRouting;	// IMP=0x0000000000021b8d
- (void)removeClient:(id)arg1;	// IMP=0x0000000000021579
- (void)addClient:(id)arg1;	// IMP=0x0000000000020f18
- (void)dealloc;	// IMP=0x0000000000020e43
- (id)init;	// IMP=0x0000000000020dcd

@end

