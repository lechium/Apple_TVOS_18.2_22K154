//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CNUIFavoritesEntryPicker, NSString;

__attribute__((visibility("hidden")))
@interface CNContactAddFavoriteAction
{
    CNUIFavoritesEntryPicker *_favoritesEntryPicker;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000016129
@property(retain, nonatomic) CNUIFavoritesEntryPicker *favoritesEntryPicker; // @synthesize favoritesEntryPicker=_favoritesEntryPicker;
- (void)_saveFavorite:(id)arg1;	// IMP=0x0000000000015f04
- (void)favoritesEntryPicker:(id)arg1 didPickEntry:(id)arg2;	// IMP=0x0000000000015e32
- (void)performActionWithSender:(id)arg1;	// IMP=0x0000000000015ce7
- (_Bool)canPerformAction;	// IMP=0x0000000000015cdf

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

