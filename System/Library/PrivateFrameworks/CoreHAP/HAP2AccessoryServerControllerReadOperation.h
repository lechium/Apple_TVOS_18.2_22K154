//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HAP2ControllerReadRequest, NSIndexSet;

__attribute__((visibility("hidden")))
@interface HAP2AccessoryServerControllerReadOperation
{
    NSIndexSet *_cachedCharacteristicIndices;	// 8 = 0x8
    HAP2ControllerReadRequest *_readRequest;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000923c2
- (void)_cleanUp;	// IMP=0x000000000009214d
- (id)_HAP2AutoUpdateCachedCountdownCharacteristic:(id)arg1;	// IMP=0x0000000000091e4d
- (void)_sendRequest;	// IMP=0x000000000009198c
- (id)initWithName:(id)arg1 controller:(id)arg2 encoding:(id)arg3 transport:(id)arg4 readRequest:(id)arg5 endpoint:(id)arg6 mimeType:(id)arg7 timeout:(double)arg8 options:(unsigned long long)arg9;	// IMP=0x00000000000918dd

@end

