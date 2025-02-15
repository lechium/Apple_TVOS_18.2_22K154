//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BLSHInternalTapToRadarDialog;
@protocol OS_os_log;

__attribute__((visibility("hidden")))
@interface BLSHInternalTapToRadarManager : NSObject
{
    BLSHInternalTapToRadarDialog *_ttrDialog;	// 8 = 0x8
    NSObject<OS_os_log> *_log;	// 16 = 0x10
}

+ (id)sharedTapToRadarManager;	// IMP=0x006000000003e170
- (void).cxx_destruct;	// IMP=0x000000000003e4a3
- (void)requestTapToRadar:(id)arg1 log:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000003e205
- (id)_init;	// IMP=0x000000000003e141
- (id)init;	// IMP=0x000000000003e133

@end

