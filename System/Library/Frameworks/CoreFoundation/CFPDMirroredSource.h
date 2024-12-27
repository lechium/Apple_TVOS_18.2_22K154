//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CFPDSource;

__attribute__((visibility("hidden")))
@interface CFPDMirroredSource
{
    struct __CFSet *_mirroredKeys;	// 144 = 0x90
    CFPDSource *_mirrorSource;	// 152 = 0x98
}

- (void)clearCacheForReason:(struct __CFString *)arg1;	// IMP=0x0000000000189dc2
- (void)handleWritingResult:(struct __CFDictionary *)arg1;	// IMP=0x0000000000189d3d
- (CDUnknownBlockType)createDiskWrite;	// IMP=0x0000000000189bbe
- (void)drainPendingChanges;	// IMP=0x0000000000189b46
- (_Bool)enqueueNewKey:(id)arg1 value:(id)arg2 encoding:(int)arg3 inBatch:(_Bool)arg4 fromMessage:(id)arg5;	// IMP=0x00000000001899b7
- (int)cacheFileInfoForWriting:(_Bool)arg1 euid:(unsigned int)arg2 egid:(unsigned int)arg3 didCreate:(_Bool *)arg4;	// IMP=0x00000000001896de
- (void)unlock;	// IMP=0x000000000018966f
- (void)lock;	// IMP=0x0000000000189600
- (id)acceptMessage:(id)arg1;	// IMP=0x00000000001894f3
- (void)dealloc;	// IMP=0x000000000018947e
- (id)initWithDomain:(struct __CFString *)arg1 userName:(struct __CFString *)arg2 byHost:(_Bool)arg3 managed:(_Bool)arg4 mirroredKeys:(struct __CFArray *)arg5 shmemIndex:(short)arg6 daemon:(id)arg7;	// IMP=0x00000000001892fb

@end

