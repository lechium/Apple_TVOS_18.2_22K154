//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMDAccountHandle, NSDictionary;

__attribute__((visibility("hidden")))
@interface HMDRemoteAccountMessageDestination
{
    _Bool _multicast;	// 8 = 0x8
    _Bool _restrictToResidentCapable;	// 9 = 0x9
    HMDAccountHandle *_handle;	// 16 = 0x10
    NSDictionary *_deviceCapabilities;	// 24 = 0x18
}

+ (id)shortDescription;	// IMP=0x00600000007a6ccd
- (void).cxx_destruct;	// IMP=0x00000000007a6c9c
@property(readonly, copy) NSDictionary *deviceCapabilities; // @synthesize deviceCapabilities=_deviceCapabilities;
@property _Bool restrictToResidentCapable; // @synthesize restrictToResidentCapable=_restrictToResidentCapable;
@property(readonly, getter=isMulticast) _Bool multicast; // @synthesize multicast=_multicast;
@property(readonly, copy) HMDAccountHandle *handle; // @synthesize handle=_handle;
- (id)remoteDestinationString;	// IMP=0x00000000007a6bec
- (id)privateDescription;	// IMP=0x00000000007a6bd8
- (id)description;	// IMP=0x00000000007a6bc4
- (id)debugDescription;	// IMP=0x00000000007a6bad
- (id)descriptionWithPointer:(_Bool)arg1;	// IMP=0x00000000007a69ff
- (id)shortDescription;	// IMP=0x00000000007a693d
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000007a677b
- (unsigned long long)hash;	// IMP=0x00000000007a66ef
- (id)initWithTarget:(id)arg1 handle:(id)arg2 multicast:(_Bool)arg3 deviceCapabilities:(id)arg4;	// IMP=0x00000000007a65d3
- (id)initWithTarget:(id)arg1 handle:(id)arg2 multicast:(_Bool)arg3;	// IMP=0x00000000007a65be
- (id)initWithTarget:(id)arg1;	// IMP=0x00000000007a650a

@end

