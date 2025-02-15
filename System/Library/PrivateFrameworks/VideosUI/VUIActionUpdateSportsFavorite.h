//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

__attribute__((visibility("hidden")))
@interface VUIActionUpdateSportsFavorite
{
    _Bool isFavorite;	// 8 = 0x8
    _Bool confirmsRemoval;	// 9 = 0x9
    _Bool firesBackgroundEvent;	// 10 = 0xa
    NSString *_sportsTeamID;	// 16 = 0x10
    NSString *_sportsTeamName;	// 24 = 0x18
}

+ (void)performFavoritesOperation:(_Bool)arg1 teamId:(id)arg2 teamName:(id)arg3 requestExecutionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0060000000165cce
+ (void)performFavoritesOperation:(_Bool)arg1 teamId:(id)arg2 teamName:(id)arg3 confirmRemoval:(_Bool)arg4 fireBackgroundEvent:(_Bool)arg5 requestExecutionHandler:(CDUnknownBlockType)arg6;	// IMP=0x006000000016556b
- (void).cxx_destruct;	// IMP=0x0000000000165d35
@property(copy, nonatomic) NSString *sportsTeamName; // @synthesize sportsTeamName=_sportsTeamName;
@property(copy, nonatomic) NSString *sportsTeamID; // @synthesize sportsTeamID=_sportsTeamID;
- (_Bool)isAccountRequired;	// IMP=0x0000000000165563
- (void)performWithTargetResponder:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000165259
- (id)initWithContextData:(id)arg1;	// IMP=0x00000000001650fd

@end

