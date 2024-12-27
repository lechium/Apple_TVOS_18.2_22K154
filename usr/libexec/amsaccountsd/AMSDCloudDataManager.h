//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AMSThreadSafeDictionary, NSString;
@protocol AMSDCloudDataManagerDataSource;

@interface AMSDCloudDataManager : NSObject
{
    AMSThreadSafeDictionary *_containers;	// 8 = 0x8
    id <AMSDCloudDataManagerDataSource> _dataSource;	// 16 = 0x10
}

+ (void)handleRecordZoneFetchFailed:(id)arg1 inDatabase:(id)arg2 withError:(id)arg3;	// IMP=0x002000000000e0a9
+ (unsigned long long)multiUserStatusForRecord:(id)arg1 withHomeManager:(id)arg2;	// IMP=0x001000000000d7c7
- (void).cxx_destruct;	// IMP=0x002000000000e68e
@property(retain, nonatomic) id <AMSDCloudDataManagerDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) AMSThreadSafeDictionary *containers; // @synthesize containers=_containers;
- (void)handlePushNotification:(id)arg1;	// IMP=0x001000000000e040
- (id)containerWithContainerIdentifier:(id)arg1 options:(id)arg2;	// IMP=0x001000000000daed
- (id)containerWithContainerIdentifier:(id)arg1;	// IMP=0x001000000000dad9
@property(readonly, nonatomic) NSString *pushNotificationTopic;
- (id)initWithDataSource:(id)arg1;	// IMP=0x001000000000da04

@end

