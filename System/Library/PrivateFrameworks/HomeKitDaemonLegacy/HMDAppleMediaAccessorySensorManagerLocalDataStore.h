//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSUserDefaults;

__attribute__((visibility("hidden")))
@interface HMDAppleMediaAccessorySensorManagerLocalDataStore : NSObject
{
    NSUserDefaults *_defaults;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000075dd16
@property(retain, nonatomic) NSUserDefaults *defaults; // @synthesize defaults=_defaults;
- (void)fetchSensorUUIDWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000075dc42
- (void)saveSensorUUID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000075db84
- (void)saveSensorUUID:(id)arg1;	// IMP=0x000000000075db70
- (id)initWithUserDefaults:(id)arg1;	// IMP=0x000000000075db08
- (id)init;	// IMP=0x000000000075daae

@end

