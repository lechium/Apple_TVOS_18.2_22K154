//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "GEOExternalRequestCounterTicketBase.h"

@class GEORequestCounterPersistence, NSDate, NSString;

__attribute__((visibility("hidden")))
@interface _GEOLocalExternalRequestCounterTicket : GEOExternalRequestCounterTicketBase
{
    GEORequestCounterPersistence *_persistence;	// 8 = 0x8
    NSDate *_startDate;	// 16 = 0x10
    NSString *_requestType;	// 24 = 0x18
    NSString *_requestSubtype;	// 32 = 0x20
    NSString *_source;	// 40 = 0x28
}

+ (id)externalRequestCounterForType:(id)arg1 subtype:(id)arg2 source:(id)arg3 appId:(id)arg4 persistence:(id)arg5;	// IMP=0x0060000000fc2b34
- (void).cxx_destruct;	// IMP=0x0000000000fc2e01
- (void)_incrementExternalForApp:(id)arg1 startTime:(id)arg2 endTime:(id)arg3 xmitBytes:(long long)arg4 recvBytes:(long long)arg5 usedInterfaces:(unsigned long long)arg6 requestType:(id)arg7 requestSubtype:(id)arg8 source:(id)arg9;	// IMP=0x0000000000fc2bd3

@end

