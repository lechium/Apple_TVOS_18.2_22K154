//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Vision/NSObject-Protocol.h>

@class VNFaceObservation, VNPersonsModel;
@protocol NSObject><NSCopying><NSSecureCoding;

@protocol VNPersonsModelDataSource <NSObject>
- (VNFaceObservation *)personsModel:(VNPersonsModel *)arg1 faceObservationAtIndex:(unsigned long long)arg2 forPersonAtIndex:(unsigned long long)arg3;
- (unsigned long long)personsModel:(VNPersonsModel *)arg1 numberOfFaceObservationsForPersonAtIndex:(unsigned long long)arg2;
- (unsigned long long)personsModel:(VNPersonsModel *)arg1 indexOfPersonWithUniqueIdentifier:(id <NSObject><NSCopying><NSSecureCoding>)arg2;
- (id <NSObject><NSCopying><NSSecureCoding>)personsModel:(VNPersonsModel *)arg1 uniqueIdentifierOfPersonAtIndex:(unsigned long long)arg2;
- (unsigned long long)numberOfPersonsInPersonsModel:(VNPersonsModel *)arg1;

@optional
- (unsigned long long)lastDataChangeSequenceNumberForPersonsModel:(VNPersonsModel *)arg1;
@end

