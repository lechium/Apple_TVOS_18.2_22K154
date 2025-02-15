//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TVContentPartnerKitUI/JSExport-Protocol.h>

@class JSValue, NSDictionary, NSString;

@protocol TVCKJSNetworkInterface <JSExport>
- (void)invalidateConfiguration;
- (void)fetchConfiguration:(_Bool)arg1:(JSValue *)arg2;
- (void)cancelRequest:(NSString *)arg1;
- (JSValue *)makeRequest:(NSDictionary *)arg1:(JSValue *)arg2;
@end

