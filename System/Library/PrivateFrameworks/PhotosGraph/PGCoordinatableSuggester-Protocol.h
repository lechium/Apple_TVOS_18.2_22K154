//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosGraph/PGSuggester-Protocol.h>

@class PGSuggestionOptions;
@protocol PGSuggestion;

@protocol PGCoordinatableSuggester <PGSuggester>
- (void)reset;
- (id <PGSuggestion>)nextSuggestionWithProgress:(void (^)(double, _Bool *))arg1;
- (void)startSuggestingWithOptions:(PGSuggestionOptions *)arg1;
@end

