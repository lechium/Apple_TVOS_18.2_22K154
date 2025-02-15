//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

@interface ADServiceStatistics : NSObject
{
    NSString *_serviceIdentifier;	// 8 = 0x8
    NSMutableDictionary *_statsDict;	// 16 = 0x10
    NSMutableDictionary *_commandTimes;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x002000000012ca1b
@property(readonly, nonatomic) NSString *serviceIdentifier; // @synthesize serviceIdentifier=_serviceIdentifier;
- (void)markResponseForCommand:(id)arg1;	// IMP=0x001000000012c6f0
- (void)markIncomingCommand:(id)arg1;	// IMP=0x001000000012c5dd
- (id)_commandTimes;	// IMP=0x001000000012c5a2
- (void)_saveStats;	// IMP=0x001000000012c44e
- (id)_statsForCommand:(id)arg1;	// IMP=0x001000000012c37a
- (id)_statsDict;	// IMP=0x001000000012c1c9
- (id)_serviceStatsPath;	// IMP=0x001000000012c138
- (id)_statsDirectory;	// IMP=0x001000000012c108
- (void)dealloc;	// IMP=0x001000000012c0ca
- (id)initWithServiceIdentifier:(id)arg1;	// IMP=0x001000000012bfed

@end

