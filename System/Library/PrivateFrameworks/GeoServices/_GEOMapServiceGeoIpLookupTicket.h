//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "GEOAbstractTicket.h"

@class GEOPDPlaceRequest, NSString;

__attribute__((visibility("hidden")))
@interface _GEOMapServiceGeoIpLookupTicket : GEOAbstractTicket
{
    GEOPDPlaceRequest *_placeRequest;	// 40 = 0x28
    id _requestToken;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000006c8977
@property(readonly, nonatomic) CDStruct_026435ec dataRequestKind;
- (void)cancel;	// IMP=0x00000000006c8891
- (void)submitWithHandler:(CDUnknownBlockType)arg1 auditToken:(id)arg2 networkActivity:(CDUnknownBlockType)arg3 handlerQueue:(id)arg4;	// IMP=0x00000000006c8597
- (id)initWithIpAddress:(id)arg1;	// IMP=0x00000000006c84b2

// Remaining properties
@property(readonly, nonatomic, getter=isCancelled) _Bool cancelled;
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

