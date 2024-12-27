//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SystemStatusServer/NSObject-Protocol.h>

@class STStatusDomainDataChangeRecord;
@protocol STStatusDomainData, STStatusDomainData><STStatusDomainDataDifferencing, STStatusDomainDataChangeContext, STStatusDomainDataDiff;

@protocol STStatusDomainPublisherXPCServer <NSObject>
- (void)replaceDataChangeRecord:(STStatusDomainDataChangeRecord *)arg1 discardingOnExit:(_Bool)arg2 reply:(void (^)(void))arg3;
- (void)publishDiff:(id <STStatusDomainDataDiff>)arg1 forDomain:(unsigned long long)arg2 withChangeContext:(id <STStatusDomainDataChangeContext>)arg3 replacingData:(_Bool)arg4 discardingOnExit:(_Bool)arg5 reply:(void (^)(void))arg6;
- (void)publishData:(id <STStatusDomainData>)arg1 forDomain:(unsigned long long)arg2 withChangeContext:(id <STStatusDomainDataChangeContext>)arg3 discardingOnExit:(_Bool)arg4 reply:(void (^)(void))arg5;
- (void)unregisterFromPublishingDomain:(unsigned long long)arg1;
- (void)registerToPublishDomain:(unsigned long long)arg1 fallbackData:(id <STStatusDomainData><STStatusDomainDataDifferencing>)arg2;
@end

