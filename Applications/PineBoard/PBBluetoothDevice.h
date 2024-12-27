//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface PBBluetoothDevice : NSObject
{
    _Bool _connected;	// 8 = 0x8
    NSString *_name;	// 16 = 0x10
    unsigned long long _type;	// 24 = 0x18
    unsigned long long _vendorIdentifier;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x002000000007a95d
@property(readonly, nonatomic) unsigned long long vendorIdentifier; // @synthesize vendorIdentifier=_vendorIdentifier;
@property(nonatomic, getter=isConnected) _Bool connected; // @synthesize connected=_connected;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (unsigned long long)hash;	// IMP=0x001000000007a80c
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000007a50f
- (id)description;	// IMP=0x001000000007a41a
- (id)initWithBluetoothDevice:(id)arg1;	// IMP=0x001000000007a304
- (id)initWithPeripheral:(id)arg1;	// IMP=0x001000000007a1f8

@end

