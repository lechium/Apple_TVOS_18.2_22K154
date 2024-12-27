//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, VNEntityIdentificationModel;
@protocol VNEntityIdentificationModelDataSource;

__attribute__((visibility("hidden")))
@interface _VNEntityIdentificationModelDataSourceBasedTrainedModelDataProvider : NSObject
{
    VNEntityIdentificationModel *_entityIdentificationModel;	// 8 = 0x8
    id <VNEntityIdentificationModelDataSource> _dataSource;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000040d986
- (id)trainedModelObservationAtIndex:(unsigned long long)arg1 forEntityAtIndex:(unsigned long long)arg2;	// IMP=0x000000000040d966
- (unsigned long long)trainedModelNumberOfObservationsForEntityAtIndex:(unsigned long long)arg1;	// IMP=0x000000000040d949
- (unsigned long long)trainedModelIndexOfEntityWithUniqueIdentifier:(id)arg1;	// IMP=0x000000000040d92c
- (id)trainedModelUniqueIdentifierOfEntityAtIndex:(unsigned long long)arg1;	// IMP=0x000000000040d90f
- (unsigned long long)trainedModelEntityCount;	// IMP=0x000000000040d8f5
- (id)initWithEntityIdentificationModel:(id)arg1 dataSource:(id)arg2;	// IMP=0x000000000040d85c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

