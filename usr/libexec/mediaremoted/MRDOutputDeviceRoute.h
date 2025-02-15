//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE, MRAVOutputDevice;

@interface MRDOutputDeviceRoute
{
    MRAVOutputDevice *_outputDevice;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00200000001a182f
@property(readonly, nonatomic) MRAVOutputDevice *outputDevice; // @synthesize outputDevice=_outputDevice;
- (_Bool)matchesUniqueIdentifier:(id)arg1;	// IMP=0x00100000001a1801
- (id)extendedInfo;	// IMP=0x00100000001a1798
- (id)dictionary;	// IMP=0x00100000001a147e
- (_Bool)canBeDefaultSystemRoute;	// IMP=0x00100000001a1476
- (_Bool)canBeDefaultRoute;	// IMP=0x00100000001a146e
- (_Bool)isSpeakerRoute;	// IMP=0x00100000001a13ce
- (_Bool)isPicked;	// IMP=0x00100000001a11c3
- (_Bool)isOutputRoute;	// IMP=0x00100000001a11bb
- (_Bool)isInputRoute;	// IMP=0x00100000001a11b3
- (MISSING_TYPE *)modelName;	// IMP=0x00100000001a1196
- (id)type;	// IMP=0x00100000001a10f0
- (id)name;	// IMP=0x00100000001a10d3
- (id)MACAddress;	// IMP=0x00100000001a10b6
- (id)uniqueIdentifier;	// IMP=0x00100000001a103f
- (id)description;	// IMP=0x00100000001a0fc3
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000001a0f31
- (unsigned long long)hash;	// IMP=0x00100000001a0f14
- (id)initWithOutputDevice:(id)arg1;	// IMP=0x00100000001a0ea6

@end

