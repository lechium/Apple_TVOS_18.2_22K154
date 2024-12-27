//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/NSObject-Protocol.h>

@class NSArray, PXSuggestionToken;
@protocol PXPerson;

@protocol PXPeopleSuggestionManagerDataSource <NSObject>
- (id <PXPerson>)commitSuggestionsForPerson:(id <PXPerson>)arg1 withConfirmedSuggestions:(NSArray *)arg2 andRejectedSuggestions:(NSArray *)arg3;
- (_Bool)cancelSuggestionForPerson:(id <PXPerson>)arg1 withToken:(PXSuggestionToken *)arg2 error:(id *)arg3;
- (PXSuggestionToken *)suggestionsForPerson:(id <PXPerson>)arg1 withConfirmedSuggestions:(NSArray *)arg2 andRejectedSuggestions:(NSArray *)arg3 completion:(void (^)(NSArray *))arg4;

@optional
@property(nonatomic) unsigned long long initialPageLimit;
// Preceding property had unknown attributes: ?
// Original attribute string: TQ,?,N

- (void)stopListeningForLibraryChanges;
- (void)startListeningForLibraryChanges;
@end

