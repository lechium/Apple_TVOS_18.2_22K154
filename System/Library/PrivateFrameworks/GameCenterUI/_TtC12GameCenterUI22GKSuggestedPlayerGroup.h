//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSArray, NSString;

@interface _TtC12GameCenterUI22GKSuggestedPlayerGroup : NSObject
{
    MISSING_TYPE *players;	// 8 = 0x8
    MISSING_TYPE *groupName;	// 16 = 0x10
    MISSING_TYPE *messagesGroupIdentifier;	// 32 = 0x20
    MISSING_TYPE *source;	// 48 = 0x30
    MISSING_TYPE *conversationIdentifier;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000000002b986c
- (id)init;	// IMP=0x00000000002b9703
@property(nonatomic, readonly) _Bool isNearby;
@property(nonatomic, readonly) _Bool fromPeopleSuggester;
@property(nonatomic, copy) NSString *conversationIdentifier;
@property(nonatomic) long long source; // @synthesize source;
@property(nonatomic, copy) NSString *messagesGroupIdentifier;
@property(nonatomic, copy) NSString *groupName;
@property(nonatomic, copy) NSArray *players;

@end

