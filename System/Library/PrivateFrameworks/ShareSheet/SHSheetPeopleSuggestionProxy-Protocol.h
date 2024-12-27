//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ShareSheet/SHSheetProxy-Protocol.h>

@class SFProxyText;
@protocol SFPeopleSuggestion;

@protocol SHSheetPeopleSuggestionProxy <SHSheetProxy>
@property(readonly, nonatomic) _Bool isTapToRadar;
@property(readonly, nonatomic) unsigned int transportImageSlotID;
@property(readonly, nonatomic) unsigned int avatarImageSlotID;
@property(readonly, nonatomic) SFProxyText *subtitle;
@property(readonly, nonatomic) SFProxyText *displayName;
@property(readonly, nonatomic) id <SFPeopleSuggestion> peopleSuggestion;
@end

