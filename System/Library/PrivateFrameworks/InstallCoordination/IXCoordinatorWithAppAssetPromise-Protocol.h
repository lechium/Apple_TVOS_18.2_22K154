//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <InstallCoordination/NSObject-Protocol.h>

@class IXOwnedDataPromise;

@protocol IXCoordinatorWithAppAssetPromise <NSObject>
@property(readonly, nonatomic) _Bool hasAppAssetPromise;
- (_Bool)appAssetPromiseHasBegunFulfillment:(_Bool *)arg1 error:(id *)arg2;
- (unsigned long long)appAssetPromiseResponsibleClientWithError:(id *)arg1;
- (_Bool)setAppAssetPromiseResponsibleClient:(unsigned long long)arg1 error:(id *)arg2;
- (IXOwnedDataPromise *)appAssetPromiseWithError:(id *)arg1;
- (_Bool)setAppAssetPromise:(IXOwnedDataPromise *)arg1 error:(id *)arg2;
@end

