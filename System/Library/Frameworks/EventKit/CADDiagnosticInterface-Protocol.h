//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <EventKit/NSObject-Protocol.h>

@protocol CADDiagnosticInterface <NSObject>
- (void)CADDiagnosticsCancelCollectionWithToken:(unsigned int)arg1 reply:(void (^)(int))arg2;
- (void)CADDiagnosticsCollectWithToken:(unsigned int)arg1 options:(long long)arg2 trafficLogsCollectionMode:(unsigned long long)arg3 reply:(void (^)(int))arg4;
@end

