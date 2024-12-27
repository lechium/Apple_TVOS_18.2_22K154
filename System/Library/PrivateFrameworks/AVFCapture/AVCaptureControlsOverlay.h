//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVWeakReference;

__attribute__((visibility("hidden")))
@interface AVCaptureControlsOverlay : NSObject
{
    AVWeakReference *_sessionReference;	// 8 = 0x8
}

+ (void)initialize;	// IMP=0x0060000000024f59
- (void)invalidate;	// IMP=0x000000000002502f
- (void)activate;	// IMP=0x0000000000025029
- (void)_updateControlIsolated:(id)arg1;	// IMP=0x0000000000025023
- (void)updateControl:(id)arg1;	// IMP=0x000000000002501d
- (void)_sendControlsIsolated;	// IMP=0x0000000000025017
- (void)rebuildControls;	// IMP=0x0000000000025011
- (void)updateControls:(id)arg1;	// IMP=0x000000000002500b
- (void)dealloc;	// IMP=0x0000000000024fd0
- (id)initWithSession:(id)arg1;	// IMP=0x0000000000024f6a

@end

