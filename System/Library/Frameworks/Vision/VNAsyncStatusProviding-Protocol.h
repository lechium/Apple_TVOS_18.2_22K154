//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSError, VNAsyncStatus;

@protocol VNAsyncStatusProviding
@property(readonly, copy) VNAsyncStatus *asyncStatus;
- (void)resetAsyncStatus;
- (void)setAsyncStatus:(_Bool)arg1 error:(NSError *)arg2;
@end

