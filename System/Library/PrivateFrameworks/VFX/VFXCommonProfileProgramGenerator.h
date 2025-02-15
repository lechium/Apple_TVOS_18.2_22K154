//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface VFXCommonProfileProgramGenerator : NSObject
{
    struct os_unfair_lock_s _programMutex;	// 8 = 0x8
    struct __CFDictionary *_shaders;	// 16 = 0x10
    struct __CFDictionary *_trackedResourcesToHashcode;	// 24 = 0x18
}

+ (id)generatorWithProfile:(int)arg1 allowingHotReload:(_Bool)arg2;	// IMP=0x00600000000a10b2
- (void)releaseProgramForResource:(id)arg1;	// IMP=0x00000000000a13d8
- (struct __CFXFXProgram *)programWithHashCode:(struct __CFXProgramHashCode *)arg1 engineContext:(struct __CFXEngineContext *)arg2 trackedResource:(id)arg3 introspectionDataPtr:(void *)arg4;	// IMP=0x00000000000a1130
- (void)emptyShaderCache;	// IMP=0x00000000000a1091
@property(readonly, nonatomic) int profile;
- (void)dealloc;	// IMP=0x00000000000a1005
- (id)init;	// IMP=0x00000000000a0ecc

@end

