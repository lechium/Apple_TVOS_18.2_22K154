//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitMatter/NSObject-Protocol.h>

@class MTRDeviceController, NSDictionary, NSString;
@protocol NSSecureCoding;

@protocol MTRDeviceControllerStorageDelegate <NSObject>
- (_Bool)controller:(MTRDeviceController *)arg1 removeValueForKey:(NSString *)arg2 securityLevel:(unsigned long long)arg3 sharingType:(unsigned long long)arg4;
- (_Bool)controller:(MTRDeviceController *)arg1 storeValue:(id <NSSecureCoding>)arg2 forKey:(NSString *)arg3 securityLevel:(unsigned long long)arg4 sharingType:(unsigned long long)arg5;
- (id <NSSecureCoding>)controller:(MTRDeviceController *)arg1 valueForKey:(NSString *)arg2 securityLevel:(unsigned long long)arg3 sharingType:(unsigned long long)arg4;

@optional
- (_Bool)controller:(MTRDeviceController *)arg1 storeValues:(NSDictionary *)arg2 securityLevel:(unsigned long long)arg3 sharingType:(unsigned long long)arg4;
- (NSDictionary *)valuesForController:(MTRDeviceController *)arg1 securityLevel:(unsigned long long)arg2 sharingType:(unsigned long long)arg3;
@end

