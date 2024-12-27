//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CloudKit/CKDistributedTimestampVector-Protocol.h>

@class CKDistributedTimestampAttributedVector, CKDistributedTimestampImmutableClockVector, NSSet, NSString;

@protocol CKDistributedTimestampVectorInternal <CKDistributedTimestampVector>
- (CKDistributedTimestampImmutableClockVector *)clockVector;
- (NSString *)descriptionWithStringSiteIdentifiers:(_Bool)arg1 usingSuperscripts:(_Bool)arg2;
- (CKDistributedTimestampAttributedVector *)vectorFillingInImplicitClockValuesUsingSiteIdentifiers:(NSSet *)arg1;
@end

