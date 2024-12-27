//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AXMediaUtilities/NSCopying-Protocol.h>

@class NSAttributedString, NSString;

@protocol AXMDataAxisDescriptor <NSCopying>
@property(readonly, nonatomic) _Bool isCategoricalAxis;
@property(copy, nonatomic) NSAttributedString *attributedTitle;
@property(copy, nonatomic) NSString *title;
- (double)upperBound;
- (double)lowerBound;
@end

