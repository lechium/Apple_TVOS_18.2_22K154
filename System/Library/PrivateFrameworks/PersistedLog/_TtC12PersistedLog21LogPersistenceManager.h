//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface _TtC12PersistedLog21LogPersistenceManager : NSObject
{
    MISSING_TYPE *fileManager;	// 8 = 0x8
    MISSING_TYPE *logs;	// 48 = 0x30
    MISSING_TYPE *logsMap;	// 56 = 0x38
    MISSING_TYPE *logger;	// 0 = 0x0
    MISSING_TYPE *statisticsTimer;	// 0 = 0x0
    MISSING_TYPE *maxOverallSize;	// 3 = 0x3
    MISSING_TYPE *dispatchQueue;	// 0 = 0x0
}

+ (id)shared;	// IMP=0x00400000000043ea
- (void).cxx_destruct;	// IMP=0x0000000000004cf3
- (void)sendInvalidLogEvent;	// IMP=0x0000000000005e5c
- (void)persistMessage:(const char *)arg1 type:(unsigned char)arg2 osLog:(id)arg3 time:(id)arg4;	// IMP=0x0000000000005d8d
- (void)startLogWithSubsystem:(id)arg1 category:(id)arg2 maxLogFolderSize:(unsigned long long)arg3 logObject:(id)arg4;	// IMP=0x00000000000055a0
- (void)dealloc;	// IMP=0x0000000000004cd6
- (id)init;	// IMP=0x0000000000004c57

@end

