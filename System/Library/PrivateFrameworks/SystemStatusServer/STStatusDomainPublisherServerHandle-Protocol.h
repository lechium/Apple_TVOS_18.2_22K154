//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SystemStatusServer/NSObject-Protocol.h>

@class STStatusDomainDataChangeRecord;
@protocol STStatusDomainData><STStatusDomainDataDifferencing, STStatusDomainDataChangeContext, STStatusDomainPublisherClientHandle;

@protocol STStatusDomainPublisherServerHandle <NSObject>
- (void)updateVolatileDataForPublisherClient:(id <STStatusDomainPublisherClientHandle>)arg1 domain:(unsigned long long)arg2 usingDiffProvider:(id <STStatusDomainDataDiff> (^)(id <STStatusDomainData><STStatusDomainDataDifferencing>, id *))arg3 completion:(void (^)(void))arg4;
- (void)updateDataForPublisherClient:(id <STStatusDomainPublisherClientHandle>)arg1 domain:(unsigned long long)arg2 usingDiffProvider:(id <STStatusDomainDataDiff> (^)(id <STStatusDomainData><STStatusDomainDataDifferencing>, id *))arg3 completion:(void (^)(void))arg4;
- (void)publishVolatileData:(id <STStatusDomainData><STStatusDomainDataDifferencing>)arg1 forPublisherClient:(id <STStatusDomainPublisherClientHandle>)arg2 domain:(unsigned long long)arg3 withChangeContext:(id <STStatusDomainDataChangeContext>)arg4 completion:(void (^)(void))arg5;
- (void)publishData:(id <STStatusDomainData><STStatusDomainDataDifferencing>)arg1 forPublisherClient:(id <STStatusDomainPublisherClientHandle>)arg2 domain:(unsigned long long)arg3 withChangeContext:(id <STStatusDomainDataChangeContext>)arg4 completion:(void (^)(void))arg5;
- (void)replaceVolatileDataChangeRecord:(STStatusDomainDataChangeRecord *)arg1 forPublisherClient:(id <STStatusDomainPublisherClientHandle>)arg2 completion:(void (^)(void))arg3;
- (void)replaceDataChangeRecord:(STStatusDomainDataChangeRecord *)arg1 forPublisherClient:(id <STStatusDomainPublisherClientHandle>)arg2 completion:(void (^)(void))arg3;
- (void)removePublisherClient:(id <STStatusDomainPublisherClientHandle>)arg1 forDomain:(unsigned long long)arg2;
- (void)registerPublisherClient:(id <STStatusDomainPublisherClientHandle>)arg1 forDomain:(unsigned long long)arg2 fallbackData:(id <STStatusDomainData><STStatusDomainDataDifferencing>)arg3;
- (id <STStatusDomainData><STStatusDomainDataDifferencing>)publishedVolatileDataForDomain:(unsigned long long)arg1;
- (id <STStatusDomainData><STStatusDomainDataDifferencing>)publishedDataForDomain:(unsigned long long)arg1;
@end

