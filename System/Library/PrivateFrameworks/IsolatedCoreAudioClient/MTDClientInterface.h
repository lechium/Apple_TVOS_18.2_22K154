//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableSet;

__attribute__((visibility("hidden")))
@interface MTDClientInterface
{
    NSMutableSet *_reverseConnections;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000001701a
@property(retain, nonatomic) NSMutableSet *reverseConnections; // @synthesize reverseConnections=_reverseConnections;
- (void)stop_listening_for_microphone_activity_with_reply:(CDUnknownBlockType)arg1;	// IMP=0x0000000000016fe5
- (void)register_client:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000000016fd5
- (void)listen_for_microphone_activity:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000000016fc5
- (void)enable_microphone_activity_detection_with_reply:(CDUnknownBlockType)arg1;	// IMP=0x0000000000016fb5
- (void)disable_microphone_activity_detection_with_reply:(CDUnknownBlockType)arg1;	// IMP=0x0000000000016fa5
- (id)init;	// IMP=0x0000000000016f18

@end

