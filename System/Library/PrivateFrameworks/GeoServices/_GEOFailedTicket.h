//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "GEOAbstractMapServiceTicket.h"

@class NSError;

__attribute__((visibility("hidden")))
@interface _GEOFailedTicket : GEOAbstractMapServiceTicket
{
    NSError *_error;	// 296 = 0x128
}

- (void).cxx_destruct;	// IMP=0x00000000006b785d
- (void)submitWithRefinedHandler:(CDUnknownBlockType)arg1 auditToken:(id)arg2 timeout:(long long)arg3 networkActivity:(CDUnknownBlockType)arg4;	// IMP=0x00000000006b7623
- (void)submitWithHandler:(CDUnknownBlockType)arg1 auditToken:(id)arg2 timeout:(long long)arg3 networkActivity:(CDUnknownBlockType)arg4;	// IMP=0x00000000006b73eb
- (id)initWithError:(id)arg1 traits:(id)arg2;	// IMP=0x00000000006b7360

@end

