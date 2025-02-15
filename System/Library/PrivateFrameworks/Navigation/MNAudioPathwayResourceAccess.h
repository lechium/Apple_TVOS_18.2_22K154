//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface MNAudioPathwayResourceAccess : NSObject
{
    NSObject<OS_dispatch_queue> *_pickableRoutesQueue;	// 8 = 0x8
    NSDictionary *_hfpRoute;	// 16 = 0x10
    unsigned long long _forLoggingOnly_pickableRoutesCount;	// 24 = 0x18
    _Bool _enableHFPUse;	// 32 = 0x20
    _Bool _wantsVolumeControl;	// 33 = 0x21
}

- (void).cxx_destruct;	// IMP=0x0000000000113e6e
@property(nonatomic) _Bool wantsVolumeControl; // @synthesize wantsVolumeControl=_wantsVolumeControl;
@property(nonatomic) _Bool enableHFPUse; // @synthesize enableHFPUse=_enableHFPUse;
- (id)initWithHFPEnabled:(_Bool)arg1;	// IMP=0x0000000000113e02

@end

