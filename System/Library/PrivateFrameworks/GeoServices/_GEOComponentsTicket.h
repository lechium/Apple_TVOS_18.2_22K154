//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "GEOAbstractMapServiceTicket.h"

@class GEOMapItemIdentifier, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface _GEOComponentsTicket : GEOAbstractMapServiceTicket
{
    NSDictionary *_components;	// 296 = 0x128
    GEOMapItemIdentifier *_identifier;	// 304 = 0x130
    int _resultProviderID;	// 312 = 0x138
    NSString *_contentProvider;	// 320 = 0x140
    id _requestToken;	// 328 = 0x148
}

- (void).cxx_destruct;	// IMP=0x00000000006b6f79
- (void)cancel;	// IMP=0x00000000006b6efc
- (CDStruct_026435ec)dataRequestKind;	// IMP=0x00000000006b6ebc
- (void)submitWithHandler:(CDUnknownBlockType)arg1 auditToken:(id)arg2 timeout:(long long)arg3 networkActivity:(CDUnknownBlockType)arg4;	// IMP=0x00000000006b6c6d
- (id)description;	// IMP=0x00000000006b6bc6
- (id)initWithComponents:(id)arg1 identifier:(id)arg2 resultProviderID:(int)arg3 contentProvider:(id)arg4 traits:(id)arg5;	// IMP=0x00000000006b6ab5
- (id)initWithTraits:(id)arg1;	// IMP=0x00000000006b6a86

@end

