//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CNContactSuggestionViewController;

__attribute__((visibility("hidden")))
@interface CNPropertySuggestionAction
{
    long long _selectedChoice;	// 8 = 0x8
    CNContactSuggestionViewController *_suggestionViewController;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000008365d
@property(retain, nonatomic) CNContactSuggestionViewController *suggestionViewController; // @synthesize suggestionViewController=_suggestionViewController;
@property(nonatomic) long long selectedChoice; // @synthesize selectedChoice=_selectedChoice;
- (void)reject;	// IMP=0x00000000000835d8
- (void)confirm;	// IMP=0x0000000000083586
- (_Bool)_confirmOrReject:(_Bool)arg1;	// IMP=0x000000000008357e
- (void)performActionForItem:(id)arg1 sender:(id)arg2;	// IMP=0x0000000000083257

@end

