//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate;

@interface MADBackgroundAnalysisProgressRecord : NSObject
{
    unsigned long long _activityID;	// 8 = 0x8
    unsigned long long _analysisSubtype;	// 16 = 0x10
    NSDate *_storeDate;	// 24 = 0x18
    unsigned long long _version;	// 32 = 0x20
    unsigned long long _processedAssetCount;	// 40 = 0x28
    unsigned long long _totalAssetCount;	// 48 = 0x30
    unsigned long long _progress;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000000336598
@property(nonatomic) unsigned long long progress; // @synthesize progress=_progress;
@property(nonatomic) unsigned long long totalAssetCount; // @synthesize totalAssetCount=_totalAssetCount;
@property(nonatomic) unsigned long long processedAssetCount; // @synthesize processedAssetCount=_processedAssetCount;
@property(nonatomic) unsigned long long version; // @synthesize version=_version;
@property(retain, nonatomic) NSDate *storeDate; // @synthesize storeDate=_storeDate;
@property(nonatomic) unsigned long long analysisSubtype; // @synthesize analysisSubtype=_analysisSubtype;
@property(nonatomic) unsigned long long activityID; // @synthesize activityID=_activityID;
- (id)description;	// IMP=0x0000000000336360

@end

