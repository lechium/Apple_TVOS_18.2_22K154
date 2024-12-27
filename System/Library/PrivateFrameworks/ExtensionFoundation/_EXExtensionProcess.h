//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, _EXExtensionProcessHandle, _EXHostConfiguration;

@interface _EXExtensionProcess : NSObject
{
    MISSING_TYPE *_processHandle;	// 8 = 0x8
    MISSING_TYPE *_observer;	// 16 = 0x10
    MISSING_TYPE *configuration;	// 24 = 0x18
}

+ (void)extensionProcessWithConfiguration:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x006000000006b2a0
+ (id)extensionProcessWithConfiguration:(id)arg1 error:(id *)arg2;	// IMP=0x006000000006b190
- (void).cxx_destruct;	// IMP=0x000000000006b550
- (id)init;	// IMP=0x000000000006c010
- (int)rbs_pid;	// IMP=0x000000000006bf90
- (id)processPredicate;	// IMP=0x000000000006bed0
- (_Bool)matchesProcess:(id)arg1;	// IMP=0x000000000006bd80
@property(nonatomic, readonly) _EXExtensionProcessHandle *internalExtensionProcess;
@property(nonatomic, retain) _EXHostConfiguration *configuration; // @synthesize configuration;
@property(nonatomic, readonly) CDStruct_4c969caf auditToken;
@property(nonatomic, readonly) int pid;
- (void)invalidateLaunchAssertion;	// IMP=0x000000000006b9c0
@property(nonatomic, readonly) _Bool isValid;
- (void)invalidate;	// IMP=0x000000000006b870
- (id)makeXPCConnectionWithError:(id *)arg1;	// IMP=0x000000000006b690
- (id)newXPCConnectionWithError:(id *)arg1;	// IMP=0x000000000006b5d0
- (void)dealloc;	// IMP=0x000000000006b530
- (id)initWithInternalExtensionProcess:(id)arg1;	// IMP=0x000000000006b310
- (id)makeLibXPCConnectionWithError:(id *)arg1;	// IMP=0x000000000006c040

@end

