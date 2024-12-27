//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/NSObject-Protocol.h>
#import <PhotosUICore/PXStoryDiagnosticHUDContentProvider-Protocol.h>
#import <PhotosUICore/PXTapToRadarDiagnosticProvider-Protocol.h>

@class NSDictionary, NSProgress, NSString, PXStoryAutoEditMomentsProvider;
@protocol PXAudioAssetFetchResult;

@protocol PXStoryAutoEditDecisionListsProducer <PXStoryDiagnosticHUDContentProvider, PXTapToRadarDiagnosticProvider, NSObject>
- (_Bool)handlesDiagnosticTextForHUDType:(long long)arg1;
- (NSProgress *)requestDefaultAutoEditDecisionListsWithColorGradeCategory:(NSString *)arg1 options:(unsigned long long)arg2 resultHandler:(void (^)(PXStoryProducerResult *))arg3;
- (NSProgress *)requestAutoEditDecisionListsWithOptions:(unsigned long long)arg1 songs:(id <PXAudioAssetFetchResult>)arg2 colorGradeCategoriesBySong:(NSDictionary *)arg3 resultHandler:(void (^)(PXStoryProducerResult *))arg4;

@optional
@property(readonly, nonatomic) PXStoryAutoEditMomentsProvider *diagnosticsMomentsProvider;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"PXStoryAutoEditMomentsProvider",?,R,N

@end

