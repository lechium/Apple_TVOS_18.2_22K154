//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SearchFoundation/NSObject-Protocol.h>

@class NSArray, NSData, NSDictionary, NSMutableDictionary, NSString;

@protocol SFSearchSuggestion <NSObject>
@property(readonly, nonatomic) NSData *jsonData;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property(copy, nonatomic) NSMutableDictionary *serverFeatures;
@property(copy, nonatomic) NSString *detailText;
@property(copy, nonatomic) NSString *utteranceText;
@property(copy, nonatomic) NSString *scopedSearchApplicationBundleIdentifier;
@property(copy, nonatomic) NSString *fbr;
@property(nonatomic) _Bool previouslyEngaged;
@property(copy, nonatomic) NSString *bundleIdentifier;
@property(copy, nonatomic) NSString *topicIdentifier;
@property(copy, nonatomic) NSArray *duplicateSuggestions;
@property(nonatomic) int type;
@property(nonatomic) double score;
@property(copy, nonatomic) NSString *query;
@property(copy, nonatomic) NSString *suggestion;
@property(copy, nonatomic) NSString *identifier;
@end

