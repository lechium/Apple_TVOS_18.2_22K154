//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SystemStatus/NSObject-Protocol.h>

@class NSString;

@protocol STDynamicAttributionXPCServerProtocol <NSObject>
- (void)subscribeToUpdates;
- (void)setCurrentAttributionWebsiteString:(NSString *)arg1 maskingClientAuditToken:(CDStruct_6ad76789)arg2 reply:(void (^)(_Bool))arg3;
- (void)setCurrentAttributionStringWithFormat:(NSString *)arg1 maskingClientAuditToken:(CDStruct_6ad76789)arg2 reply:(void (^)(_Bool))arg3;
- (void)setCurrentAttributionLocalizableKey:(NSString *)arg1 maskingClientAuditToken:(CDStruct_6ad76789)arg2 reply:(void (^)(_Bool))arg3;
- (void)setCurrentAttributionKey:(NSString *)arg1 application:(NSString *)arg2 reply:(void (^)(_Bool))arg3;
@end

