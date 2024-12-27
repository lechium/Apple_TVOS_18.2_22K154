//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "GEORequestCounterTicketBase.h"

@class GEORequestCounterRemoteProxy;

__attribute__((visibility("hidden")))
@interface _GEORemoteRequestCounterTicket : GEORequestCounterTicketBase
{
    GEORequestCounterRemoteProxy *_remoteProxy;	// 8 = 0x8
}

+ (id)requestCounterTicketForType:(CDStruct_026435ec)arg1 auditToken:(id)arg2 traits:(id)arg3 remoteProxy:(id)arg4;	// IMP=0x00600000002f7d4e
- (void).cxx_destruct;	// IMP=0x00000000002f7e34
- (void)_incrementForApp:(id)arg1 startTime:(id)arg2 endTime:(id)arg3 requestType:(CDStruct_026435ec)arg4 result:(unsigned char)arg5 error:(id)arg6 xmitBytes:(long long)arg7 recvBytes:(long long)arg8 usedInterfaces:(unsigned long long)arg9;	// IMP=0x00000000002f7e17

@end

