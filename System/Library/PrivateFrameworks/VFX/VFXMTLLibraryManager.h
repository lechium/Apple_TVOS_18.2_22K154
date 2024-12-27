//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMapTable, VFXMTLLibrary;
@protocol MTLDevice, MTLLibrary, OS_dispatch_group, OS_dispatch_queue;

@interface VFXMTLLibraryManager : NSObject
{
    id <MTLDevice> _device;	// 8 = 0x8
    VFXMTLLibrary *_frameworkLibrary;	// 16 = 0x10
    VFXMTLLibrary *_defaultLibrary;	// 24 = 0x18
    struct __CFXEngineStats *__engineStats;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_deviceQueue;	// 40 = 0x28
    NSObject<OS_dispatch_group> *_shaderCompilationGroup;	// 48 = 0x30
    id <MTLLibrary> _commonProfileCacheLibrary;	// 56 = 0x38
    NSDictionary *_commonProfilePrecompiledFunctions;	// 64 = 0x40
    NSMapTable *_availableLibraries;	// 72 = 0x48
    struct __CFDictionary *_availableCompiledLibraries;	// 80 = 0x50
    struct os_unfair_lock_s _availableCompiledLibrariesLock;	// 88 = 0x58
}

+ (id)hashCodeForSource:(id)arg1 macros:(id)arg2;	// IMP=0x006000000019e99a
- (void)libraryForProgramDesc:(CDStruct_5ad7ba6b)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000019f092
- (id)libraryForSourceCode:(id)arg1 options:(id)arg2;	// IMP=0x000000000019ef55
- (id)libraryForFile:(id)arg1;	// IMP=0x000000000019ede3
- (id)deviceQueue;	// IMP=0x000000000019edd9
- (void)_setEngineStats:(struct __CFXEngineStats *)arg1;	// IMP=0x000000000019edcf
- (void)waitForShadersCompilation;	// IMP=0x000000000019edba
- (id)shaderCompilationGroup;	// IMP=0x000000000019edb0
- (id)commonProfileCacheLibrary;	// IMP=0x000000000019eda6
- (id)defaultLibrary;	// IMP=0x000000000019ecc3
- (id)frameworkLibrary;	// IMP=0x000000000019ecad
- (void)clearCompiledLibraries;	// IMP=0x000000000019ec82
- (id)device;	// IMP=0x000000000019ec78
- (void)dealloc;	// IMP=0x000000000019e929
- (id)hotReloadableLibrary;	// IMP=0x000000000019e921
- (id)initWithDevice:(id)arg1;	// IMP=0x000000000019e4cd

@end

