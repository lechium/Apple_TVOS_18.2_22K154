//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface OverlayLayerDataSourceRenderTargetSizeObserver : NSObject
{
    struct CGSize _size;	// 8 = 0x8
    struct read_write_lock _mtx;	// 24 = 0x18
}

- (id).cxx_construct;	// IMP=0x0000000000b5d470
- (void).cxx_destruct;	// IMP=0x0000000000b5d440
@property(readonly, nonatomic) struct CGSize size;
- (void)sizeDidChange:(struct CGSize)arg1;	// IMP=0x0000000000b5d350

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

