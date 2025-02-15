//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface MSVSystemDialogManager : NSObject
{
    struct __CFDictionary *_registeredSystemDialogs;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_serialQueue;	// 16 = 0x10
}

+ (id)sharedManager;	// IMP=0x0060000000049d5e
- (void).cxx_destruct;	// IMP=0x0000000000049cb8
- (void)unregisterSystemDialogWithUserNotification:(struct __CFUserNotification *)arg1;	// IMP=0x0000000000049c69
- (id)systemDialogForUserNotification:(struct __CFUserNotification *)arg1;	// IMP=0x0000000000049bac
- (void)registerSystemDialog:(id)arg1 forUserNotification:(struct __CFUserNotification *)arg2;	// IMP=0x0000000000049b0b
- (void)dealloc;	// IMP=0x0000000000049ad1
- (id)init;	// IMP=0x0000000000049a52

@end

