//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface VKStylesheetVendorResourceManifestTileGroupObserverProxy : NSObject
{
    struct weak_ptr<md::StylesheetVendor> _vendor;	// 8 = 0x8
}

- (id).cxx_construct;	// IMP=0x0000000000f343a0
- (void).cxx_destruct;	// IMP=0x0000000000f34380
- (void)resourceManifestManagerDidChangeActiveTileGroup:(id)arg1;	// IMP=0x0000000000f34320
- (void)resourceManifestManagerWillChangeActiveTileGroup:(id)arg1;	// IMP=0x0000000000f342b0
- (void)dealloc;	// IMP=0x0000000000f341f0
- (id)initWithStylesheetVendor:(shared_ptr_dd2d1f5e)arg1;	// IMP=0x0000000000f34110

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

