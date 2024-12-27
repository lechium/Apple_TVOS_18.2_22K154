//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class NSString;
@protocol HMDUnifiedLanguageValueListSettingDataProviderDataSource;

__attribute__((visibility("hidden")))
@interface HMDUnifiedLanguageValueListSettingDataProvider : HMFObject
{
    id <HMDUnifiedLanguageValueListSettingDataProviderDataSource> _dataSource;	// 8 = 0x8
}

+ (id)logCategory;	// IMP=0x00100000004cc32e
+ (id)unifyLanguageValues:(id)arg1 withValues:(id)arg2;	// IMP=0x00100000004cc283
- (void).cxx_destruct;	// IMP=0x00000000004cc272
@property __weak id <HMDUnifiedLanguageValueListSettingDataProviderDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (id)languageValueList;	// IMP=0x00000000004cc087
- (id)dataSourceDataProviders;	// IMP=0x00000000004cbf4b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

