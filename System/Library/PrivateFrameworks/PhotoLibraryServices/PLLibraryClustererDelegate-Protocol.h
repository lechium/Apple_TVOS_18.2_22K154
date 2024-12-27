//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotoLibraryServices/NSObject-Protocol.h>

@class NSArray, NSMutableArray, NSSet, PLLibraryClusterer;
@protocol PLMomentGenerationDataManagement;

@protocol PLLibraryClustererDelegate <NSObject>
- (NSMutableArray *)libraryClusterer:(PLLibraryClusterer *)arg1 createMomentClustersForAssetClusters:(NSArray *)arg2 existingMomentDataForAssets:(NSSet *)arg3;
- (void)logRoutineInformation;
- (id <PLMomentGenerationDataManagement>)dataManager;
@end

