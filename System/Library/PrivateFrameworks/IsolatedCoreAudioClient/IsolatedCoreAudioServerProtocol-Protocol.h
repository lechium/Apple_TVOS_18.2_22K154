//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol IsolatedCoreAudioServerProtocol
- (void)stopIsolatedAudioForUseCase:(unsigned int)arg1 with:(void (^)(int))arg2;
- (void)startIsolatedAudioForUseCase:(unsigned int)arg1 atTime:(unsigned long long)arg2 with:(void (^)(int))arg3;
- (void)startIsolatedAudioForUseCase:(unsigned int)arg1 with:(void (^)(int))arg2;
- (void)getWorkgroupForIsolatedAudio:(unsigned int)arg1 with:(void (^)(IOThreadXPCWorkgroupTransporter *))arg2;
- (void)checkOutForIsolatedAudioSharedResources:(unsigned int)arg1;
- (void)checkInForIsolatedAudioSharedResources:(unsigned int)arg1 with:(void (^)(IOThreadXPCSemaphoreTransporter *, IOThreadXPCMappedMemoryTransporter *))arg2;
@end

