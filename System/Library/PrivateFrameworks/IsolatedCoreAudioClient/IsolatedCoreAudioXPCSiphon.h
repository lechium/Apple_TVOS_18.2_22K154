//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableSet;

__attribute__((visibility("hidden")))
@interface IsolatedCoreAudioXPCSiphon
{
    NSMutableSet *_reverseConnections;	// 8 = 0x8
    shared_ptr_7587ccbe _mSiphon;	// 16 = 0x10
    shared_ptr_bf3d0d8a _mClientMap;	// 32 = 0x20
}

+ (shared_ptr_bf3d0d8a)initClientMap;	// IMP=0x001000000001a148
- (id).cxx_construct;	// IMP=0x00000000000197d1
- (void).cxx_destruct;	// IMP=0x000000000001978f
@property(retain, nonatomic) NSMutableSet *reverseConnections; // @synthesize reverseConnections=_reverseConnections;
@property(nonatomic) shared_ptr_bf3d0d8a mClientMap; // @synthesize mClientMap=_mClientMap;
@property(nonatomic) shared_ptr_7587ccbe mSiphon; // @synthesize mSiphon=_mSiphon;
- (void)requestAudio:(unsigned int)arg1 atTime:(unsigned long long)arg2 atSample:(unsigned long long)arg3 with:(CDUnknownBlockType)arg4;	// IMP=0x00000000000194ea
- (void)stopIO:(unsigned int)arg1 with:(CDUnknownBlockType)arg2;	// IMP=0x0000000000018f7d
- (void)startIO:(unsigned int)arg1 with:(CDUnknownBlockType)arg2;	// IMP=0x0000000000018929
- (void)setAudioLapseCallback:(unsigned int)arg1 usingXPC:(id)arg2 with:(CDUnknownBlockType)arg3;	// IMP=0x0000000000018852
- (void)setAudioAvailabilityCallback:(unsigned int)arg1 usingXPC:(id)arg2 with:(CDUnknownBlockType)arg3;	// IMP=0x0000000000018332
- (void)connectToUseCase:(unsigned int)arg1 endpoint:(id)arg2;	// IMP=0x0000000000018065
- (void)createClientReaper;	// IMP=0x0000000000017f53
- (id)initWithClientMap:(shared_ptr_bf3d0d8a)arg1 andServer:(shared_ptr_65a24525)arg2;	// IMP=0x000000000001777c
- (id)init;	// IMP=0x000000000001702d

@end

