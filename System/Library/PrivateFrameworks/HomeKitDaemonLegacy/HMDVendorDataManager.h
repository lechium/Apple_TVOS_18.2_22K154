//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMFTimer, NSDictionary, NSObject, NSString, NSURL, NSURLSession;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDVendorDataManager : HMFObject
{
    NSObject<OS_dispatch_queue> *_workQueue;	// 8 = 0x8
    NSURLSession *_urlSession;	// 16 = 0x10
    HMFTimer *_fetchTimer;	// 24 = 0x18
    long long _dataVersion;	// 32 = 0x20
    NSDictionary *_collectionsByManufacturer;	// 40 = 0x28
    NSDictionary *_entriesByProductData;	// 48 = 0x30
}

+ (id)logCategory;	// IMP=0x00100000007f8637
+ (id)dbURL;	// IMP=0x00100000007f8607
+ (id)sharedVendorDataManager;	// IMP=0x00100000007f85d7
- (void).cxx_destruct;	// IMP=0x00000000007f7cce
@property(retain) NSDictionary *entriesByProductData; // @synthesize entriesByProductData=_entriesByProductData;
@property(retain) NSDictionary *collectionsByManufacturer; // @synthesize collectionsByManufacturer=_collectionsByManufacturer;
@property long long dataVersion; // @synthesize dataVersion=_dataVersion;
@property(readonly, nonatomic) HMFTimer *fetchTimer; // @synthesize fetchTimer=_fetchTimer;
@property(readonly, nonatomic) NSURLSession *urlSession; // @synthesize urlSession=_urlSession;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
- (void)timerDidFire:(id)arg1;	// IMP=0x00000000007f7bba
- (_Bool)_parseManufacturersList:(id)arg1 collectionsByManufacturer:(id *)arg2 entriesByProductData:(id *)arg3;	// IMP=0x00000000007f6da4
- (id)_parseVendorModelEntryForManufacturer:(id)arg1 model:(id)arg2 dictionary:(id)arg3;	// IMP=0x00000000007f6756
- (id)_modelsStringForManufacturer:(id)arg1 model:(id)arg2 dictionary:(id)arg3 key:(id)arg4;	// IMP=0x00000000007f6481
- (_Bool)_parseDatabaseFromDictionary:(id)arg1 dataVersion:(long long *)arg2 collectionsByManufacturer:(id *)arg3 entriesByProductData:(id *)arg4;	// IMP=0x00000000007f4c37
- (void)_handleDataFromServer:(id)arg1;	// IMP=0x00000000007f46da
- (void)_handleServerResponse:(id)arg1 withData:(id)arg2 error:(id)arg3;	// IMP=0x00000000007f43c7
- (void)_fetchDataFromServer;	// IMP=0x00000000007f3f60
- (void)_start;	// IMP=0x00000000007f3eef
- (void)_loadDatabaseFromLocalFiles;	// IMP=0x00000000007f3e8a
- (_Bool)_loadDatabaseFromFilePath:(id)arg1 fileDescription:(id)arg2;	// IMP=0x00000000007f3e04
- (_Bool)_loadDatabaseFromFileURL:(id)arg1 fileDescription:(id)arg2;	// IMP=0x00000000007f3ad9
- (_Bool)_loadDatabaseFromDictionary:(id)arg1;	// IMP=0x00000000007f3a20
@property(readonly, nonatomic) NSURL *urlForBundledInternalPlist;
@property(readonly, nonatomic) NSURL *urlForBundledPlist;
- (_Bool)databaseContainsManufacturer:(id)arg1;	// IMP=0x00000000007f38ff
- (id)vendorModelEntryForProductData:(id)arg1;	// IMP=0x00000000007f3718
- (id)vendorModelEntryForManufacturer:(id)arg1 model:(id)arg2;	// IMP=0x00000000007f3646
- (id)modelCollectionForManufacturer:(id)arg1;	// IMP=0x00000000007f3550
- (id)initWithDefaults;	// IMP=0x00000000007f2f1c
- (id)initWithWorkQueue:(id)arg1 urlSession:(id)arg2 fetchTimer:(id)arg3;	// IMP=0x00000000007f2e3f
- (id)init;	// IMP=0x00000000007f2d97

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

