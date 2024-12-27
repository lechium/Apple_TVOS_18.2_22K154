//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CloudKit/CKDistributedTimestampVector-Protocol.h>

@class CKDistributedSiteIdentifier, CKDistributedTimestampImmutableClockVector, NSIndexSet;

@protocol CKDistributedTimestampMutableVector <CKDistributedTimestampVector>
- (void)addClockValuesInIndexSet:(NSIndexSet *)arg1 withClockType:(unsigned char)arg2 forSiteIdentifier:(CKDistributedSiteIdentifier *)arg3;
- (void)addClockValuesInIndexSet:(NSIndexSet *)arg1 forSiteIdentifier:(CKDistributedSiteIdentifier *)arg2;
- (void)minusVector:(CKDistributedTimestampImmutableClockVector *)arg1;
- (void)intersectVector:(CKDistributedTimestampImmutableClockVector *)arg1;
@end

