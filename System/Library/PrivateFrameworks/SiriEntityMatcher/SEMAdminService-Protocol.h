//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

@protocol SEMAdminService
- (oneway void)endEvaluation:(void (^)(unsigned short))arg1;
- (oneway void)beginEvaluation:(NSArray *)arg1 completion:(void (^)(unsigned short))arg2;
- (oneway void)triggerMaintenance:(_Bool)arg1 completion:(void (^)(unsigned short))arg2;
@end

