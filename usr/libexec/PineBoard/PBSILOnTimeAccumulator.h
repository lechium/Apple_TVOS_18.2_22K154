//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface PBSILOnTimeAccumulator : NSObject
{
}

+ (void)_stopAllTimers;	// IMP=0x004000000006a992
+ (void)_startPersistentTimer;	// IMP=0x001000000006a7eb
+ (void)_startDefaultsTimer;	// IMP=0x001000000006a644
+ (void)_writeOnTimeToDefault;	// IMP=0x001000000006a4aa
+ (void)_persistOnTimeToPersistentStorage;	// IMP=0x001000000006a2cf
+ (long long)_currentPersistedSILOnTimeMinutes;	// IMP=0x001000000006a1e7
+ (_Bool)_accumulationEnabled;	// IMP=0x0010000000069f51
+ (_Bool)_booleanFromData:(struct __CFData *)arg1;	// IMP=0x0010000000069e6e
+ (double)currentAccumulatedOnTimeMinutes;	// IMP=0x0010000000069d8d
+ (_Bool)accumulatingOnTime;	// IMP=0x0010000000069d7a
+ (void)adjustSILBrightness;	// IMP=0x0010000000069d74
+ (void)persistSILOnTimeImmediately;	// IMP=0x0010000000069d43
+ (void)noteSILOff;	// IMP=0x0010000000069cbc
+ (void)noteSILOn;	// IMP=0x0010000000069c18

@end

