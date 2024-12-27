//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface AVOutputDeviceFrecencyManager : NSObject
{
}

+ (id)_frecentsWriter;	// IMP=0x00800000000e9af9
+ (_Bool)_migrateFrecentsFromCFPreferencesToFrecentsFilePath:(id)arg1;	// IMP=0x00800000000e97ac
+ (id)_frecentsReaderAfterMigrationIfNecessary;	// IMP=0x00800000000e94f7
+ (id)_frecentsFilePath;	// IMP=0x00800000000e92e5
+ (id)_frecentsContainerPath;	// IMP=0x00800000000e9244
+ (id)_applicationSupportPath;	// IMP=0x00800000000e91c8
+ (double)frecencyScoreForDeviceID:(id)arg1;	// IMP=0x00800000000e8fd3
+ (void)updateFrecencyListForDeviceID:(id)arg1;	// IMP=0x00800000000e8737

@end

