//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface _TtC31TextToSpeechVoiceBankingSupport14TTSVBDataStore : NSObject
{
    MISSING_TYPE *eventSubject;	// 8 = 0x8
    MISSING_TYPE *configureation;	// 16 = 0x10
    MISSING_TYPE *voiceBankingRootURL;	// 1207962613 = 0x48000bf5
    MISSING_TYPE *queue;	// 3494218056 = 0xd0458948
    MISSING_TYPE *calloutQueue;	// 8383 = 0x20bf
    MISSING_TYPE *cloudStoreName;	// 2336751627 = 0x8b48000b
    MISSING_TYPE *localStoreName;	// 1207962613 = 0x48000bf5
    MISSING_TYPE *managedObjectModelName;	// 1221090697 = 0x48c85d89
    MISSING_TYPE *$__lazy_storage_$_cloudDatastoreURL;	// 2263416844 = 0x86e9000c
    MISSING_TYPE *$__lazy_storage_$_localDatastoreURL;	// 2337095307 = 0x8b4d3e8b
    MISSING_TYPE *$__lazy_storage_$_managedObjectModelURL;	// 51269 = 0xc845
    MISSING_TYPE *$__lazy_storage_$_container;	// 0 = 0x0
    MISSING_TYPE *queue_shouldAttemptLoad;	// 3494218056 = 0xd0458948
    MISSING_TYPE *queue_loadError;	// 8639 = 0x21bf
    MISSING_TYPE *persistentHistoryProcessingDatesPreferenceKey;	// 2336751627 = 0x8b48000b
}

- (void).cxx_destruct;	// IMP=0x000000000008c400
- (id)init;	// IMP=0x000000000008c3a0
- (void)handlePersistentStoreRemoteChange:(id)arg1;	// IMP=0x0000000000089870
- (void)handleDidResetCloudSync:(id)arg1;	// IMP=0x0000000000089580
- (void)handleWillResetCloudSync:(id)arg1;	// IMP=0x0000000000089520
- (void)handlePersistentCloudKitContainerEventChanged:(id)arg1;	// IMP=0x00000000000894d0
- (void)handleManagedObjectContextDidMergeChangesObjectIDs:(id)arg1;	// IMP=0x0000000000088d90
- (void)handleManagedObjectContextDidSaveObjectIDs:(id)arg1;	// IMP=0x0000000000088b70
- (void)handleManagedObjectContextDidChange:(id)arg1;	// IMP=0x0000000000088b20
- (void)handleManagedObjectContextDidSave:(id)arg1;	// IMP=0x0000000000088b10
- (void)handleStoresWillChange:(id)arg1;	// IMP=0x0000000000088b00

@end

