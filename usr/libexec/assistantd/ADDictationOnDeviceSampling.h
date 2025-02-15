//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface ADDictationOnDeviceSampling : NSObject
{
    _Bool _isRequestConsideredForSampling;	// 8 = 0x8
    long long _numberOfRequestsTillNow;	// 16 = 0x10
    NSDate *_currentSamplingDate;	// 24 = 0x18
    NSMutableDictionary *_dictationSamplingVaribles;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_fileQueue;	// 40 = 0x28
}

+ (id)_readDictationSampledPlist;	// IMP=0x0040000000263a19
+ (id)sharedManager;	// IMP=0x00100000002639e9
- (void).cxx_destruct;	// IMP=0x00200000002639a0
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *fileQueue; // @synthesize fileQueue=_fileQueue;
@property(nonatomic) _Bool isRequestConsideredForSampling; // @synthesize isRequestConsideredForSampling=_isRequestConsideredForSampling;
@property(retain, nonatomic) NSMutableDictionary *dictationSamplingVaribles; // @synthesize dictationSamplingVaribles=_dictationSamplingVaribles;
@property(retain, nonatomic) NSDate *currentSamplingDate; // @synthesize currentSamplingDate=_currentSamplingDate;
@property(nonatomic) long long numberOfRequestsTillNow; // @synthesize numberOfRequestsTillNow=_numberOfRequestsTillNow;
- (void)_writeDictationSamplingVariablesToFile:(id)arg1;	// IMP=0x001000000026385e
- (void)_createDictationSampledPlistIfItDoesNotExist;	// IMP=0x001000000026361a
- (void)createDictationSampledPlistIfItDoesNotExist;	// IMP=0x00100000002635cf
- (_Bool)isRequestSelectedForSampling;	// IMP=0x001000000026327a
- (_Bool)isSamplingDateCurrent;	// IMP=0x00100000002631c8
- (void)updateDateToCurrent;	// IMP=0x001000000026312c
- (void)setRequestCount:(long long)arg1;	// IMP=0x00100000002630be
- (void)decrementRequestCount;	// IMP=0x0010000000263016
- (void)updateRequestCountWithFlag:(_Bool)arg1;	// IMP=0x0010000000262ffb
- (void)incrementRequestCount;	// IMP=0x0010000000262fde
- (void)resetRequestCount;	// IMP=0x0010000000262fca
- (id)init;	// IMP=0x0010000000262e5b

@end

