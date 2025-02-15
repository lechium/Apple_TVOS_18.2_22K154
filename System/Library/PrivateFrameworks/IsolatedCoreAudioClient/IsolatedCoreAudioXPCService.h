//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface IsolatedCoreAudioXPCService
{
    shared_ptr_e0b52610 _mServerSideSwitchboard;	// 8 = 0x8
}

- (id).cxx_construct;	// IMP=0x0000000000013331
- (void).cxx_destruct;	// IMP=0x000000000001331b
@property(nonatomic) shared_ptr_e0b52610 mServerSideSwitchboard; // @synthesize mServerSideSwitchboard=_mServerSideSwitchboard;
- (void)stopIsolatedAudioForUseCase:(unsigned int)arg1 with:(CDUnknownBlockType)arg2;	// IMP=0x00000000000130b9
- (void)startIsolatedAudioForUseCase:(unsigned int)arg1 atTime:(unsigned long long)arg2 with:(CDUnknownBlockType)arg3;	// IMP=0x0000000000012e08
- (void)startIsolatedAudioForUseCase:(unsigned int)arg1 with:(CDUnknownBlockType)arg2;	// IMP=0x0000000000012a85
- (void)getWorkgroupForIsolatedAudio:(unsigned int)arg1 with:(CDUnknownBlockType)arg2;	// IMP=0x000000000001274f
- (void)checkOutForIsolatedAudioSharedResources:(unsigned int)arg1;	// IMP=0x0000000000012480
- (void)checkInForIsolatedAudioSharedResources:(unsigned int)arg1 with:(CDUnknownBlockType)arg2;	// IMP=0x00000000000112de
- (id)initWithClientReaper:(function_9fe453b0)arg1;	// IMP=0x00000000000111f3
- (id)init;	// IMP=0x0000000000010dc7

@end

