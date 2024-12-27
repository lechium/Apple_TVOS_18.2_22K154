//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TextRecognition/NSObject-Protocol.h>

@class CRGroupRegion, CRNormalizedQuad, NSArray;
@protocol CRDirectionalRegion;

@protocol CRCTLDDelegate <NSObject>
- (long long)groupingConstraintForRegion1:(id <CRDirectionalRegion>)arg1 region2:(id <CRDirectionalRegion>)arg2;

@optional
- (CRGroupRegion *)groupWithQuad:(CRNormalizedQuad *)arg1 layoutDirection:(unsigned long long)arg2 subregions:(NSArray *)arg3;
@end

