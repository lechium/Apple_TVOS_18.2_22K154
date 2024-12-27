//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, SimDevice;

__attribute__((visibility("hidden")))
@interface OSLogDevice : NSObject
{
    long long _devType;	// 8 = 0x8
    void *_mobileDeviceRef;	// 16 = 0x10
    SimDevice *_simDev;	// 24 = 0x18
    NSString *_uid;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000011d2d
@property(retain, nonatomic) NSString *uid; // @synthesize uid=_uid;
@property(retain, nonatomic) SimDevice *simDev; // @synthesize simDev=_simDev;
@property(nonatomic) void *mobileDeviceRef; // @synthesize mobileDeviceRef=_mobileDeviceRef;
@property(nonatomic) long long devType; // @synthesize devType=_devType;
- (void)dealloc;	// IMP=0x0000000000011cb8
- (id)initWithSimualatedDevice:(id)arg1;	// IMP=0x0000000000011bfc
- (id)initWithMobileDevice:(void *)arg1 andUDID:(id)arg2;	// IMP=0x0000000000011b81
- (id)description;	// IMP=0x0000000000011967
- (id)init;	// IMP=0x00000000000118fc

@end

