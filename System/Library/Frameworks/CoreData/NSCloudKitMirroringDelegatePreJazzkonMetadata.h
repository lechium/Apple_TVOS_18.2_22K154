//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSPersistentHistoryToken, NSPersistentStore, NSString;

__attribute__((visibility("hidden")))
@interface NSCloudKitMirroringDelegatePreJazzkonMetadata : NSObject
{
    NSPersistentStore *_store;	// 8 = 0x8
    _Bool _loaded;	// 16 = 0x10
    _Bool _hasChanges;	// 17 = 0x11
    _Bool _hasInitializedZone;	// 18 = 0x12
    _Bool _hasInitializedZoneSubscription;	// 19 = 0x13
    _Bool _hasInitializedDatabaseSubscription;	// 20 = 0x14
    NSString *_ckIdentityRecordName;	// 24 = 0x18
    _Bool _hasCheckedCKIdentity;	// 32 = 0x20
    NSDictionary *_keyToPreviousServerChangeToken;	// 40 = 0x28
    NSPersistentHistoryToken *_lastHistoryToken;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000002e6679
- (id)description;	// IMP=0x00000000002e5583
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002e53ae
- (void)dealloc;	// IMP=0x00000000002e533f
- (id)initWithStore:(id)arg1;	// IMP=0x00000000002e52ed

@end

