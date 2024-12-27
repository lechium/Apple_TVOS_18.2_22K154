//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosGraph/NSObject-Protocol.h>

@class NSArray, NSDate, NSIndexSet, PGSuggestionOptions, PGSuggestionSession, PHAsset;
@protocol PGSuggestion;

@protocol PGSuggester <NSObject>
+ (NSIndexSet *)suggestionSubtypes;
+ (NSIndexSet *)suggestionTypes;
+ (id)suggesterWithSession:(PGSuggestionSession *)arg1;
@property(nonatomic) _Bool lastSuggestionWasColliding;
- (_Bool)canGenerateSuggestionWithAsset:(PHAsset *)arg1 onDate:(NSDate *)arg2;
- (NSArray *)reasonsForSuggestion:(id <PGSuggestion>)arg1;
- (NSArray *)suggestionsWithOptions:(PGSuggestionOptions *)arg1 progress:(void (^)(double, _Bool *))arg2;
- (id)initWithSession:(PGSuggestionSession *)arg1;
@end

