//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSDictionary, NSURL, PHAsset, PHAssetResource;

@interface MADFaceAssetEntry : NSObject
{
    _Bool _isAnalysisCompleteFromComputeSync;	// 8 = 0x8
    int _status;	// 12 = 0xc
    PHAsset *_asset;	// 16 = 0x10
    unsigned long long _previousStatus;	// 24 = 0x18
    unsigned long long _previousAttempts;	// 32 = 0x20
    NSDate *_lastAttemptDate;	// 40 = 0x28
    NSDate *_currentAttemptDate;	// 48 = 0x30
    NSDictionary *_results;	// 56 = 0x38
    PHAssetResource *_downloadResource;	// 64 = 0x40
    NSURL *_downloadURL;	// 72 = 0x48
}

+ (id)entryWithAsset:(id)arg1 previousStatus:(unsigned long long)arg2 previousAttempts:(unsigned long long)arg3 andLastAttemptDate:(id)arg4;	// IMP=0x00400000000c5bbe
- (void).cxx_destruct;	// IMP=0x00200000000c5d10
@property(nonatomic) _Bool isAnalysisCompleteFromComputeSync; // @synthesize isAnalysisCompleteFromComputeSync=_isAnalysisCompleteFromComputeSync;
@property(retain, nonatomic) NSURL *downloadURL; // @synthesize downloadURL=_downloadURL;
@property(retain, nonatomic) PHAssetResource *downloadResource; // @synthesize downloadResource=_downloadResource;
@property(retain, nonatomic) NSDictionary *results; // @synthesize results=_results;
@property(readonly, nonatomic) NSDate *currentAttemptDate; // @synthesize currentAttemptDate=_currentAttemptDate;
@property(readonly, nonatomic) NSDate *lastAttemptDate; // @synthesize lastAttemptDate=_lastAttemptDate;
@property(readonly, nonatomic) unsigned long long previousAttempts; // @synthesize previousAttempts=_previousAttempts;
@property(nonatomic) int status; // @synthesize status=_status;
@property(readonly, nonatomic) unsigned long long previousStatus; // @synthesize previousStatus=_previousStatus;
@property(readonly, nonatomic) PHAsset *asset; // @synthesize asset=_asset;
- (id)initWithAsset:(id)arg1 previousStatus:(unsigned long long)arg2 previousAttempts:(unsigned long long)arg3 andLastAttemptDate:(id)arg4;	// IMP=0x00100000000c5ab2

@end

