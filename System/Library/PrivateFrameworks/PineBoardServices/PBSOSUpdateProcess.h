//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class PBSOSUpdateDescriptor, PBSOSUpdateProcessScanOptions;

__attribute__((visibility("hidden")))
@interface PBSOSUpdateProcess : NSObject
{
}

- (id)init;	// IMP=0x000000000007c5c0
- (id)currentUpdate;	// IMP=0x000000000007c5b0
- (void)purgeUpdate;	// IMP=0x000000000007c5a0
- (void)cancelWithReason:(unsigned long long)arg1;	// IMP=0x000000000007c590
- (void)resumeAfterPause;	// IMP=0x000000000007c580
- (void)setAssetDownloadIsDiscretionaryWithIsDiscretionary:(_Bool)arg1;	// IMP=0x000000000007c570
- (_Bool)IsAwaitingRebootToApply;	// IMP=0x000000000007c560
- (_Bool)IsAssetReadyToInstall;	// IMP=0x000000000007c550
- (_Bool)IsRunning;	// IMP=0x000000000007c540
- (_Bool)IsScanning;	// IMP=0x000000000007c530
- (unsigned long long)trigger;	// IMP=0x000000000007c520
- (void)applyOnlyWithDescriptor:(PBSOSUpdateDescriptor *)arg1 options:(PBSOSUpdateProcessScanOptions *)arg2 completionHandler:(void (^)(void))arg3;	// IMP=0x000000000007c3e0
- (void)downloadOnlyWithOptions:(PBSOSUpdateProcessScanOptions *)arg1 completionHandler:(void (^)(void))arg2;	// IMP=0x000000000007c260
- (void)scanForUpdateWithAction:(unsigned long long)arg1 options:(PBSOSUpdateProcessScanOptions *)arg2 completionHandler:(void (^)(void))arg3;	// IMP=0x000000000007c0d0
- (void)startWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000007c080
- (id)initWithDelegate:(id)arg1;	// IMP=0x000000000007c050

@end

