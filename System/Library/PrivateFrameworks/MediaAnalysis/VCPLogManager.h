//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface VCPLogManager : NSObject
{
    _Bool _enableDatabaseLog;	// 8 = 0x8
    int _logLevel;	// 12 = 0xc
}

+ (id)dateFormatterDateTime;	// IMP=0x00600000003402f6
+ (id)dateFormatter;	// IMP=0x006000000034022f
+ (id)sharedLogManager;	// IMP=0x0060000000340050
@property(readonly) _Bool enableDatabaseLog; // @synthesize enableDatabaseLog=_enableDatabaseLog;
@property(readonly) int logLevel; // @synthesize logLevel=_logLevel;
- (id)init;	// IMP=0x00000000003400a5

@end

