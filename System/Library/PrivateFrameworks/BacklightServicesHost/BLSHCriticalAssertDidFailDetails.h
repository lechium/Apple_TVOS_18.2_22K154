//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSString;

__attribute__((visibility("hidden")))
@interface BLSHCriticalAssertDidFailDetails : NSObject
{
    _Bool _debugLogsEnabled;	// 8 = 0x8
    NSDate *_date;	// 16 = 0x10
    NSString *_buildVersion;	// 24 = 0x18
    NSString *_device;	// 32 = 0x20
    NSString *_explanation;	// 40 = 0x28
    NSString *_processName;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000081fca
@property(nonatomic) _Bool debugLogsEnabled; // @synthesize debugLogsEnabled=_debugLogsEnabled;
@property(copy, nonatomic) NSString *processName; // @synthesize processName=_processName;
@property(copy, nonatomic) NSString *explanation; // @synthesize explanation=_explanation;
@property(copy, nonatomic) NSString *device; // @synthesize device=_device;
@property(copy, nonatomic) NSString *buildVersion; // @synthesize buildVersion=_buildVersion;
@property(retain, nonatomic) NSDate *date; // @synthesize date=_date;
- (id)initWithCriticalAssertDidFailDictionary:(id)arg1;	// IMP=0x0000000000081d04

@end

