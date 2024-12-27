//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface CLHRRecoveryInputHRData : NSObject
{
    unsigned long long _recordId;	// 8 = 0x8
    double _startTime;	// 16 = 0x10
    double _hr;	// 24 = 0x18
    double _hrConfidence;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x002000000030b3fc
@property(readonly, nonatomic) double hrConfidence; // @synthesize hrConfidence=_hrConfidence;
@property(readonly, nonatomic) double hr; // @synthesize hr=_hr;
@property(readonly, nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(readonly, nonatomic) unsigned long long recordId; // @synthesize recordId=_recordId;
- (id)description;	// IMP=0x001000000030b602
- (id)initWithHRRecoveryInputHR:(const struct HRRecoveryInputHR *)arg1;	// IMP=0x001000000030b5a4
- (id)initWithRecordId:(unsigned long long)arg1 startTime:(double)arg2 hr:(double)arg3 hrConfidence:(double)arg4;	// IMP=0x001000000030b53a
- (void)encodeWithCoder:(id)arg1;	// IMP=0x001000000030b4b7
- (id)initWithCoder:(id)arg1;	// IMP=0x001000000030b404

@end

