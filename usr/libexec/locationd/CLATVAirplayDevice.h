//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSUUID;

@interface CLATVAirplayDevice : NSObject
{
    int _RSSI;	// 8 = 0x8
    unsigned int _ipv4;	// 12 = 0xc
    int _channel;	// 16 = 0x10
    NSUUID *_uuid;	// 24 = 0x18
    time_point_60143bad _timestamp;	// 32 = 0x20
}

- (id).cxx_construct;	// IMP=0x00200000005b20d0
@property(readonly, nonatomic) int channel; // @synthesize channel=_channel;
@property(readonly, nonatomic) unsigned int ipv4; // @synthesize ipv4=_ipv4;
@property(readonly, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
@property(readonly, nonatomic) int RSSI; // @synthesize RSSI=_RSSI;
@property(readonly, nonatomic) time_point_60143bad timestamp; // @synthesize timestamp=_timestamp;
- (void)dealloc;	// IMP=0x00100000005b2067
- (id)initWithTimestamp:(time_point_60143bad)arg1 RSSI:(int)arg2 uuid:(id)arg3 ipv4:(unsigned int)arg4 channel:(int)arg5;	// IMP=0x00100000005b1fea
- (struct CLATVAirplayDeviceInternal)cppObject;	// IMP=0x00100000005b20de

@end

