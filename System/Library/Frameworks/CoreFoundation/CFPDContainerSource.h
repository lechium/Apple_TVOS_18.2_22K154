//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface CFPDContainerSource
{
    struct __CFString *_containerPath;	// 144 = 0x90
}

- (void)dealloc;	// IMP=0x00000000001882da
- (struct __CFString *)container;	// IMP=0x00000000001882ce
- (id)initWithDomain:(struct __CFString *)arg1 userName:(struct __CFString *)arg2 container:(struct __CFString *)arg3 byHost:(_Bool)arg4 managed:(_Bool)arg5 shmemIndex:(short)arg6 daemon:(id)arg7;	// IMP=0x000000000018822d

@end

