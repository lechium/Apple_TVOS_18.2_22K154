//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMDAccountRegistry;

__attribute__((visibility("hidden")))
@interface __HMDDeviceController
{
    HMDAccountRegistry *_accountRegistry;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000008d3c75
@property(readonly) HMDAccountRegistry *accountRegistry; // @synthesize accountRegistry=_accountRegistry;
- (void)__handleAddedDevice:(id)arg1;	// IMP=0x00000000008d397e
- (void)__handleAddedAccount:(id)arg1;	// IMP=0x00000000008d3745
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x00000000008d342b
- (void)updateWithDevice:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000008d2ebc
- (void)dealloc;	// IMP=0x00000000008d2e1f
- (id)initWithDevice:(id)arg1 accountRegistry:(id)arg2;	// IMP=0x00000000008d2cae

@end

