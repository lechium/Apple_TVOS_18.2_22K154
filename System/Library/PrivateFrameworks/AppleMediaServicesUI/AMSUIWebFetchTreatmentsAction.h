//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSDate;

__attribute__((visibility("hidden")))
@interface AMSUIWebFetchTreatmentsAction
{
    _Bool _includeExperimentData;	// 8 = 0x8
    _Bool _includePayload;	// 9 = 0x9
    NSArray *_areaIds;	// 16 = 0x10
    NSDate *_endDate;	// 24 = 0x18
    NSDate *_startDate;	// 32 = 0x20
}

+ (id)dictionaryRepresentationForTreatment:(id)arg1;	// IMP=0x000000000008b0c6
+ (id)dateFormatter;	// IMP=0x000000000008b0ad
- (void).cxx_destruct;	// IMP=0x000000000008cdfc
@property(retain, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property(nonatomic) _Bool includePayload; // @synthesize includePayload=_includePayload;
@property(nonatomic) _Bool includeExperimentData; // @synthesize includeExperimentData=_includeExperimentData;
@property(retain, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property(retain, nonatomic) NSArray *areaIds; // @synthesize areaIds=_areaIds;
- (id)runAction;	// IMP=0x000000000008b89d
- (id)initWithJSObject:(id)arg1 context:(id)arg2;	// IMP=0x000000000008b265

@end

