//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSString;

@interface _TtC18ReplicatorServicesP33_E12FEAD95517CBB4AB29168F11BCC1CA6Client : NSObject
{
    MISSING_TYPE *pid;	// 8 = 0x8
    MISSING_TYPE *connection;	// 16 = 0x10
    MISSING_TYPE *lock;	// 24 = 0x18
    MISSING_TYPE *delegate;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000076470
- (id)init;	// IMP=0x0000000000076410
@property(nonatomic, readonly) NSString *description;
- (_Bool)eraseAndReturnError:(id *)arg1;	// IMP=0x0000000000076b40
- (id)clientDescriptorsAndReturnError:(id *)arg1;	// IMP=0x00000000000769b0
- (id)devicesAndReturnError:(id *)arg1;	// IMP=0x0000000000076820
- (id)recordsAndReturnError:(id *)arg1;	// IMP=0x00000000000767a0
- (id)localDeviceIDAndReturnError:(id *)arg1;	// IMP=0x0000000000076570

@end

